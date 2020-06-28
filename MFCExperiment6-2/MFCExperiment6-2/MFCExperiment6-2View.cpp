
// MFCExperiment6-2View.cpp : CMFCExperiment62View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment6-2.h"
#endif

#include "MFCExperiment6-2Doc.h"
#include "MFCExperiment6-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment62View

IMPLEMENT_DYNCREATE(CMFCExperiment62View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment62View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment62View 构造/析构

CMFCExperiment62View::CMFCExperiment62View()
{
	// TODO:  在此处添加构造代码
	flag = false;
	str = _T("");
}

CMFCExperiment62View::~CMFCExperiment62View()
{
}

BOOL CMFCExperiment62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment62View 绘制

void CMFCExperiment62View::OnDraw(CDC* pDC)
{
	CMFCExperiment62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	rect.left = 10;
	rect.top = 10;
	rect.right = 1300;
	rect.bottom = 40;
	pDC->Rectangle(rect);
	pDC->TextOutW(rect.left + 1, rect.top + 1, str);

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment62View 打印

BOOL CMFCExperiment62View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment62View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCExperiment62View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCExperiment62View 诊断

#ifdef _DEBUG
void CMFCExperiment62View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment62Doc* CMFCExperiment62View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment62Doc)));
	return (CMFCExperiment62Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment62View 消息处理程序


void CMFCExperiment62View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	if (flag){
		CString str1 = str.Left(position);
		CString str2 = str.Mid(position);
		str = str1 + char(nChar) + str2;
	}
	else
		str += char(nChar);
	this->Invalidate();

	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMFCExperiment62View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	position = (point.x - 10) / 10;
	flag = true;

	CView::OnLButtonDown(nFlags, point);
}
