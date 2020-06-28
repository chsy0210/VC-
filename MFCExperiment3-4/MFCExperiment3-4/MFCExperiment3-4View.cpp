
// MFCExperiment3-4View.cpp : CMFCExperiment34View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment3-4.h"
#endif

#include "MFCExperiment3-4Doc.h"
#include "MFCExperiment3-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment34View

IMPLEMENT_DYNCREATE(CMFCExperiment34View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment34View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment34View 构造/析构

CMFCExperiment34View::CMFCExperiment34View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment34View::~CMFCExperiment34View()
{
}

BOOL CMFCExperiment34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment34View 绘制

void CMFCExperiment34View::OnDraw(CDC* pDC)
{
	CMFCExperiment34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect A(100, 100, 400, 300);
	CRect B(500, 100, 800, 300);
	CRect C(100, 400, 400, 600);
	CRect D(500, 400, 800, 600);
	pDC->Rectangle(A);
	pDC->Rectangle(B);
	pDC->Rectangle(C);
	pDC->Rectangle(D);
	CString a, b, c, d;
	a = _T("A");
	b = _T("B");
	c = _T("C");
	d = _T("D");
	pDC->TextOutW(250, 150, a);
	pDC->TextOutW(650, 150, b);
	pDC->TextOutW(250, 450, c);
	pDC->TextOutW(650, 450, d);

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment34View 诊断

#ifdef _DEBUG
void CMFCExperiment34View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment34Doc* CMFCExperiment34View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment34Doc)));
	return (CMFCExperiment34Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment34View 消息处理程序


void CMFCExperiment34View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CClientDC dc(this);
	CString s;
	if (point.x >= 100 && point.x <= 400 && point.y >= 100 && point.y <= 300)
	{
		a = rand() % 100 + 0;
		s.Format(_T("%d"), a);
		dc.TextOutW(250, 200, s);
	}
	else if (point.x >= 500 && point.x <= 800 && point.y >= 100 && point.y <= 300)
	{
		b = rand() % 100 + 0;
		s.Format(_T("%d"), b);
		dc.TextOutW(650, 200, s);
	}
	else if (point.x >= 500 && point.x <= 800 && point.y >= 400 && point.y <= 600)
	{
		flag++;
	}
	else
	{
		s.Format(_T("点击无效"));
		dc.TextOutW(900, 350, s);
	}

	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment34View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s;
	if (point.x >= 100 && point.x <= 400 && point.y >= 400 && point.y <= 600)
	{
		if (flag == 1)
			c = a + b;
		else if (flag == 2)
			c = a - b;
		else if (flag == 3)
			c = a*b;
		else
			c = a / b;
		s.Format(_T("%d"), c);
		dc.TextOutW(250, 500, s);
	}

	CView::OnRButtonDown(nFlags, point);
}
