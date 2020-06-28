
// MFCClass5-1View.cpp : CMFCClass51View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass5-1.h"
#endif

#include "MFCClass5-1Doc.h"
#include "MFCClass5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass51View

IMPLEMENT_DYNCREATE(CMFCClass51View, CView)

BEGIN_MESSAGE_MAP(CMFCClass51View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DrawCircle, &CMFCClass51View::OnDrawcircle)
END_MESSAGE_MAP()

// CMFCClass51View ����/����

CMFCClass51View::CMFCClass51View()
{
	// TODO:  �ڴ˴���ӹ������
	ca.SetSize(256);
}

CMFCClass51View::~CMFCClass51View()
{
}

BOOL CMFCClass51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass51View ����

void CMFCClass51View::OnDraw(CDC* pDC)
{
	CMFCClass51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < ca.GetSize(); i++){
		pDC->Ellipse(ca[i]);
	}

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass51View ��ӡ

BOOL CMFCClass51View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass51View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass51View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass51View ���

#ifdef _DEBUG
void CMFCClass51View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass51Doc* CMFCClass51View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass51Doc)));
	return (CMFCClass51Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass51View ��Ϣ�������


void CMFCClass51View::OnDrawcircle()
{
	// TODO:  �ڴ���������������

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
		ax += 5;
		ay += 5;
		bx = bx - 5;
		by = by - 5;
	}
	this->Invalidate();

}
