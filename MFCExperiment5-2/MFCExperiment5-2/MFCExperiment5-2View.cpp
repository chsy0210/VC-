
// MFCExperiment5-2View.cpp : CMFCExperiment52View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment5-2.h"
#endif

#include "MFCExperiment5-2Doc.h"
#include "MFCExperiment5-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment52View

IMPLEMENT_DYNCREATE(CMFCExperiment52View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment52View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_ShowBmp, &CMFCExperiment52View::OnShowbmp)
END_MESSAGE_MAP()

// CMFCExperiment52View ����/����

CMFCExperiment52View::CMFCExperiment52View()
{
	// TODO:  �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFCExperiment52View::~CMFCExperiment52View()
{
}

BOOL CMFCExperiment52View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment52View ����

void CMFCExperiment52View::OnDraw(CDC* /*pDC*/)
{
	CMFCExperiment52Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment52View ��ӡ

BOOL CMFCExperiment52View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment52View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment52View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment52View ���

#ifdef _DEBUG
void CMFCExperiment52View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment52View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment52Doc* CMFCExperiment52View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment52Doc)));
	return (CMFCExperiment52Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment52View ��Ϣ�������


void CMFCExperiment52View::OnShowbmp()
{
	// TODO:  �ڴ���������������
	CClientDC dc(this);
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	dc.BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}
