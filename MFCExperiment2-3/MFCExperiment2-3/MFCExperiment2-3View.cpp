
// MFCExperiment2-3View.cpp : CMFCExperiment23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment2-3.h"
#endif

#include "MFCExperiment2-3Doc.h"
#include "MFCExperiment2-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment23View

IMPLEMENT_DYNCREATE(CMFCExperiment23View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment23View 构造/析构

CMFCExperiment23View::CMFCExperiment23View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment23View::~CMFCExperiment23View()
{
}

BOOL CMFCExperiment23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment23View 绘制

void CMFCExperiment23View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment23View 诊断

#ifdef _DEBUG
void CMFCExperiment23View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment23Doc* CMFCExperiment23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment23Doc)));
	return (CMFCExperiment23Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment23View 消息处理程序


void CMFCExperiment23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CMFCExperiment23Doc* pDoc = GetDocument();
	pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment23View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CMFCExperiment23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(100, 200, s);

	CView::OnRButtonDown(nFlags, point);
}
