
// MFCExperiment4-1View.h : CMFCExperiment41View ��Ľӿ�
//

#pragma once


class CMFCExperiment41View : public CView
{
protected: // �������л�����
	CMFCExperiment41View();
	DECLARE_DYNCREATE(CMFCExperiment41View)

// ����
public:
	CMFCExperiment41Doc* GetDocument() const;

// ����
public:
	int flag = 0;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment41View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment4-1View.cpp �еĵ��԰汾
inline CMFCExperiment41Doc* CMFCExperiment41View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment41Doc*>(m_pDocument); }
#endif

