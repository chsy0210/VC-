
// MFCClass6-2View.cpp : CMFCClass62View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCClass6-2.h"
#endif

#include "MFCClass6-2Doc.h"
#include "MFCClass6-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass62View

IMPLEMENT_DYNCREATE(CMFCClass62View, CView)

BEGIN_MESSAGE_MAP(CMFCClass62View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMFCClass62View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCClass62View 构造/析构

CMFCClass62View::CMFCClass62View()
{
	// TODO:  在此处添加构造代码
}

CMFCClass62View::~CMFCClass62View()
{
}

BOOL CMFCClass62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCClass62View 绘制

void CMFCClass62View::OnDraw(CDC* pDC)
{
	CMFCClass62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag){
		img.Draw(pDC->m_hDC, sx, sy, w, h);
	}
	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCClass62View 打印

BOOL CMFCClass62View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCClass62View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCClass62View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCClass62View 诊断

#ifdef _DEBUG
void CMFCClass62View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass62Doc* CMFCClass62View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass62Doc)));
	return (CMFCClass62Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass62View 消息处理程序


void CMFCClass62View::OnFileOpen()
{
	// TODO:  在此添加命令处理程序代码
	CClientDC dc(this);
	CRect rect;
	this->GetClientRect(&rect);
	CFileDialog  cfd(true);
	int r = cfd.DoModal();
	CString filename = cfd.GetPathName();
	if (r == IDOK){
		
		img.Load(filename);
		float rect_ratio = 1.0*rect.Width() / rect.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		if (rect_ratio > img_ratio){
			h = rect.Height();
			w = img_ratio*h;
			sx = 0 + (rect.Width() - w) / 2;
			sy = 0;
		}
		else{
			w = rect.Width();
			h = w / img_ratio;
			sx = 0;
			sy = 0 + (rect.Height() - h) / 2;
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
		flag = true;
	}
}


