
// MFCExperiment2-3View.h : CMFCExperiment23View ��Ľӿ�
//

#pragma once


class CMFCExperiment23View : public CView
{
protected: // �������л�����
	CMFCExperiment23View();
	DECLARE_DYNCREATE(CMFCExperiment23View)

// ����
public:
	CMFCExperiment23Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment23View();
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

#ifndef _DEBUG  // MFCExperiment2-3View.cpp �еĵ��԰汾
inline CMFCExperiment23Doc* CMFCExperiment23View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment23Doc*>(m_pDocument); }
#endif

