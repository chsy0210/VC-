
// MFCExperiment5-1View.cpp : CMFCExperiment51View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment5-1.h"
#endif

#include "MFCExperiment5-1Doc.h"
#include "MFCExperiment5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment51View

IMPLEMENT_DYNCREATE(CMFCExperiment51View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment51View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_ShowName, &CMFCExperiment51View::OnShowname)
END_MESSAGE_MAP()

// CMFCExperiment51View ����/����

CMFCExperiment51View::CMFCExperiment51View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCExperiment51View::~CMFCExperiment51View()
{
}

BOOL CMFCExperiment51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment51View ����

void CMFCExperiment51View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment51View ��ӡ

BOOL CMFCExperiment51View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment51View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment51View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment51View ���

#ifdef _DEBUG
void CMFCExperiment51View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment51Doc* CMFCExperiment51View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment51Doc)));
	return (CMFCExperiment51Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment51View ��Ϣ�������


void CMFCExperiment51View::OnShowname()
{
	// TODO:  �ڴ���������������

	CClientDC dc(this);
	CString s;
	s = _T("������");
	dc.TextOutW(100, 200, s);

}
