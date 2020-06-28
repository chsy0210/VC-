
// MFCExperiment5-3View.cpp : CMFCExperiment53View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment5-3.h"
#endif

#include "MFCExperiment5-3Doc.h"
#include "MFCExperiment5-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment53View

IMPLEMENT_DYNCREATE(CMFCExperiment53View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment53View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DrawLine, &CMFCExperiment53View::OnDrawline)
	ON_COMMAND(ID_DrawRectangle, &CMFCExperiment53View::OnDrawrectangle)
	ON_COMMAND(ID_DrawOval, &CMFCExperiment53View::OnDrawoval)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCExperiment53View 构造/析构

CMFCExperiment53View::CMFCExperiment53View()
{
	// TODO:  在此处添加构造代码
	ca.SetSize(256);
	cb.SetSize(256);
}

CMFCExperiment53View::~CMFCExperiment53View()
{
}

BOOL CMFCExperiment53View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment53View 绘制

void CMFCExperiment53View::OnDraw(CDC* pDC)
{
	CMFCExperiment53Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	
	switch(flag){
	case 0:
			break;
	case 1:
		pDC->MoveTo(rect.left, rect.top);
		pDC->LineTo(rect.right, rect.bottom);
		break;
	case 2:
		pDC->Rectangle(rect);
		break;
	case 3:
		pDC->Ellipse(rect);
	}

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment53View 打印

BOOL CMFCExperiment53View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment53View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCExperiment53View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCExperiment53View 诊断

#ifdef _DEBUG
void CMFCExperiment53View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment53View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment53Doc* CMFCExperiment53View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment53Doc)));
	return (CMFCExperiment53Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment53View 消息处理程序


void CMFCExperiment53View::OnDrawline()
{
	// TODO:  在此添加命令处理程序代码

	flag = 1;
	
}


void CMFCExperiment53View::OnDrawrectangle()
{
	// TODO:  在此添加命令处理程序代码

	flag = 2;

}


void CMFCExperiment53View::OnDrawoval()
{
	// TODO:  在此添加命令处理程序代码

	flag = 3;

}


void CMFCExperiment53View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	rect.left = point.x;
	rect.top = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment53View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	rect.right = point.x;
	rect.bottom = point.y;
	this->Invalidate();

	CView::OnLButtonUp(nFlags, point);
}
