
// MFCClass6-1View.h : CMFCClass61View ��Ľӿ�
//

#pragma once


class CMFCClass61View : public CView
{
protected: // �������л�����
	CMFCClass61View();
	DECLARE_DYNCREATE(CMFCClass61View)

// ����
public:
	CMFCClass61Doc* GetDocument() const;

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
	virtual ~CMFCClass61View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCClass6-1View.cpp �еĵ��԰汾
inline CMFCClass61Doc* CMFCClass61View::GetDocument() const
   { return reinterpret_cast<CMFCClass61Doc*>(m_pDocument); }
#endif

