
// MFCExperiment3-2View.cpp : CMFCExperiment32View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment3-2.h"
#endif

#include "MFCExperiment3-2Doc.h"
#include "MFCExperiment3-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment32View

IMPLEMENT_DYNCREATE(CMFCExperiment32View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment32View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment32View 构造/析构

CMFCExperiment32View::CMFCExperiment32View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment32View::~CMFCExperiment32View()
{
}

BOOL CMFCExperiment32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment32View 绘制

void CMFCExperiment32View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment32View 诊断

#ifdef _DEBUG
void CMFCExperiment32View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment32Doc* CMFCExperiment32View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment32Doc)));
	return (CMFCExperiment32Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment32View 消息处理程序


void CMFCExperiment32View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	
	CClientDC dc(this);
	CMFCExperiment32Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("A+B=%d"), pDoc->A+pDoc->B);
	dc.TextOutW(100, 200, s);

	CView::OnLButtonDown(nFlags, point);
}
