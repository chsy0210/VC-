
// MFCExperiment2-2View.cpp : CMFCExperiment22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment2-2.h"
#endif

#include "MFCExperiment2-2Doc.h"
#include "MFCExperiment2-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment22View

IMPLEMENT_DYNCREATE(CMFCExperiment22View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment22View, CView)
END_MESSAGE_MAP()

// CMFCExperiment22View ����/����

CMFCExperiment22View::CMFCExperiment22View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment22View::~CMFCExperiment22View()
{
}

BOOL CMFCExperiment22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment22View ����

void CMFCExperiment22View::OnDraw(CDC* pDC)
{
	CMFCExperiment22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("%d"), pDoc->A);
	pDC->TextOutW(100, 200, pDoc->S);
	pDC->TextOutW(100, 250, s);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment22View ���

#ifdef _DEBUG
void CMFCExperiment22View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment22Doc* CMFCExperiment22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment22Doc)));
	return (CMFCExperiment22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment22View ��Ϣ�������
