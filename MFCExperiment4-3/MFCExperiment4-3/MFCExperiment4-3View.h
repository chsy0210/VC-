
// MFCExperiment4-3View.h : CMFCExperiment43View ��Ľӿ�
//

#pragma once


class CMFCExperiment43View : public CView
{
protected: // �������л�����
	CMFCExperiment43View();
	DECLARE_DYNCREATE(CMFCExperiment43View)

// ����
public:
	CMFCExperiment43Doc* GetDocument() const;

// ����
public:
	int N;
	CArray<CRect, CRect> cr;
	int set;
	int flag[10];
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment43View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFCExperiment4-3View.cpp �еĵ��԰汾
inline CMFCExperiment43Doc* CMFCExperiment43View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment43Doc*>(m_pDocument); }
#endif

