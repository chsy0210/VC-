
// MFCExperiment7-1View.h : CMFCExperiment71View ��Ľӿ�
//

#pragma once


class CMFCExperiment71View : public CView
{
protected: // �������л�����
	CMFCExperiment71View();
	DECLARE_DYNCREATE(CMFCExperiment71View)

// ����
public:
	CMFCExperiment71Doc* GetDocument() const;

// ����
public:

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
	virtual ~CMFCExperiment71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment7-1View.cpp �еĵ��԰汾
inline CMFCExperiment71Doc* CMFCExperiment71View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment71Doc*>(m_pDocument); }
#endif

