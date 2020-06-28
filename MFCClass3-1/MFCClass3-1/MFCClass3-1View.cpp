
// MFCClass3-1View.cpp : CMFCClass31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass3-1.h"
#endif

#include "MFCClass3-1Doc.h"
#include "MFCClass3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass31View

IMPLEMENT_DYNCREATE(CMFCClass31View, CView)

BEGIN_MESSAGE_MAP(CMFCClass31View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCClass31View ����/����

CMFCClass31View::CMFCClass31View()
{
	// TODO:  �ڴ˴���ӹ������
	ar.SetSize(100);
}

CMFCClass31View::~CMFCClass31View()
{
}

BOOL CMFCClass31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass31View ����

void CMFCClass31View::OnDraw(CDC* pDC)
{
	CMFCClass31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ar.GetSize(); i++)
		pDC->Ellipse(ar.GetAt(i));
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass31View ��ӡ

BOOL CMFCClass31View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass31View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass31View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass31View ���

#ifdef _DEBUG
void CMFCClass31View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass31Doc* CMFCClass31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass31Doc)));
	return (CMFCClass31Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass31View ��Ϣ�������


void CMFCClass31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect rect;
	this->GetClientRect(&rect);
	int r;
	if (rect.Width() < rect.Height())
		r = rect.Width();
	else
		r = rect.Height();
	int ax, ay, bx, by;
	ax = 0 + (rect.Width() - r) / 2;
	ay = 0 + (rect.Height() - r) / 2;
	bx = rect.Width() - (rect.Width() - r) / 2;
	by = rect.Height() - (rect.Height() - r) / 2;
	CRect cr(ax, ay, bx, by);
	ar.Add(cr);
	this->Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
