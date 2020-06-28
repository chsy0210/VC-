
// MFCExperiment5-3View.cpp : CMFCExperiment53View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment5-3.h"
#endif

#include "MFCExperiment5-3Doc.h"
#include "MFCExperiment5-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment53View

IMPLEMENT_DYNCREATE(CMFCExperiment53View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment53View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DrawLine, &CMFCExperiment53View::OnDrawline)
	ON_COMMAND(ID_DrawRectangle, &CMFCExperiment53View::OnDrawrectangle)
	ON_COMMAND(ID_DrawOval, &CMFCExperiment53View::OnDrawoval)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCExperiment53View ����/����

CMFCExperiment53View::CMFCExperiment53View()
{
	// TODO:  �ڴ˴���ӹ������
	ca.SetSize(256);
	cb.SetSize(256);
}

CMFCExperiment53View::~CMFCExperiment53View()
{
}

BOOL CMFCExperiment53View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment53View ����

void CMFCExperiment53View::OnDraw(CDC* pDC)
{
	CMFCExperiment53Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	
	switch(flag){
	case 0:
			break;
	case 1:
		pDC->MoveTo(rect.left, rect.top);
		pDC->LineTo(rect.right, rect.bottom);
		break;
	case 2:
		pDC->Rectangle(rect);
		break;
	case 3:
		pDC->Ellipse(rect);
	}

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment53View ��ӡ

BOOL CMFCExperiment53View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment53View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment53View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment53View ���

#ifdef _DEBUG
void CMFCExperiment53View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment53View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment53Doc* CMFCExperiment53View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment53Doc)));
	return (CMFCExperiment53Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment53View ��Ϣ�������


void CMFCExperiment53View::OnDrawline()
{
	// TODO:  �ڴ���������������

	flag = 1;
	
}


void CMFCExperiment53View::OnDrawrectangle()
{
	// TODO:  �ڴ���������������

	flag = 2;

}


void CMFCExperiment53View::OnDrawoval()
{
	// TODO:  �ڴ���������������

	flag = 3;

}


void CMFCExperiment53View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	rect.left = point.x;
	rect.top = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CMFCExperiment53View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	rect.right = point.x;
	rect.bottom = point.y;
	this->Invalidate();

	CView::OnLButtonUp(nFlags, point);
}
