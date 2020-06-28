
// MFCExperiment3-2View.cpp : CMFCExperiment32View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment3-2.h"
#endif

#include "MFCExperiment3-2Doc.h"
#include "MFCExperiment3-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment32View

IMPLEMENT_DYNCREATE(CMFCExperiment32View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment32View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment32View ����/����

CMFCExperiment32View::CMFCExperiment32View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment32View::~CMFCExperiment32View()
{
}

BOOL CMFCExperiment32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment32View ����

void CMFCExperiment32View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment32View ���

#ifdef _DEBUG
void CMFCExperiment32View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment32Doc* CMFCExperiment32View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment32Doc)));
	return (CMFCExperiment32Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment32View ��Ϣ�������


void CMFCExperiment32View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CClientDC dc(this);
	CMFCExperiment32Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("A+B=%d"), pDoc->A+pDoc->B);
	dc.TextOutW(100, 200, s);

	CView::OnLButtonDown(nFlags, point);
}
