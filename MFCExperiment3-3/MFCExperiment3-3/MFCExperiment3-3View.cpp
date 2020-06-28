
// MFCExperiment3-3View.cpp : CMFCExperiment33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment3-3.h"
#endif

#include "MFCExperiment3-3Doc.h"
#include "MFCExperiment3-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment33View

IMPLEMENT_DYNCREATE(CMFCExperiment33View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment33View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment33View ����/����

CMFCExperiment33View::CMFCExperiment33View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment33View::~CMFCExperiment33View()
{
}

BOOL CMFCExperiment33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment33View ����

void CMFCExperiment33View::OnDraw(CDC* pDC)
{
	CMFCExperiment33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect A(100, 100, 400, 300);
	CRect B(500, 100, 800, 300);
	CRect C(300, 400, 600, 600);
	pDC->Rectangle(A);
	pDC->Rectangle(B);
	pDC->Rectangle(C);
	CString a, b, c;
	a = _T("A");
	b = _T("B");
	c = _T("C");
	pDC->TextOutW(250, 150, a);
	pDC->TextOutW(650, 150, b);
	pDC->TextOutW(450, 450, c);

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment33View ��ӡ

BOOL CMFCExperiment33View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment33View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment33View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment33View ���

#ifdef _DEBUG
void CMFCExperiment33View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment33Doc* CMFCExperiment33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment33Doc)));
	return (CMFCExperiment33Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment33View ��Ϣ�������


void CMFCExperiment33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s;
	if (point.x >= 100 && point.x <= 400 && point.y >= 100 && point.y <= 300)
	{
		a = rand() % 100 + 0;
		s.Format(_T("%d"), a);
		dc.TextOutW(250, 200, s);
	}
	else if (point.x >= 500 && point.x <= 800 && point.y >= 100 && point.y <= 300)
	{
		b = rand() % 100 + 0;
		s.Format(_T("%d"), b);
		dc.TextOutW(650, 200, s);
	}
	else
	{
		s.Format(_T("�����Ч"));
		dc.TextOutW(900, 350, s);
	}
	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment33View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s;
	if (point.x >= 300 && point.x <= 600 && point.y >= 400 && point.y <= 600)
	{
		c = a + b;
		s.Format(_T("%d"), c);
		dc.TextOutW(450, 500, s);
	}

	CView::OnRButtonDown(nFlags, point);
}
