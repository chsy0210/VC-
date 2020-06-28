
// MFCClass7-1View.cpp : CMFCClass71View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass7-1.h"
#endif

#include "MFCClass7-1Doc.h"
#include "MFCClass7-1View.h"
#include"MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass71View

IMPLEMENT_DYNCREATE(CMFCClass71View, CView)

BEGIN_MESSAGE_MAP(CMFCClass71View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMFCClass71View::OnPopout)
END_MESSAGE_MAP()

// CMFCClass71View ����/����

CMFCClass71View::CMFCClass71View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCClass71View::~CMFCClass71View()
{
}

BOOL CMFCClass71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass71View ����

void CMFCClass71View::OnDraw(CDC* /*pDC*/)
{
	CMFCClass71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass71View ��ӡ

BOOL CMFCClass71View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass71View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass71View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass71View ���

#ifdef _DEBUG
void CMFCClass71View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass71Doc* CMFCClass71View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass71Doc)));
	return (CMFCClass71Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass71View ��Ϣ�������


void CMFCClass71View::OnPopout()
{
	// TODO:  �ڴ���������������

	CClientDC dc(this);
	MyDialog dlg;
	int r = dlg.DoModal();
	if (r == IDOK){
		CString str;
		str = _T("�����˳��Ի���");
		dc.TextOutW(100, 200, str);
	}

}
