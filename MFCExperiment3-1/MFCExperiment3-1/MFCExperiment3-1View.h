
// MFCExperiment3-1View.h : CMFCExperiment31View ��Ľӿ�
//

#pragma once


class CMFCExperiment31View : public CView
{
protected: // �������л�����
	CMFCExperiment31View();
	DECLARE_DYNCREATE(CMFCExperiment31View)

// ����
public:
	CMFCExperiment31Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment31View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment3-1View.cpp �еĵ��԰汾
inline CMFCExperiment31Doc* CMFCExperiment31View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment31Doc*>(m_pDocument); }
#endif

