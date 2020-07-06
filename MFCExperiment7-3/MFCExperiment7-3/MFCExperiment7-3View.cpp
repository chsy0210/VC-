
// MFCExperiment7-3View.cpp : CMFCExperiment73View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment7-3.h"
#endif

#include "MFCExperiment7-3Doc.h"
#include "MFCExperiment7-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment73View

IMPLEMENT_DYNCREATE(CMFCExperiment73View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment73View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment73View ����/����

CMFCExperiment73View::CMFCExperiment73View()
{
	// TODO:  �ڴ˴���ӹ������
	
}

CMFCExperiment73View::~CMFCExperiment73View()
{
}

BOOL CMFCExperiment73View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment73View ����

void CMFCExperiment73View::OnDraw(CDC* pDC)
{
	CMFCExperiment73Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (f == 0){
		CRect re;
		this->GetClientRect(&re);
		rect.top = (re.Height() - r) / 2;
		rect.left = 0;
		rect.right = r;
		rect.bottom = rect.top + r;
		f = 1;
	}
	pDC->Ellipse(rect);

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment73View ��ӡ

BOOL CMFCExperiment73View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment73View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment73View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment73View ���

#ifdef _DEBUG
void CMFCExperiment73View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment73View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment73Doc* CMFCExperiment73View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment73Doc)));
	return (CMFCExperiment73Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment73View ��Ϣ�������


void CMFCExperiment73View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CRect re;
	this->GetClientRect(&re);
	if (flag == 1){
		if (rect.right + 1 >= re.right)
			flag = 0;
		else{
			rect.left++;
			rect.right++;
		}
	}
	else{
		if (rect.left - 1 <= re.left)
			flag = 1;
		else{
			rect.left = rect.left - 1;
			rect.right = rect.right - 1;
		}
	}
	this->Invalidate();


	CView::OnTimer(nIDEvent);
}


void CMFCExperiment73View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetTimer(1,1000, NULL);
	CView::OnLButtonDown(nFlags, point);
}
