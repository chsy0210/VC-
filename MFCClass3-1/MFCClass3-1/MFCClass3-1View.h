
// MFCClass3-1View.h : CMFCClass31View ��Ľӿ�
//

#pragma once


class CMFCClass31View : public CView
{
protected: // �������л�����
	CMFCClass31View();
	DECLARE_DYNCREATE(CMFCClass31View)

// ����
public:
	CMFCClass31Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&> ar;
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
	virtual ~CMFCClass31View();
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

#ifndef _DEBUG  // MFCClass3-1View.cpp �еĵ��԰汾
inline CMFCClass31Doc* CMFCClass31View::GetDocument() const
   { return reinterpret_cast<CMFCClass31Doc*>(m_pDocument); }
#endif

