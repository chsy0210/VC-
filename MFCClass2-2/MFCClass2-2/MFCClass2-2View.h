
// MFCClass2-2View.h : CMFCClass22View ��Ľӿ�
//

#pragma once


class CMFCClass22View : public CView
{
protected: // �������л�����
	CMFCClass22View();
	DECLARE_DYNCREATE(CMFCClass22View)

// ����
public:
	CMFCClass22Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&> ca;
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
	virtual ~CMFCClass22View();
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

#ifndef _DEBUG  // MFCClass2-2View.cpp �еĵ��԰汾
inline CMFCClass22Doc* CMFCClass22View::GetDocument() const
   { return reinterpret_cast<CMFCClass22Doc*>(m_pDocument); }
#endif

