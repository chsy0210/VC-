
// MFCClass3-2View.h : CMFCClass32View ��Ľӿ�
//

#pragma once


class CMFCClass32View : public CView
{
protected: // �������л�����
	CMFCClass32View();
	DECLARE_DYNCREATE(CMFCClass32View)

// ����
public:
	CMFCClass32Doc* GetDocument() const;

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
	virtual ~CMFCClass32View();
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

#ifndef _DEBUG  // MFCClass3-2View.cpp �еĵ��԰汾
inline CMFCClass32Doc* CMFCClass32View::GetDocument() const
   { return reinterpret_cast<CMFCClass32Doc*>(m_pDocument); }
#endif

