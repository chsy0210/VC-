
// MFCClass5-2View.cpp : CMFCClass52View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass5-2.h"
#endif

#include "MFCClass5-2Doc.h"
#include "MFCClass5-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass52View

IMPLEMENT_DYNCREATE(CMFCClass52View, CView)

BEGIN_MESSAGE_MAP(CMFCClass52View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DrawColorCircle, &CMFCClass52View::OnDrawcolorcircle)
END_MESSAGE_MAP()

// CMFCClass52View ����/����

CMFCClass52View::CMFCClass52View()
{
	// TODO:  �ڴ˴���ӹ������
	ca.SetSize(256);
}

CMFCClass52View::~CMFCClass52View()
{
}

BOOL CMFCClass52View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass52View ����

void CMFCClass52View::OnDraw(CDC* pDC)
{
	CMFCClass52Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	int r=0, g=255, b=255;
	for (int i = 0; i < ca.GetSize(); i++){
		CBrush newBrush(RGB(r, g, b));
		CBrush*oldBrush = pDC->SelectObject(&newBrush);
		pDC->Ellipse(ca[i]);
		pDC->SelectObject(oldBrush);
		g = g - 5;
		b = b - 5;
	}

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass52View ��ӡ

BOOL CMFCClass52View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass52View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass52View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass52View ���

#ifdef _DEBUG
void CMFCClass52View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass52View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass52Doc* CMFCClass52View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass52Doc)));
	return (CMFCClass52Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass52View ��Ϣ�������


void CMFCClass52View::OnDrawcolorcircle()
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
		ax += 10; 
		ay += 10;
		bx = bx - 10;
		by = by - 10;
	}
	this->Invalidate();
}
