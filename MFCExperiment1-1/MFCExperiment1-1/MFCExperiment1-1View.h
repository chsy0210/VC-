
// MFCExperiment1-1View.h : CMFCExperiment11View ��Ľӿ�
//

#pragma once


class CMFCExperiment11View : public CView
{
protected: // �������л�����
	CMFCExperiment11View();
	DECLARE_DYNCREATE(CMFCExperiment11View)

// ����
public:
	CMFCExperiment11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment1-1View.cpp �еĵ��԰汾
inline CMFCExperiment11Doc* CMFCExperiment11View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment11Doc*>(m_pDocument); }
#endif

