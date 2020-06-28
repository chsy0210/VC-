
// MFCClass5-1View.cpp : CMFCClass51View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCClass5-1.h"
#endif

#include "MFCClass5-1Doc.h"
#include "MFCClass5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass51View

IMPLEMENT_DYNCREATE(CMFCClass51View, CView)

BEGIN_MESSAGE_MAP(CMFCClass51View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DrawCircle, &CMFCClass51View::OnDrawcircle)
END_MESSAGE_MAP()

// CMFCClass51View 构造/析构

CMFCClass51View::CMFCClass51View()
{
	// TODO:  在此处添加构造代码
	ca.SetSize(256);
}

CMFCClass51View::~CMFCClass51View()
{
}

BOOL CMFCClass51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCClass51View 绘制

void CMFCClass51View::OnDraw(CDC* pDC)
{
	CMFCClass51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < ca.GetSize(); i++){
		pDC->Ellipse(ca[i]);
	}

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCClass51View 打印

BOOL CMFCClass51View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCClass51View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCClass51View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCClass51View 诊断

#ifdef _DEBUG
void CMFCClass51View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass51Doc* CMFCClass51View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass51Doc)));
	return (CMFCClass51Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass51View 消息处理程序


void CMFCClass51View::OnDrawcircle()
{
	// TODO:  在此添加命令处理程序代码

	int r;
	int ax, ay, bx, by;
	CRect rect;
	this->GetClientRect(&rect);
	if (rect.Width() >= rect.Height())
		r = rect.Height();
	else
		r = rect.Width();
	ax = 0 + (rect.Width() - r) / 2;
	ay = 0 + (rect.Height() - r) / 2;
	bx = rect.Width() - (rect.Width() - r) / 2;
	by = rect.Height() - (rect.Height() - r) / 2;
	while (ax<=bx&&ay<=by){
		CRect a(ax, ay, bx, by);
		ca.Add(a);
		ax += 5;
		ay += 5;
		bx = bx - 5;
		by = by - 5;
	}
	this->Invalidate();

}
