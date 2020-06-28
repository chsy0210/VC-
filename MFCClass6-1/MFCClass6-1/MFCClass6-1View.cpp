
// MFCClass6-1View.cpp : CMFCClass61View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCClass6-1.h"
#endif

#include "MFCClass6-1Doc.h"
#include "MFCClass6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCClass61View

IMPLEMENT_DYNCREATE(CMFCClass61View, CView)

BEGIN_MESSAGE_MAP(CMFCClass61View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMFCClass61View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCClass61View ����/����

CMFCClass61View::CMFCClass61View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCClass61View::~CMFCClass61View()
{
}

BOOL CMFCClass61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCClass61View ����

void CMFCClass61View::OnDraw(CDC* /*pDC*/)
{
	CMFCClass61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCClass61View ��ӡ

BOOL CMFCClass61View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCClass61View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCClass61View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCClass61View ���

#ifdef _DEBUG
void CMFCClass61View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCClass61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCClass61Doc* CMFCClass61View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCClass61Doc)));
	return (CMFCClass61Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCClass61View ��Ϣ�������


void CMFCClass61View::OnFileOpen()
{
	// TODO:  �ڴ���������������
	CClientDC dc(this);
	CFileDialog  cfd(true);
	CRect rect;
	this->GetClientRect(&rect);
	int r = cfd.DoModal();
	int h, w, sx, sy;
	if (r == IDOK){
		CString filename = cfd.GetPathName();
		CImage img;
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
	}
}
