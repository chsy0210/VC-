
// MFCClass5-2View.h : CMFCClass52View ��Ľӿ�
//

#pragma once


class CMFCClass52View : public CView
{
protected: // �������л�����
	CMFCClass52View();
	DECLARE_DYNCREATE(CMFCClass52View)

// ����
public:
	CMFCClass52Doc* GetDocument() const;

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
	virtual ~CMFCClass52View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawcolorcircle();
};

#ifndef _DEBUG  // MFCClass5-2View.cpp �еĵ��԰汾
inline CMFCClass52Doc* CMFCClass52View::GetDocument() const
   { return reinterpret_cast<CMFCClass52Doc*>(m_pDocument); }
#endif

