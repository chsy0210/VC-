
// MFCExperiment7-3View.cpp : CMFCExperiment73View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment7-3.h"
#endif

#include "MFCExperiment7-3Doc.h"
#include "MFCExperiment7-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment73View

IMPLEMENT_DYNCREATE(CMFCExperiment73View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment73View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment73View 构造/析构

CMFCExperiment73View::CMFCExperiment73View()
{
	// TODO:  在此处添加构造代码
	
}

CMFCExperiment73View::~CMFCExperiment73View()
{
}

BOOL CMFCExperiment73View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment73View 绘制

void CMFCExperiment73View::OnDraw(CDC* pDC)
{
	CMFCExperiment73Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (f == 0){
		CRect re;
		this->GetClientRect(&re);
		rect.top = (re.Height() - r) / 2;
		rect.left = 0;
		rect.right = r;
		rect.bottom = rect.top + r;
		f = 1;
	}
	pDC->Ellipse(rect);

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment73View 打印

BOOL CMFCExperiment73View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment73View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCExperiment73View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCExperiment73View 诊断

#ifdef _DEBUG
void CMFCExperiment73View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment73View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment73Doc* CMFCExperiment73View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment73Doc)));
	return (CMFCExperiment73Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment73View 消息处理程序


void CMFCExperiment73View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CRect re;
	this->GetClientRect(&re);
	if (flag == 1){
		if (rect.right + 1 >= re.right)
			flag = 0;
		else{
			rect.left++;
			rect.right++;
		}
	}
	else{
		if (rect.left - 1 <= re.left)
			flag = 1;
		else{
			rect.left = rect.left - 1;
			rect.right = rect.right - 1;
		}
	}
	this->Invalidate();


	CView::OnTimer(nIDEvent);
}


void CMFCExperiment73View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	SetTimer(1,1000, NULL);
	CView::OnLButtonDown(nFlags, point);
}
