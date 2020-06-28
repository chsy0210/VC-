
// MFCClass5-2View.cpp : CMFCClass52View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCClass5-2.h"
#endif

#include "MFCClass5-2Doc.h"
#include "MFCClass5-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass52View

IMPLEMENT_DYNCREATE(CMFCClass52View, CView)

BEGIN_MESSAGE_MAP(CMFCClass52View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DrawColorCircle, &CMFCClass52View::OnDrawcolorcircle)
END_MESSAGE_MAP()

// CMFCClass52View 构造/析构

CMFCClass52View::CMFCClass52View()
{
	// TODO:  在此处添加构造代码
	ca.SetSize(256);
}

CMFCClass52View::~CMFCClass52View()
{
}

BOOL CMFCClass52View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCClass52View 绘制

void CMFCClass52View::OnDraw(CDC* pDC)
{
	CMFCClass52Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	int r=0, g=255, b=255;
	for (int i = 0; i < ca.GetSize(); i++){
		CBrush newBrush(RGB(r, g, b));
		CBrush*oldBrush = pDC->SelectObject(&newBrush);
		pDC->Ellipse(ca[i]);
		pDC->SelectObject(oldBrush);
		g = g - 5;
		b = b - 5;
	}

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCClass52View 打印

BOOL CMFCClass52View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCClass52View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCClass52View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCClass52View 诊断

#ifdef _DEBUG
void CMFCClass52View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass52View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass52Doc* CMFCClass52View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass52Doc)));
	return (CMFCClass52Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass52View 消息处理程序


void CMFCClass52View::OnDrawcolorcircle()
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
		ax += 10; 
		ay += 10;
		bx = bx - 10;
		by = by - 10;
	}
	this->Invalidate();
}
