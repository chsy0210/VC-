
// MFCClass3-2View.cpp : CMFCClass32View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass3-2.h"
#endif

#include "MFCClass3-2Doc.h"
#include "MFCClass3-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass32View

IMPLEMENT_DYNCREATE(CMFCClass32View, CView)

BEGIN_MESSAGE_MAP(CMFCClass32View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCClass32View ����/����

CMFCClass32View::CMFCClass32View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCClass32View::~CMFCClass32View()
{
}

BOOL CMFCClass32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass32View ����

void CMFCClass32View::OnDraw(CDC* pDC)
{
	CMFCClass32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < pDoc->ca.GetSize(); i++){
		pDC->Ellipse(pDoc->ca[i]);
	}

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass32View ��ӡ

BOOL CMFCClass32View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass32View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass32View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass32View ���

#ifdef _DEBUG
void CMFCClass32View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass32Doc* CMFCClass32View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass32Doc)));
	return (CMFCClass32Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass32View ��Ϣ�������


void CMFCClass32View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFCClass32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	int w = rand() % 50 + 5;
	int h = rand() % 50 + 5;
	CRect rect(point.x - w, point.y - h, point.x + w, point.y + h);
	pDoc->ca.Add(rect);
	this->Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
