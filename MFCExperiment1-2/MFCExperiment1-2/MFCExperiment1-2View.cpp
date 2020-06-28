
// MFCExperiment1-2View.cpp : CMFCExperiment12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment1-2.h"
#endif

#include "MFCExperiment1-2Doc.h"
#include "MFCExperiment1-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment12View

IMPLEMENT_DYNCREATE(CMFCExperiment12View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment12View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment12View 构造/析构

CMFCExperiment12View::CMFCExperiment12View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment12View::~CMFCExperiment12View()
{
}

BOOL CMFCExperiment12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment12View 绘制

void CMFCExperiment12View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment12View 诊断

#ifdef _DEBUG
void CMFCExperiment12View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment12Doc* CMFCExperiment12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment12Doc)));
	return (CMFCExperiment12Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment12View 消息处理程序


void CMFCExperiment12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CMFCExperiment12Doc* pDoc = GetDocument();
	pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment12View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CClientDC dc(this);
	CMFCExperiment12Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(100, 200, s);

	CView::OnRButtonDown(nFlags, point);
}
