
// MFCExperiment6-1View.h : CMFCExperiment61View ��Ľӿ�
//

#pragma once


class CMFCExperiment61View : public CView
{
protected: // �������л�����
	CMFCExperiment61View();
	DECLARE_DYNCREATE(CMFCExperiment61View)

// ����
public:
	CMFCExperiment61Doc* GetDocument() const;

// ����
public:
	CString str;
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
	virtual ~CMFCExperiment61View();
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
};

#ifndef _DEBUG  // MFCExperiment6-1View.cpp �еĵ��԰汾
inline CMFCExperiment61Doc* CMFCExperiment61View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment61Doc*>(m_pDocument); }
#endif

