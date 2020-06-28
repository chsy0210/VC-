
// MFCClass7-2View.cpp : CMFCClass72View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass7-2.h"
#endif

#include "MFCClass7-2Doc.h"
#include "MFCClass7-2View.h"
#include"MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass72View

IMPLEMENT_DYNCREATE(CMFCClass72View, CView)

BEGIN_MESSAGE_MAP(CMFCClass72View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMFCClass72View::OnPopout)
END_MESSAGE_MAP()

// CMFCClass72View ����/����

CMFCClass72View::CMFCClass72View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCClass72View::~CMFCClass72View()
{
}

BOOL CMFCClass72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass72View ����

void CMFCClass72View::OnDraw(CDC* /*pDC*/)
{
	CMFCClass72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass72View ��ӡ

BOOL CMFCClass72View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass72View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass72View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass72View ���

#ifdef _DEBUG
void CMFCClass72View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass72Doc* CMFCClass72View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass72Doc)));
	return (CMFCClass72Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass72View ��Ϣ�������


void CMFCClass72View::OnPopout()
{
	// TODO:  �ڴ���������������

	MyDialog dlg;
	int r = dlg.DoModal();

}
