
// MFCExperiment3-2View.h : CMFCExperiment32View ��Ľӿ�
//

#pragma once


class CMFCExperiment32View : public CView
{
protected: // �������л�����
	CMFCExperiment32View();
	DECLARE_DYNCREATE(CMFCExperiment32View)

// ����
public:
	CMFCExperiment32Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment32View();
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

#ifndef _DEBUG  // MFCExperiment3-2View.cpp �еĵ��԰汾
inline CMFCExperiment32Doc* CMFCExperiment32View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment32Doc*>(m_pDocument); }
#endif

