
// MFCClass2-4View.cpp : CMFCClass24View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCClass2-4.h"
#endif

#include "MFCClass2-4Doc.h"
#include "MFCClass2-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass24View

IMPLEMENT_DYNCREATE(CMFCClass24View, CView)

BEGIN_MESSAGE_MAP(CMFCClass24View, CView)
END_MESSAGE_MAP()

// CMFCClass24View 构造/析构

CMFCClass24View::CMFCClass24View()
{
	// TODO:  在此处添加构造代码

}

CMFCClass24View::~CMFCClass24View()
{
}

BOOL CMFCClass24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCClass24View 绘制

void CMFCClass24View::OnDraw(CDC* pDC)
{
	CMFCClass24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect rect;
	this->GetClientRect(&rect);
	CBrush newBrush(RGB(225, 215, 0));
	CBrush*oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(rect);
	pDC->SelectObject(oldBrush);


	/*CBrush Brush;
	Brush.CreateSolidBrush(RGB(225, 215, 0));
	CRect rect;
	//this->GetClientRect(&rect);
	CRgn rgn;
	rgn.CreateEllipticRgn(100,100,500,500);
	pDC->FillRgn(&rgn, &Brush);*/
	
	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCClass24View 诊断

#ifdef _DEBUG
void CMFCClass24View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass24Doc* CMFCClass24View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass24Doc)));
	return (CMFCClass24Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass24View 消息处理程序
