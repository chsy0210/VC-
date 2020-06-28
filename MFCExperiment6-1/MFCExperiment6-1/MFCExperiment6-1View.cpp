
// MFCExperiment6-1View.cpp : CMFCExperiment61View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment6-1.h"
#endif

#include "MFCExperiment6-1Doc.h"
#include "MFCExperiment6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment61View

IMPLEMENT_DYNCREATE(CMFCExperiment61View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment61View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMFCExperiment61View ����/����

CMFCExperiment61View::CMFCExperiment61View()
{
	// TODO:  �ڴ˴���ӹ������
	str = _T("");
}

CMFCExperiment61View::~CMFCExperiment61View()
{
}

BOOL CMFCExperiment61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment61View ����

void CMFCExperiment61View::OnDraw(CDC* pDC)
{
	CMFCExperiment61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	rect.left = 10;
	rect.top = 10;
	rect.right = 1300;
	rect.bottom = 40;
	pDC->Rectangle(rect);
	pDC->TextOutW(rect.left+1, rect.top+1, str);

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment61View ��ӡ

BOOL CMFCExperiment61View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment61View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment61View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment61View ���

#ifdef _DEBUG
void CMFCExperiment61View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment61Doc* CMFCExperiment61View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment61Doc)));
	return (CMFCExperiment61Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment61View ��Ϣ�������


void CMFCExperiment61View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	str += char(nChar);
	this->Invalidate();

	CView::OnChar(nChar, nRepCnt, nFlags);
}
