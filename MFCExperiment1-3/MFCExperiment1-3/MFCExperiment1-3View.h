
// MFCExperiment1-3View.h : CMFCExperiment13View ��Ľӿ�
//

#pragma once


class CMFCExperiment13View : public CView
{
protected: // �������л�����
	CMFCExperiment13View();
	DECLARE_DYNCREATE(CMFCExperiment13View)

// ����
public:
	CMFCExperiment13Doc* GetDocument() const;

// ����
public:
	CString B;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment13View();
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

#ifndef _DEBUG  // MFCExperiment1-3View.cpp �еĵ��԰汾
inline CMFCExperiment13Doc* CMFCExperiment13View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment13Doc*>(m_pDocument); }
#endif

