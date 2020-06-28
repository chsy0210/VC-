
// MFCClass7-1View.cpp : CMFCClass71View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCClass7-1.h"
#endif

#include "MFCClass7-1Doc.h"
#include "MFCClass7-1View.h"
#include"MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass71View

IMPLEMENT_DYNCREATE(CMFCClass71View, CView)

BEGIN_MESSAGE_MAP(CMFCClass71View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMFCClass71View::OnPopout)
END_MESSAGE_MAP()

// CMFCClass71View 构造/析构

CMFCClass71View::CMFCClass71View()
{
	// TODO:  在此处添加构造代码

}

CMFCClass71View::~CMFCClass71View()
{
}

BOOL CMFCClass71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCClass71View 绘制

void CMFCClass71View::OnDraw(CDC* /*pDC*/)
{
	CMFCClass71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCClass71View 打印

BOOL CMFCClass71View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCClass71View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCClass71View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCClass71View 诊断

#ifdef _DEBUG
void CMFCClass71View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass71Doc* CMFCClass71View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass71Doc)));
	return (CMFCClass71Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass71View 消息处理程序


void CMFCClass71View::OnPopout()
{
	// TODO:  在此添加命令处理程序代码

	CClientDC dc(this);
	MyDialog dlg;
	int r = dlg.DoModal();
	if (r == IDOK){
		CString str;
		str = _T("你已退出对话框");
		dc.TextOutW(100, 200, str);
	}

}
