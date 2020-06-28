
// MFCExperiment7-1View.cpp : CMFCExperiment71View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment7-1.h"
#endif

#include "MFCExperiment7-1Doc.h"
#include "MFCExperiment7-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment71View

IMPLEMENT_DYNCREATE(CMFCExperiment71View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment71View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFCExperiment71View ����/����

CMFCExperiment71View::CMFCExperiment71View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment71View::~CMFCExperiment71View()
{
}

BOOL CMFCExperiment71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment71View ����

void CMFCExperiment71View::OnDraw(CDC* pDC)
{
	CMFCExperiment71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Rectangle(pDoc->rect);

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment71View ��ӡ

BOOL CMFCExperiment71View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment71View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment71View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment71View ���

#ifdef _DEBUG
void CMFCExperiment71View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment71Doc* CMFCExperiment71View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment71Doc)));
	return (CMFCExperiment71Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment71View ��Ϣ�������


void CMFCExperiment71View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFCExperiment71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (nFlags&&WM_LBUTTONDOWN){
		if (point.x >= pDoc->rect.left&&point.x <= pDoc->rect.right&&point.y >= pDoc->rect.top&&point.y <= pDoc->rect.bottom){
			int x, y;
			x = point.x;
			y = point.y;
			pDoc->rect.left = x - 100;
			pDoc->rect.top = y - 100;
			pDoc->rect.right = x + 100;
			pDoc->rect.bottom = y + 100;
			this->Invalidate();
		}
	}

	CView::OnMouseMove(nFlags, point);
}
