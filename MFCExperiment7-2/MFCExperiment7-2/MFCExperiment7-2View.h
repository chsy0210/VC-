
// MFCExperiment7-2View.h : CMFCExperiment72View ��Ľӿ�
//

#pragma once
#include"MyDialog.h"

class CMFCExperiment72View : public CView
{
protected: // �������л�����
	CMFCExperiment72View();
	DECLARE_DYNCREATE(CMFCExperiment72View)

// ����
public:
	CMFCExperiment72Doc* GetDocument() const;

// ����
public:
	MyDialog *pD;
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
	virtual ~CMFCExperiment72View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment7-2View.cpp �еĵ��԰汾
inline CMFCExperiment72Doc* CMFCExperiment72View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment72Doc*>(m_pDocument); }
#endif

