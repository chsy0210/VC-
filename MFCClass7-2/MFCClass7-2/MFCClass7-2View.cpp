
// MFCClass7-2View.cpp : CMFCClass72View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCClass7-2.h"
#endif

#include "MFCClass7-2Doc.h"
#include "MFCClass7-2View.h"
#include"MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass72View

IMPLEMENT_DYNCREATE(CMFCClass72View, CView)

BEGIN_MESSAGE_MAP(CMFCClass72View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMFCClass72View::OnPopout)
END_MESSAGE_MAP()

// CMFCClass72View 构造/析构

CMFCClass72View::CMFCClass72View()
{
	// TODO:  在此处添加构造代码

}

CMFCClass72View::~CMFCClass72View()
{
}

BOOL CMFCClass72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCClass72View 绘制

void CMFCClass72View::OnDraw(CDC* /*pDC*/)
{
	CMFCClass72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCClass72View 打印

BOOL CMFCClass72View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCClass72View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCClass72View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCClass72View 诊断

#ifdef _DEBUG
void CMFCClass72View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass72Doc* CMFCClass72View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass72Doc)));
	return (CMFCClass72Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass72View 消息处理程序


void CMFCClass72View::OnPopout()
{
	// TODO:  在此添加命令处理程序代码

	MyDialog dlg;
	int r = dlg.DoModal();

}
