
// MFCExperiment4-2View.cpp : CMFCExperiment42View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment4-2.h"
#endif

#include "MFCExperiment4-2Doc.h"
#include "MFCExperiment4-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment42View

IMPLEMENT_DYNCREATE(CMFCExperiment42View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment42View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment42View ����/����

CMFCExperiment42View::CMFCExperiment42View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment42View::~CMFCExperiment42View()
{
}

BOOL CMFCExperiment42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment42View ����

void CMFCExperiment42View::OnDraw(CDC* pDC)
{
	CMFCExperiment42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	CRect rect(ax, ay, bx, by);
	pDC->Rectangle(rect);

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment42View ���

#ifdef _DEBUG
void CMFCExperiment42View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment42Doc* CMFCExperiment42View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment42Doc)));
	return (CMFCExperiment42Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment42View ��Ϣ�������


void CMFCExperiment42View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	if (nFlags&&nChar==VK_LEFT){
		ax = ax - 10;
		bx = bx - 10;
	}
	if (nFlags&&nChar == VK_RIGHT){
		ax += 10;
		bx += 10;
	}
	if (nFlags&&nChar == VK_UP){
		ay = ay - 10;
		by = by - 10;
	}
	if (nFlags&&nChar == VK_DOWN){
		ay += 10;
		by += 10;
	}
	if (nFlags&&nChar == VK_HOME){
		ax = ax - 10;
		ay = ay - 10;
	}
	if (nFlags&&nChar == VK_END){
		ax += 10;
		ay += 10;
	}
	this->Invalidate();

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFCExperiment42View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	int x, y;
	x = ax + (bx - ax) / 2;
	y = ay + (by - ay) / 2;
	ax = x - (x2 - x1) / 2;
	bx = x + (x2 - x1) / 2;
	ay = y - (y2 - y1) / 2;
	by = y + (y2 - y1) / 2;
	this->Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
