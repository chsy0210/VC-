
// MFCExperiment6-1View.cpp : CMFCExperiment61View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment6-1.h"
#endif

#include "MFCExperiment6-1Doc.h"
#include "MFCExperiment6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment61View

IMPLEMENT_DYNCREATE(CMFCExperiment61View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment61View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMFCExperiment61View 构造/析构

CMFCExperiment61View::CMFCExperiment61View()
{
	// TODO:  在此处添加构造代码
	str = _T("");
}

CMFCExperiment61View::~CMFCExperiment61View()
{
}

BOOL CMFCExperiment61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment61View 绘制

void CMFCExperiment61View::OnDraw(CDC* pDC)
{
	CMFCExperiment61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	rect.left = 10;
	rect.top = 10;
	rect.right = 1300;
	rect.bottom = 40;
	pDC->Rectangle(rect);
	pDC->TextOutW(rect.left+1, rect.top+1, str);

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment61View 打印

BOOL CMFCExperiment61View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment61View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCExperiment61View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCExperiment61View 诊断

#ifdef _DEBUG
void CMFCExperiment61View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment61Doc* CMFCExperiment61View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment61Doc)));
	return (CMFCExperiment61Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment61View 消息处理程序


void CMFCExperiment61View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	str += char(nChar);
	this->Invalidate();

	CView::OnChar(nChar, nRepCnt, nFlags);
}
