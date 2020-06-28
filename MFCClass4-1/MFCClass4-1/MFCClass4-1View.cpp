
// MFCClass4-1View.cpp : CMFCClass41View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass4-1.h"
#endif

#include "MFCClass4-1Doc.h"
#include "MFCClass4-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass41View

IMPLEMENT_DYNCREATE(CMFCClass41View, CView)

BEGIN_MESSAGE_MAP(CMFCClass41View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFCClass41View ����/����

CMFCClass41View::CMFCClass41View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCClass41View::~CMFCClass41View()
{
}

BOOL CMFCClass41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass41View ����

void CMFCClass41View::OnDraw(CDC* pDC)
{
	CMFCClass41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass41View ��ӡ

BOOL CMFCClass41View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass41View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass41View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass41View ���

#ifdef _DEBUG
void CMFCClass41View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass41Doc* CMFCClass41View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass41Doc)));
	return (CMFCClass41Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass41View ��Ϣ�������


void CMFCClass41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	ax = point.x;
	ay = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CMFCClass41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	bx = point.x;
	by = point.y;
	CRect rect(ax, ay, bx, by);
	dc.Rectangle(rect);

	CView::OnLButtonUp(nFlags, point);
}


void CMFCClass41View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	if (WM_LBUTTONDOWN&&nFlags){
		CClientDC dc(this);
		CString str;
		str.Format(_T("����λ�ã���%d,%d��"), point.x, point.y);
		dc.TextOutW(100, 100, str);
	}

		CView::OnMouseMove(nFlags, point);
	
}
