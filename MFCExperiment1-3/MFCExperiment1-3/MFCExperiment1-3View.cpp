
// MFCExperiment1-3View.cpp : CMFCExperiment13View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment1-3.h"
#endif

#include "MFCExperiment1-3Doc.h"
#include "MFCExperiment1-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment13View

IMPLEMENT_DYNCREATE(CMFCExperiment13View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment13View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment13View ����/����

CMFCExperiment13View::CMFCExperiment13View()
{
	// TODO:  �ڴ˴���ӹ������
	B = _T("������");
}

CMFCExperiment13View::~CMFCExperiment13View()
{
}

BOOL CMFCExperiment13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment13View ����

void CMFCExperiment13View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment13View ���

#ifdef _DEBUG
void CMFCExperiment13View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment13Doc* CMFCExperiment13View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment13Doc)));
	return (CMFCExperiment13Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment13View ��Ϣ�������


void CMFCExperiment13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCExperiment13Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString C;
	C.Format(_T("%s%s"), pDoc->A, B);
	dc.TextOutW(100, 200, C);
	CView::OnLButtonDown(nFlags, point);
}
