
// MFCClass7-1View.h : CMFCClass71View ��Ľӿ�
//

#pragma once


class CMFCClass71View : public CView
{
protected: // �������л�����
	CMFCClass71View();
	DECLARE_DYNCREATE(CMFCClass71View)

// ����
public:
	CMFCClass71Doc* GetDocument() const;

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
	virtual ~CMFCClass71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // MFCClass7-1View.cpp �еĵ��԰汾
inline CMFCClass71Doc* CMFCClass71View::GetDocument() const
   { return reinterpret_cast<CMFCClass71Doc*>(m_pDocument); }
#endif

