
// MFCExperiment4-1View.cpp : CMFCExperiment41View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment4-1.h"
#endif

#include "MFCExperiment4-1Doc.h"
#include "MFCExperiment4-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment41View

IMPLEMENT_DYNCREATE(CMFCExperiment41View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment41View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCExperiment41View ����/����

CMFCExperiment41View::CMFCExperiment41View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment41View::~CMFCExperiment41View()
{
}

BOOL CMFCExperiment41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment41View ����

void CMFCExperiment41View::OnDraw(CDC* pDC)
{
	CMFCExperiment41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment41View ���

#ifdef _DEBUG
void CMFCExperiment41View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment41Doc* CMFCExperiment41View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment41Doc)));
	return (CMFCExperiment41Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment41View ��Ϣ�������


void CMFCExperiment41View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	if (nFlags&&WM_LBUTTONDOWN){
		flag++;
	}

	CView::OnMouseMove(nFlags, point);
}


void CMFCExperiment41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	CString str;
	str.Format(_T("MouseMove�����Ĵ���Ϊ��%d"), flag);
	dc.TextOutW(100, 200, str);
	CView::OnLButtonUp(nFlags, point);
}
