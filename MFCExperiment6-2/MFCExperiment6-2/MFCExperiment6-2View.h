
// MFCExperiment6-2View.h : CMFCExperiment62View ��Ľӿ�
//

#pragma once


class CMFCExperiment62View : public CView
{
protected: // �������л�����
	CMFCExperiment62View();
	DECLARE_DYNCREATE(CMFCExperiment62View)

// ����
public:
	CMFCExperiment62Doc* GetDocument() const;

// ����
public:
	CString str;
	int position;
	bool flag;
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
	virtual ~CMFCExperiment62View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment6-2View.cpp �еĵ��԰汾
inline CMFCExperiment62Doc* CMFCExperiment62View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment62Doc*>(m_pDocument); }
#endif

