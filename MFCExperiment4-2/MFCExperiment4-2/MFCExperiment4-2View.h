
// MFCExperiment4-2View.h : CMFCExperiment42View ��Ľӿ�
//

#pragma once


class CMFCExperiment42View : public CView
{
protected: // �������л�����
	CMFCExperiment42View();
	DECLARE_DYNCREATE(CMFCExperiment42View)

// ����
public:
	CMFCExperiment42Doc* GetDocument() const;

// ����
public:
	int ax=400, ay=100, bx=900, by=600;
	int x1 = ax, y1 = ay, x2 = bx, y2 = by;
	CRect rect;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment42View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment4-2View.cpp �еĵ��԰汾
inline CMFCExperiment42Doc* CMFCExperiment42View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment42Doc*>(m_pDocument); }
#endif

