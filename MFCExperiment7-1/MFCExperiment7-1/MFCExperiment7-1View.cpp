
// MFCExperiment7-1View.cpp : CMFCExperiment71View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment7-1.h"
#endif

#include "MFCExperiment7-1Doc.h"
#include "MFCExperiment7-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment71View

IMPLEMENT_DYNCREATE(CMFCExperiment71View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment71View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFCExperiment71View 构造/析构

CMFCExperiment71View::CMFCExperiment71View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment71View::~CMFCExperiment71View()
{
}

BOOL CMFCExperiment71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment71View 绘制

void CMFCExperiment71View::OnDraw(CDC* pDC)
{
	CMFCExperiment71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Rectangle(pDoc->rect);

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment71View 打印

BOOL CMFCExperiment71View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment71View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCExperiment71View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCExperiment71View 诊断

#ifdef _DEBUG
void CMFCExperiment71View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment71Doc* CMFCExperiment71View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment71Doc)));
	return (CMFCExperiment71Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment71View 消息处理程序


void CMFCExperiment71View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CMFCExperiment71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (nFlags&&WM_LBUTTONDOWN){
		if (point.x >= pDoc->rect.left&&point.x <= pDoc->rect.right&&point.y >= pDoc->rect.top&&point.y <= pDoc->rect.bottom){
			int x, y;
			x = point.x;
			y = point.y;
			pDoc->rect.left = x - 100;
			pDoc->rect.top = y - 100;
			pDoc->rect.right = x + 100;
			pDoc->rect.bottom = y + 100;
			this->Invalidate();
		}
	}

	CView::OnMouseMove(nFlags, point);
}
