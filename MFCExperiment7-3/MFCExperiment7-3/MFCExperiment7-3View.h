
// MFCExperiment7-3View.h : CMFCExperiment73View ��Ľӿ�
//

#pragma once


class CMFCExperiment73View : public CView
{
protected: // �������л�����
	CMFCExperiment73View();
	DECLARE_DYNCREATE(CMFCExperiment73View)

// ����
public:
	CMFCExperiment73Doc* GetDocument() const;

// ����
public:
	CRect rect;
	int r = 40;//ֱ��
	int flag = 1;
	int f = 0;
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
	virtual ~CMFCExperiment73View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment7-3View.cpp �еĵ��԰汾
inline CMFCExperiment73Doc* CMFCExperiment73View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment73Doc*>(m_pDocument); }
#endif

