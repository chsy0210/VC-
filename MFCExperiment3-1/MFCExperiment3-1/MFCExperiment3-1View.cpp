
// MFCExperiment3-1View.cpp : CMFCExperiment31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment3-1.h"
#endif

#include "MFCExperiment3-1Doc.h"
#include "MFCExperiment3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment31View

IMPLEMENT_DYNCREATE(CMFCExperiment31View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCExperiment31View 构造/析构

CMFCExperiment31View::CMFCExperiment31View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment31View::~CMFCExperiment31View()
{
}

BOOL CMFCExperiment31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment31View 绘制

void CMFCExperiment31View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment31View 诊断

#ifdef _DEBUG
void CMFCExperiment31View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment31Doc* CMFCExperiment31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment31Doc)));
	return (CMFCExperiment31Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment31View 消息处理程序


void CMFCExperiment31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CClientDC dc(this);
	CString s;
	s = _T("左键正被按下");
	dc.TextOutW(100, 200, s);

	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CClientDC dc(this);
	CString S;
	S = _T("左键正在抬起");
	dc.TextOutW(100, 300, S);

	CView::OnLButtonUp(nFlags, point);
}
