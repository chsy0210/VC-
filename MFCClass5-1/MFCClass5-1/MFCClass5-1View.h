
// MFCClass5-1View.h : CMFCClass51View ��Ľӿ�
//

#pragma once


class CMFCClass51View : public CView
{
protected: // �������л�����
	CMFCClass51View();
	DECLARE_DYNCREATE(CMFCClass51View)

// ����
public:
	CMFCClass51Doc* GetDocument() const;

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
	virtual ~CMFCClass51View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawcircle();
};

#ifndef _DEBUG  // MFCClass5-1View.cpp �еĵ��԰汾
inline CMFCClass51Doc* CMFCClass51View::GetDocument() const
   { return reinterpret_cast<CMFCClass51Doc*>(m_pDocument); }
#endif

