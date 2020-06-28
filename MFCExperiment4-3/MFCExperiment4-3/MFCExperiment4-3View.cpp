
// MFCExperiment4-3View.cpp : CMFCExperiment43View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment4-3.h"
#endif

#include "MFCExperiment4-3Doc.h"
#include "MFCExperiment4-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment43View

IMPLEMENT_DYNCREATE(CMFCExperiment43View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment43View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFCExperiment43View 构造/析构

CMFCExperiment43View::CMFCExperiment43View()
{
	// TODO:  在此处添加构造代码
	set = 1;
	N = 5;
	for (int i = 0; i < N; i++){
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
		flag[i] = 1;
	}
}

CMFCExperiment43View::~CMFCExperiment43View()
{
}

BOOL CMFCExperiment43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment43View 绘制

void CMFCExperiment43View::OnDraw(CDC* pDC)
{
	CMFCExperiment43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < N; i++){
		pDC->Ellipse(cr[i]);
	}
	if (set==1){
		for (int i = 0; i < N; i++){
			SetTimer(i, rand() % 400 + 100, NULL);
		}
		set = 0;
	}

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment43View 诊断

#ifdef _DEBUG
void CMFCExperiment43View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment43Doc* CMFCExperiment43View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment43Doc)));
	return (CMFCExperiment43Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment43View 消息处理程序


void CMFCExperiment43View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CRect Rect;
	this->GetClientRect(&Rect);
	int i = nIDEvent;
	if (flag[i]==1){
		if (cr[i].bottom + 10 >= Rect.bottom){
			flag[i] = 0;
		}
		else{
			cr[i].top += 10;
			cr[i].bottom += 10;
		}
	}
	else{
		if (cr[i].top - 10 < Rect.top){
			flag[i] = 1;
		}
		else{
			cr[i].top = cr[i].top - 10;
			cr[i].bottom = cr[i].bottom - 10;
		}
	}
	this->Invalidate();

	CView::OnTimer(nIDEvent);
}
