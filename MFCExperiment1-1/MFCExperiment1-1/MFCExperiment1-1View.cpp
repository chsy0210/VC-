
// MFCExperiment1-1View.cpp : CMFCExperiment11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment1-1.h"
#endif

#include "MFCExperiment1-1Doc.h"
#include "MFCExperiment1-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment11View

IMPLEMENT_DYNCREATE(CMFCExperiment11View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment11View ����/����

CMFCExperiment11View::CMFCExperiment11View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment11View::~CMFCExperiment11View()
{
}

BOOL CMFCExperiment11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment11View ����

void CMFCExperiment11View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment11View ���

#ifdef _DEBUG
void CMFCExperiment11View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment11Doc* CMFCExperiment11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment11Doc)));
	return (CMFCExperiment11Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment11View ��Ϣ�������


void CMFCExperiment11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCExperiment11Doc *pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(100,200,pDoc->S);

	CView::OnLButtonDown(nFlags, point);
}
