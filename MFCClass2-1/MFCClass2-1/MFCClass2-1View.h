
// MFCClass2-1View.h : CMFCClass21View ��Ľӿ�
//

#pragma once


class CMFCClass21View : public CView
{
protected: // �������л�����
	CMFCClass21View();
	DECLARE_DYNCREATE(CMFCClass21View)

// ����
public:
	CMFCClass21Doc* GetDocument() const;

// ����
public:

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
	virtual ~CMFCClass21View();
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

#ifndef _DEBUG  // MFCClass2-1View.cpp �еĵ��԰汾
inline CMFCClass21Doc* CMFCClass21View::GetDocument() const
   { return reinterpret_cast<CMFCClass21Doc*>(m_pDocument); }
#endif

