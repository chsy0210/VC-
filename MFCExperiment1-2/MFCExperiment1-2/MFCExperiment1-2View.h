
// MFCExperiment1-2View.h : CMFCExperiment12View ��Ľӿ�
//

#pragma once


class CMFCExperiment12View : public CView
{
protected: // �������л�����
	CMFCExperiment12View();
	DECLARE_DYNCREATE(CMFCExperiment12View)

// ����
public:
	CMFCExperiment12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment12View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment1-2View.cpp �еĵ��԰汾
inline CMFCExperiment12Doc* CMFCExperiment12View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment12Doc*>(m_pDocument); }
#endif

