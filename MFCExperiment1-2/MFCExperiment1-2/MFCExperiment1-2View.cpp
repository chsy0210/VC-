
// MFCExperiment1-2View.cpp : CMFCExperiment12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment1-2.h"
#endif

#include "MFCExperiment1-2Doc.h"
#include "MFCExperiment1-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment12View

IMPLEMENT_DYNCREATE(CMFCExperiment12View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment12View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment12View ����/����

CMFCExperiment12View::CMFCExperiment12View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment12View::~CMFCExperiment12View()
{
}

BOOL CMFCExperiment12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment12View ����

void CMFCExperiment12View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment12View ���

#ifdef _DEBUG
void CMFCExperiment12View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment12Doc* CMFCExperiment12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment12Doc)));
	return (CMFCExperiment12Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment12View ��Ϣ�������


void CMFCExperiment12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFCExperiment12Doc* pDoc = GetDocument();
	pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment12View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	CMFCExperiment12Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(100, 200, s);

	CView::OnRButtonDown(nFlags, point);
}
