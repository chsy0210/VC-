
// MFCExperiment1-1View.cpp : CMFCExperiment11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment1-1.h"
#endif

#include "MFCExperiment1-1Doc.h"
#include "MFCExperiment1-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment11View

IMPLEMENT_DYNCREATE(CMFCExperiment11View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment11View 构造/析构

CMFCExperiment11View::CMFCExperiment11View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment11View::~CMFCExperiment11View()
{
}

BOOL CMFCExperiment11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment11View 绘制

void CMFCExperiment11View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment11View 诊断

#ifdef _DEBUG
void CMFCExperiment11View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment11Doc* CMFCExperiment11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment11Doc)));
	return (CMFCExperiment11Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment11View 消息处理程序


void CMFCExperiment11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CMFCExperiment11Doc *pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(100,200,pDoc->S);

	CView::OnLButtonDown(nFlags, point);
}
