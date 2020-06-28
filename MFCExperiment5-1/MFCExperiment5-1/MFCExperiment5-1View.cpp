
// MFCExperiment5-1View.cpp : CMFCExperiment51View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCExperiment5-1.h"
#endif

#include "MFCExperiment5-1Doc.h"
#include "MFCExperiment5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment51View

IMPLEMENT_DYNCREATE(CMFCExperiment51View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment51View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_ShowName, &CMFCExperiment51View::OnShowname)
END_MESSAGE_MAP()

// CMFCExperiment51View 构造/析构

CMFCExperiment51View::CMFCExperiment51View()
{
	// TODO:  在此处添加构造代码

}

CMFCExperiment51View::~CMFCExperiment51View()
{
}

BOOL CMFCExperiment51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment51View 绘制

void CMFCExperiment51View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCExperiment51View 打印

BOOL CMFCExperiment51View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment51View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCExperiment51View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCExperiment51View 诊断

#ifdef _DEBUG
void CMFCExperiment51View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment51Doc* CMFCExperiment51View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment51Doc)));
	return (CMFCExperiment51Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment51View 消息处理程序


void CMFCExperiment51View::OnShowname()
{
	// TODO:  在此添加命令处理程序代码

	CClientDC dc(this);
	CString s;
	s = _T("钟星桦");
	dc.TextOutW(100, 200, s);

}
