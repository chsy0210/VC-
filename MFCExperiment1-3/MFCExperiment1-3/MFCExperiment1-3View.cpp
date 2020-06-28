
// MFCExperiment1-3View.cpp : CMFCExperiment13View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment1-3.h"
#endif

#include "MFCExperiment1-3Doc.h"
#include "MFCExperiment1-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment13View

IMPLEMENT_DYNCREATE(CMFCExperiment13View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment13View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment13View 构造/析构

CMFCExperiment13View::CMFCExperiment13View()
{
	// TODO:  在此处添加构造代码
	B = _T("钟星桦");
}

CMFCExperiment13View::~CMFCExperiment13View()
{
}

BOOL CMFCExperiment13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment13View 绘制

void CMFCExperiment13View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment13View 诊断

#ifdef _DEBUG
void CMFCExperiment13View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment13Doc* CMFCExperiment13View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment13Doc)));
	return (CMFCExperiment13Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment13View 消息处理程序


void CMFCExperiment13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CMFCExperiment13Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString C;
	C.Format(_T("%s%s"), pDoc->A, B);
	dc.TextOutW(100, 200, C);
	CView::OnLButtonDown(nFlags, point);
}
