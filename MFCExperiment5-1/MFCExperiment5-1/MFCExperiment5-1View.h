
// MFCExperiment5-1View.h : CMFCExperiment51View ��Ľӿ�
//

#pragma once


class CMFCExperiment51View : public CView
{
protected: // �������л�����
	CMFCExperiment51View();
	DECLARE_DYNCREATE(CMFCExperiment51View)

// ����
public:
	CMFCExperiment51Doc* GetDocument() const;

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
	virtual ~CMFCExperiment51View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // MFCExperiment5-1View.cpp �еĵ��԰汾
inline CMFCExperiment51Doc* CMFCExperiment51View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment51Doc*>(m_pDocument); }
#endif

