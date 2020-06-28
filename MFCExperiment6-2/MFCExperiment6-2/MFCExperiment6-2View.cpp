
// MFCExperiment6-2View.cpp : CMFCExperiment62View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExperiment6-2.h"
#endif

#include "MFCExperiment6-2Doc.h"
#include "MFCExperiment6-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExperiment62View

IMPLEMENT_DYNCREATE(CMFCExperiment62View, CView)

BEGIN_MESSAGE_MAP(CMFCExperiment62View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCExperiment62View ����/����

CMFCExperiment62View::CMFCExperiment62View()
{
	// TODO:  �ڴ˴���ӹ������
	flag = false;
	str = _T("");
}

CMFCExperiment62View::~CMFCExperiment62View()
{
}

BOOL CMFCExperiment62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCExperiment62View ����

void CMFCExperiment62View::OnDraw(CDC* pDC)
{
	CMFCExperiment62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	rect.left = 10;
	rect.top = 10;
	rect.right = 1300;
	rect.bottom = 40;
	pDC->Rectangle(rect);
	pDC->TextOutW(rect.left + 1, rect.top + 1, str);

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCExperiment62View ��ӡ

BOOL CMFCExperiment62View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCExperiment62View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCExperiment62View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCExperiment62View ���

#ifdef _DEBUG
void CMFCExperiment62View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCExperiment62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCExperiment62Doc* CMFCExperiment62View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExperiment62Doc)));
	return (CMFCExperiment62Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExperiment62View ��Ϣ�������


void CMFCExperiment62View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	if (flag){
		CString str1 = str.Left(position);
		CString str2 = str.Mid(position);
		str = str1 + char(nChar) + str2;
	}
	else
		str += char(nChar);
	this->Invalidate();

	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMFCExperiment62View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	position = (point.x - 10) / 10;
	flag = true;

	CView::OnLButtonDown(nFlags, point);
}
