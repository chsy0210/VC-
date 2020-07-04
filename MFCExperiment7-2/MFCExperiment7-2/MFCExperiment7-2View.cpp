
// MFCExperiment7-2View.cpp : CMFCExperiment72View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment7-2.h"
#endif

#include "MFCExperiment7-2Doc.h"
#include "MFCExperiment7-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment72View

IMPLEMENT_DYNCREATE(CMFCExperiment72View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment72View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMFCExperiment72View ����/����

CMFCExperiment72View::CMFCExperiment72View()
{
	// TODO:  �ڴ˴���ӹ������
	pD = NULL;
}

CMFCExperiment72View::~CMFCExperiment72View()
{
}

BOOL CMFCExperiment72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment72View ����

void CMFCExperiment72View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment72View ��ӡ

BOOL CMFCExperiment72View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment72View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment72View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment72View ���

#ifdef _DEBUG
void CMFCExperiment72View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment72Doc* CMFCExperiment72View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment72Doc)));
	return (CMFCExperiment72Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment72View ��Ϣ�������


void CMFCExperiment72View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	pD = new MyDialog;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	
	CView::OnLButtonDblClk(nFlags, point);
}
