
// MFCExperiment2-1View.cpp : CMFCExperiment21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment2-1.h"
#endif

#include "MFCExperiment2-1Doc.h"
#include "MFCExperiment2-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment21View

IMPLEMENT_DYNCREATE(CMFCExperiment21View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment21View, CView)
END_MESSAGE_MAP()

// CMFCExperiment21View ����/����

CMFCExperiment21View::CMFCExperiment21View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment21View::~CMFCExperiment21View()
{
}

BOOL CMFCExperiment21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment21View ����

void CMFCExperiment21View::OnDraw(CDC* pDC)
{
	CMFCExperiment21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CString S;
	S = _T("����������");
	int A = 24;
	CString s;
	s.Format(_T("%d"), A);
	pDC->TextOutW(100, 200, S);
	pDC->TextOutW(100, 250, s);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment21View ���

#ifdef _DEBUG
void CMFCExperiment21View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment21Doc* CMFCExperiment21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment21Doc)));
	return (CMFCExperiment21Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment21View ��Ϣ�������
