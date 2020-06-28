
// MFCClass2-2View.cpp : CMFCClass22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCClass2-2.h"
#endif

#include "MFCClass2-2Doc.h"
#include "MFCClass2-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass22View

IMPLEMENT_DYNCREATE(CMFCClass22View, CView)

BEGIN_MESSAGE_MAP(CMFCClass22View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCClass22View 构造/析构

CMFCClass22View::CMFCClass22View()
{
	// TODO:  在此处添加构造代码
	ca.SetSize(100);
}

CMFCClass22View::~CMFCClass22View()
{
}

BOOL CMFCClass22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCClass22View 绘制

void CMFCClass22View::OnDraw(CDC* pDC)
{
	CMFCClass22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCClass22View 打印

BOOL CMFCClass22View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCClass22View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCClass22View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCClass22View 诊断

#ifdef _DEBUG
void CMFCClass22View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass22Doc* CMFCClass22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass22Doc)));
	return (CMFCClass22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass22View 消息处理程序


void CMFCClass22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 500;
	int ax, ay, bx, by;
	ax = point.x - r / 2;
	ay = point.y - r / 2;
	bx = point.x + r / 2;
	by = point.y + r / 2;
	CRect rect(ax, ay, bx, by);
	ca.Add(rect);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
