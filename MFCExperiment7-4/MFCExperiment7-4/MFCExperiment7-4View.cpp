
// MFCExperiment7-4View.cpp : CMFCExperiment74View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment7-4.h"
#endif

#include "MFCExperiment7-4Doc.h"
#include "MFCExperiment7-4View.h"
#include"Mydialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment74View

IMPLEMENT_DYNCREATE(CMFCExperiment74View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment74View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_32771, &CMFCExperiment74View::On32771)
END_MESSAGE_MAP()

// CMFCExperiment74View ����/����

CMFCExperiment74View::CMFCExperiment74View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment74View::~CMFCExperiment74View()
{
}

BOOL CMFCExperiment74View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment74View ����

void CMFCExperiment74View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment74Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment74View ��ӡ

BOOL CMFCExperiment74View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment74View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment74View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment74View ���

#ifdef _DEBUG
void CMFCExperiment74View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment74View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment74Doc* CMFCExperiment74View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment74Doc)));
	return (CMFCExperiment74Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment74View ��Ϣ�������


void CMFCExperiment74View::On32771()
{
	// TODO:  �ڴ���������������
	Mydialog dlg;
	dlg.DoModal();
}
