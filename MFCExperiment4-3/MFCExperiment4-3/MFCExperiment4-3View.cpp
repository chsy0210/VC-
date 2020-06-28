
// MFCExperiment4-3View.cpp : CMFCExperiment43View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment4-3.h"
#endif

#include "MFCExperiment4-3Doc.h"
#include "MFCExperiment4-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment43View

IMPLEMENT_DYNCREATE(CMFCExperiment43View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment43View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFCExperiment43View ����/����

CMFCExperiment43View::CMFCExperiment43View()
{
	// TODO:  �ڴ˴���ӹ������
	set = 1;
	N = 5;
	for (int i = 0; i < N; i++){
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
		flag[i] = 1;
	}
}

CMFCExperiment43View::~CMFCExperiment43View()
{
}

BOOL CMFCExperiment43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment43View ����

void CMFCExperiment43View::OnDraw(CDC* pDC)
{
	CMFCExperiment43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < N; i++){
		pDC->Ellipse(cr[i]);
	}
	if (set==1){
		for (int i = 0; i < N; i++){
			SetTimer(i, rand() % 400 + 100, NULL);
		}
		set = 0;
	}

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment43View ���

#ifdef _DEBUG
void CMFCExperiment43View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment43Doc* CMFCExperiment43View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment43Doc)));
	return (CMFCExperiment43Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment43View ��Ϣ�������


void CMFCExperiment43View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CRect Rect;
	this->GetClientRect(&Rect);
	int i = nIDEvent;
	if (flag[i]==1){
		if (cr[i].bottom + 10 >= Rect.bottom){
			flag[i] = 0;
		}
		else{
			cr[i].top += 10;
			cr[i].bottom += 10;
		}
	}
	else{
		if (cr[i].top - 10 < Rect.top){
			flag[i] = 1;
		}
		else{
			cr[i].top = cr[i].top - 10;
			cr[i].bottom = cr[i].bottom - 10;
		}
	}
	this->Invalidate();

	CView::OnTimer(nIDEvent);
}
