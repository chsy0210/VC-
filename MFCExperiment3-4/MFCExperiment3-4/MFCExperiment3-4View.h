
// MFCExperiment3-4View.h : CMFCExperiment34View ��Ľӿ�
//

#pragma once


class CMFCExperiment34View : public CView
{
protected: // �������л�����
	CMFCExperiment34View();
	DECLARE_DYNCREATE(CMFCExperiment34View)

// ����
public:
	CMFCExperiment34Doc* GetDocument() const;

// ����
public:
	int flag = 0;
	int a = 0, b = 0, c;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment34View();
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

#ifndef _DEBUG  // MFCExperiment3-4View.cpp �еĵ��԰汾
inline CMFCExperiment34Doc* CMFCExperiment34View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment34Doc*>(m_pDocument); }
#endif

