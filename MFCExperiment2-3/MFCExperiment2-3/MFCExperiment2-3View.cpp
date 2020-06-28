
// MFCExperiment2-3View.cpp : CMFCExperiment23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment2-3.h"
#endif

#include "MFCExperiment2-3Doc.h"
#include "MFCExperiment2-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment23View

IMPLEMENT_DYNCREATE(CMFCExperiment23View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment23View ����/����

CMFCExperiment23View::CMFCExperiment23View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment23View::~CMFCExperiment23View()
{
}

BOOL CMFCExperiment23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment23View ����

void CMFCExperiment23View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment23View ���

#ifdef _DEBUG
void CMFCExperiment23View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment23Doc* CMFCExperiment23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment23Doc)));
	return (CMFCExperiment23Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment23View ��Ϣ�������


void CMFCExperiment23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFCExperiment23Doc* pDoc = GetDocument();
	pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment23View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFCExperiment23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(100, 200, s);

	CView::OnRButtonDown(nFlags, point);
}
