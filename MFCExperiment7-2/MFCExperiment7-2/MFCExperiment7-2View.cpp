
// MFCExperiment7-2View.cpp : CMFCExperiment72View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment7-2.h"
#endif

#include "MFCExperiment7-2Doc.h"
#include "MFCExperiment7-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment72View

IMPLEMENT_DYNCREATE(CMFCExperiment72View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment72View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFCExperiment72View 构造/析构

CMFCExperiment72View::CMFCExperiment72View()
{
	// TODO:  在此处添加构造代码
	pD = NULL;
}

CMFCExperiment72View::~CMFCExperiment72View()
{
}

BOOL CMFCExperiment72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment72View 绘制

void CMFCExperiment72View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment72View 打印

BOOL CMFCExperiment72View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment72View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCExperiment72View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCExperiment72View 诊断

#ifdef _DEBUG
void CMFCExperiment72View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment72Doc* CMFCExperiment72View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment72Doc)));
	return (CMFCExperiment72Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment72View 消息处理程序


void CMFCExperiment72View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	pD = new MyDialog;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	
	CView::OnLButtonDblClk(nFlags, point);
}
