
// MFCClass4-1View.h : CMFCClass41View ��Ľӿ�
//

#pragma once


class CMFCClass41View : public CView
{
protected: // �������л�����
	CMFCClass41View();
	DECLARE_DYNCREATE(CMFCClass41View)

// ����
public:
	CMFCClass41Doc* GetDocument() const;

// ����
public:
	int ax, ay, bx, by;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMFCClass41View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCClass4-1View.cpp �еĵ��԰汾
inline CMFCClass41Doc* CMFCClass41View::GetDocument() const
   { return reinterpret_cast<CMFCClass41Doc*>(m_pDocument); }
#endif

