
// MFCExperiment4-1View.cpp : CMFCExperiment41View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment4-1.h"
#endif

#include "MFCExperiment4-1Doc.h"
#include "MFCExperiment4-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment41View

IMPLEMENT_DYNCREATE(CMFCExperiment41View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment41View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCExperiment41View 构造/析构

CMFCExperiment41View::CMFCExperiment41View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment41View::~CMFCExperiment41View()
{
}

BOOL CMFCExperiment41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment41View 绘制

void CMFCExperiment41View::OnDraw(CDC* pDC)
{
	CMFCExperiment41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment41View 诊断

#ifdef _DEBUG
void CMFCExperiment41View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment41Doc* CMFCExperiment41View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment41Doc)));
	return (CMFCExperiment41Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment41View 消息处理程序


void CMFCExperiment41View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	if (nFlags&&WM_LBUTTONDOWN){
		flag++;
	}

	CView::OnMouseMove(nFlags, point);
}


void CMFCExperiment41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CClientDC dc(this);
	CString str;
	str.Format(_T("MouseMove发生的次数为：%d"), flag);
	dc.TextOutW(100, 200, str);
	CView::OnLButtonUp(nFlags, point);
}
