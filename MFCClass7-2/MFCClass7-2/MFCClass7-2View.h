
// MFCClass7-2View.h : CMFCClass72View ��Ľӿ�
//

#pragma once


class CMFCClass72View : public CView
{
protected: // �������л�����
	CMFCClass72View();
	DECLARE_DYNCREATE(CMFCClass72View)

// ����
public:
	CMFCClass72Doc* GetDocument() const;

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
	virtual ~CMFCClass72View();
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

#ifndef _DEBUG  // MFCClass7-2View.cpp �еĵ��԰汾
inline CMFCClass72Doc* CMFCClass72View::GetDocument() const
   { return reinterpret_cast<CMFCClass72Doc*>(m_pDocument); }
#endif

