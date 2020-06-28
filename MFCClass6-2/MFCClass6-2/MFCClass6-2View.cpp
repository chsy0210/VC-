
// MFCClass6-2View.cpp : CMFCClass62View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass6-2.h"
#endif

#include "MFCClass6-2Doc.h"
#include "MFCClass6-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass62View

IMPLEMENT_DYNCREATE(CMFCClass62View, CView)

BEGIN_MESSAGE_MAP(CMFCClass62View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMFCClass62View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCClass62View ����/����

CMFCClass62View::CMFCClass62View()
{
	// TODO:  �ڴ˴���ӹ������
}

CMFCClass62View::~CMFCClass62View()
{
}

BOOL CMFCClass62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass62View ����

void CMFCClass62View::OnDraw(CDC* pDC)
{
	CMFCClass62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag){
		img.Draw(pDC->m_hDC, sx, sy, w, h);
	}
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass62View ��ӡ

BOOL CMFCClass62View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass62View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass62View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass62View ���

#ifdef _DEBUG
void CMFCClass62View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass62Doc* CMFCClass62View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass62Doc)));
	return (CMFCClass62Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass62View ��Ϣ�������


void CMFCClass62View::OnFileOpen()
{
	// TODO:  �ڴ���������������
	CClientDC dc(this);
	CRect rect;
	this->GetClientRect(&rect);
	CFileDialog  cfd(true);
	int r = cfd.DoModal();
	CString filename = cfd.GetPathName();
	if (r == IDOK){
		
		img.Load(filename);
		float rect_ratio = 1.0*rect.Width() / rect.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		if (rect_ratio > img_ratio){
			h = rect.Height();
			w = img_ratio*h;
			sx = 0 + (rect.Width() - w) / 2;
			sy = 0;
		}
		else{
			w = rect.Width();
			h = w / img_ratio;
			sx = 0;
			sy = 0 + (rect.Height() - h) / 2;
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
		flag = true;
	}
}


