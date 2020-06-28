
// MFCClass2-3View.cpp : CMFCClass23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass2-3.h"
#endif

#include "MFCClass2-3Doc.h"
#include "MFCClass2-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass23View

IMPLEMENT_DYNCREATE(CMFCClass23View, CView)

BEGIN_MESSAGE_MAP(CMFCClass23View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCClass23View ����/����

CMFCClass23View::CMFCClass23View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCClass23View::~CMFCClass23View()
{
}

BOOL CMFCClass23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass23View ����

void CMFCClass23View::OnDraw(CDC* pDC)
{
	CMFCClass23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rect;
	this->GetClientRect(&rect);
	pDC->Ellipse(rect);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass23View ��ӡ

BOOL CMFCClass23View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass23View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass23View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass23View ���

#ifdef _DEBUG
void CMFCClass23View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass23Doc* CMFCClass23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass23Doc)));
	return (CMFCClass23Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass23View ��Ϣ�������
