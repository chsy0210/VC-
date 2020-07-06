
// MFCExperiment7-4View.cpp : CMFCExperiment74View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment7-4.h"
#endif

#include "MFCExperiment7-4Doc.h"
#include "MFCExperiment7-4View.h"
#include"Mydialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment74View

IMPLEMENT_DYNCREATE(CMFCExperiment74View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment74View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_32771, &CMFCExperiment74View::On32771)
END_MESSAGE_MAP()

// CMFCExperiment74View 构造/析构

CMFCExperiment74View::CMFCExperiment74View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment74View::~CMFCExperiment74View()
{
}

BOOL CMFCExperiment74View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment74View 绘制

void CMFCExperiment74View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment74Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment74View 打印

BOOL CMFCExperiment74View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment74View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCExperiment74View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCExperiment74View 诊断

#ifdef _DEBUG
void CMFCExperiment74View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment74View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment74Doc* CMFCExperiment74View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment74Doc)));
	return (CMFCExperiment74Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment74View 消息处理程序


void CMFCExperiment74View::On32771()
{
	// TODO:  在此添加命令处理程序代码
	Mydialog dlg;
	dlg.DoModal();
}
