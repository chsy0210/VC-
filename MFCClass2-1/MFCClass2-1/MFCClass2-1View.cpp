
// MFCClass2-1View.cpp : CMFCClass21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass2-1.h"
#endif

#include "MFCClass2-1Doc.h"
#include "MFCClass2-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass21View

IMPLEMENT_DYNCREATE(CMFCClass21View, CView)

BEGIN_MESSAGE_MAP(CMFCClass21View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCClass21View ����/����

CMFCClass21View::CMFCClass21View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCClass21View::~CMFCClass21View()
{
}

BOOL CMFCClass21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass21View ����

void CMFCClass21View::OnDraw(CDC* /*pDC*/)
{
	CMFCClass21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass21View ��ӡ

BOOL CMFCClass21View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass21View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass21View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass21View ���

#ifdef _DEBUG
void CMFCClass21View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass21Doc* CMFCClass21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass21Doc)));
	return (CMFCClass21Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass21View ��Ϣ�������


void CMFCClass21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r;
	r = rand() % 500;
	int ax, ay, bx, by;
	ax = point.x - r / 2;
	ay = point.y - r / 2;
	bx = point.x + r / 2;
	by = point.y + r / 2;
	CRect rect(ax,ay,bx,by);
	CClientDC dc(this);
	dc.Ellipse(rect);
	CView::OnLButtonDown(nFlags, point);
}
