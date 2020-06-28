
// MFCExperiment2-2View.cpp : CMFCExperiment22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment2-2.h"
#endif

#include "MFCExperiment2-2Doc.h"
#include "MFCExperiment2-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment22View

IMPLEMENT_DYNCREATE(CMFCExperiment22View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment22View, CView)
END_MESSAGE_MAP()

// CMFCExperiment22View 构造/析构

CMFCExperiment22View::CMFCExperiment22View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment22View::~CMFCExperiment22View()
{
}

BOOL CMFCExperiment22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment22View 绘制

void CMFCExperiment22View::OnDraw(CDC* pDC)
{
	CMFCExperiment22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("%d"), pDoc->A);
	pDC->TextOutW(100, 200, pDoc->S);
	pDC->TextOutW(100, 250, s);
	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment22View 诊断

#ifdef _DEBUG
void CMFCExperiment22View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment22Doc* CMFCExperiment22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment22Doc)));
	return (CMFCExperiment22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment22View 消息处理程序
