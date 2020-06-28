
// MFCClass3-1View.cpp : CMFCClass31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCClass3-1.h"
#endif

#include "MFCClass3-1Doc.h"
#include "MFCClass3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass31View

IMPLEMENT_DYNCREATE(CMFCClass31View, CView)

BEGIN_MESSAGE_MAP(CMFCClass31View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCClass31View 构造/析构

CMFCClass31View::CMFCClass31View()
{
	// TODO:  在此处添加构造代码
	ar.SetSize(100);
}

CMFCClass31View::~CMFCClass31View()
{
}

BOOL CMFCClass31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCClass31View 绘制

void CMFCClass31View::OnDraw(CDC* pDC)
{
	CMFCClass31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ar.GetSize(); i++)
		pDC->Ellipse(ar.GetAt(i));
	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCClass31View 打印

BOOL CMFCClass31View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCClass31View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCClass31View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCClass31View 诊断

#ifdef _DEBUG
void CMFCClass31View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass31Doc* CMFCClass31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass31Doc)));
	return (CMFCClass31Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass31View 消息处理程序


void CMFCClass31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CRect rect;
	this->GetClientRect(&rect);
	int r;
	if (rect.Width() < rect.Height())
		r = rect.Width();
	else
		r = rect.Height();
	int ax, ay, bx, by;
	ax = 0 + (rect.Width() - r) / 2;
	ay = 0 + (rect.Height() - r) / 2;
	bx = rect.Width() - (rect.Width() - r) / 2;
	by = rect.Height() - (rect.Height() - r) / 2;
	CRect cr(ax, ay, bx, by);
	ar.Add(cr);
	this->Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
