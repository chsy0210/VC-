
// MFCExperiment3-1View.cpp : CMFCExperiment31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment3-1.h"
#endif

#include "MFCExperiment3-1Doc.h"
#include "MFCExperiment3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment31View

IMPLEMENT_DYNCREATE(CMFCExperiment31View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCExperiment31View ����/����

CMFCExperiment31View::CMFCExperiment31View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment31View::~CMFCExperiment31View()
{
}

BOOL CMFCExperiment31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment31View ����

void CMFCExperiment31View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment31View ���

#ifdef _DEBUG
void CMFCExperiment31View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment31Doc* CMFCExperiment31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment31Doc)));
	return (CMFCExperiment31Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment31View ��Ϣ�������


void CMFCExperiment31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	CString s;
	s = _T("�����������");
	dc.TextOutW(100, 200, s);

	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	CString S;
	S = _T("�������̧��");
	dc.TextOutW(100, 300, S);

	CView::OnLButtonUp(nFlags, point);
}
