
// MFCClass6-1View.cpp : CMFCClass61View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCClass6-1.h"
#endif

#include "MFCClass6-1Doc.h"
#include "MFCClass6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass61View

IMPLEMENT_DYNCREATE(CMFCClass61View, CView)

BEGIN_MESSAGE_MAP(CMFCClass61View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMFCClass61View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCClass61View 构造/析构

CMFCClass61View::CMFCClass61View()
{
	// TODO:  在此处添加构造代码

}

CMFCClass61View::~CMFCClass61View()
{
}

BOOL CMFCClass61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCClass61View 绘制

void CMFCClass61View::OnDraw(CDC* /*pDC*/)
{
	CMFCClass61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCClass61View 打印

BOOL CMFCClass61View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCClass61View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCClass61View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCClass61View 诊断

#ifdef _DEBUG
void CMFCClass61View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass61Doc* CMFCClass61View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass61Doc)));
	return (CMFCClass61Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass61View 消息处理程序


void CMFCClass61View::OnFileOpen()
{
	// TODO:  在此添加命令处理程序代码
	CClientDC dc(this);
	CFileDialog  cfd(true);
	CRect rect;
	this->GetClientRect(&rect);
	int r = cfd.DoModal();
	int h, w, sx, sy;
	if (r == IDOK){
		CString filename = cfd.GetPathName();
		CImage img;
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
	}
}
