
// MFCClass2-4View.cpp : CMFCClass24View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass2-4.h"
#endif

#include "MFCClass2-4Doc.h"
#include "MFCClass2-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass24View

IMPLEMENT_DYNCREATE(CMFCClass24View, CView)

BEGIN_MESSAGE_MAP(CMFCClass24View, CView)
END_MESSAGE_MAP()

// CMFCClass24View ����/����

CMFCClass24View::CMFCClass24View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCClass24View::~CMFCClass24View()
{
}

BOOL CMFCClass24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass24View ����

void CMFCClass24View::OnDraw(CDC* pDC)
{
	CMFCClass24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect rect;
	this->GetClientRect(&rect);
	CBrush newBrush(RGB(225, 215, 0));
	CBrush*oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(rect);
	pDC->SelectObject(oldBrush);


	/*CBrush Brush;
	Brush.CreateSolidBrush(RGB(225, 215, 0));
	CRect rect;
	//this->GetClientRect(&rect);
	CRgn rgn;
	rgn.CreateEllipticRgn(100,100,500,500);
	pDC->FillRgn(&rgn, &Brush);*/
	
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass24View ���

#ifdef _DEBUG
void CMFCClass24View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass24Doc* CMFCClass24View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass24Doc)));
	return (CMFCClass24Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass24View ��Ϣ�������
