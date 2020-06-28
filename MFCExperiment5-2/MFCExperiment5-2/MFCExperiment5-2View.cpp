
// MFCExperiment5-2View.cpp : CMFCExperiment52View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment5-2.h"
#endif

#include "MFCExperiment5-2Doc.h"
#include "MFCExperiment5-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment52View

IMPLEMENT_DYNCREATE(CMFCExperiment52View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment52View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_ShowBmp, &CMFCExperiment52View::OnShowbmp)
END_MESSAGE_MAP()

// CMFCExperiment52View 构造/析构

CMFCExperiment52View::CMFCExperiment52View()
{
	// TODO:  在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFCExperiment52View::~CMFCExperiment52View()
{
}

BOOL CMFCExperiment52View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment52View 绘制

void CMFCExperiment52View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment52Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment52View 打印

BOOL CMFCExperiment52View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment52View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCExperiment52View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCExperiment52View 诊断

#ifdef _DEBUG
void CMFCExperiment52View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment52View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment52Doc* CMFCExperiment52View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment52Doc)));
	return (CMFCExperiment52Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment52View 消息处理程序


void CMFCExperiment52View::OnShowbmp()
{
	// TODO:  在此添加命令处理程序代码
	CClientDC dc(this);
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	dc.BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}
