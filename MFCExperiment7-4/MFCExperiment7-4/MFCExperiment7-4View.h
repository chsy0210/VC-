
// MFCExperiment7-4View.h : CMFCExperiment74View ��Ľӿ�
//

#pragma once


class CMFCExperiment74View : public CView
{
protected: // �������л�����
	CMFCExperiment74View();
	DECLARE_DYNCREATE(CMFCExperiment74View)

// ����
public:
	CMFCExperiment74Doc* GetDocument() const;

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
	virtual ~CMFCExperiment74View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // MFCExperiment7-4View.cpp �еĵ��԰汾
inline CMFCExperiment74Doc* CMFCExperiment74View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment74Doc*>(m_pDocument); }
#endif

