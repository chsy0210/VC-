
// MFCExperiment5-3View.h : CMFCExperiment53View ��Ľӿ�
//

#pragma once


class CMFCExperiment53View : public CView
{
protected: // �������л�����
	CMFCExperiment53View();
	DECLARE_DYNCREATE(CMFCExperiment53View)

// ����
public:
	CMFCExperiment53Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&> ca;
	CArray<CRect, CRect&> cb;
	int flag = 0;
	CRect rect;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMFCExperiment53View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnDrawrectangle();
	afx_msg void OnDrawoval();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment5-3View.cpp �еĵ��԰汾
inline CMFCExperiment53Doc* CMFCExperiment53View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment53Doc*>(m_pDocument); }
#endif

