
// MFCClass2-2View.cpp : CMFCClass22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass2-2.h"
#endif

#include "MFCClass2-2Doc.h"
#include "MFCClass2-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass22View

IMPLEMENT_DYNCREATE(CMFCClass22View, CView)

BEGIN_MESSAGE_MAP(CMFCClass22View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCClass22View ����/����

CMFCClass22View::CMFCClass22View()
{
	// TODO:  �ڴ˴���ӹ������
	ca.SetSize(100);
}

CMFCClass22View::~CMFCClass22View()
{
}

BOOL CMFCClass22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass22View ����

void CMFCClass22View::OnDraw(CDC* pDC)
{
	CMFCClass22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass22View ��ӡ

BOOL CMFCClass22View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass22View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass22View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass22View ���

#ifdef _DEBUG
void CMFCClass22View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass22Doc* CMFCClass22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass22Doc)));
	return (CMFCClass22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass22View ��Ϣ�������


void CMFCClass22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 500;
	int ax, ay, bx, by;
	ax = point.x - r / 2;
	ay = point.y - r / 2;
	bx = point.x + r / 2;
	by = point.y + r / 2;
	CRect rect(ax, ay, bx, by);
	ca.Add(rect);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
