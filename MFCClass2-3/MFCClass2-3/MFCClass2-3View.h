
// MFCClass2-3View.h : CMFCClass23View ��Ľӿ�
//

#pragma once


class CMFCClass23View : public CView
{
protected: // �������л�����
	CMFCClass23View();
	DECLARE_DYNCREATE(CMFCClass23View)

// ����
public:
	CMFCClass23Doc* GetDocument() const;

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
	virtual ~CMFCClass23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCClass2-3View.cpp �еĵ��԰汾
inline CMFCClass23Doc* CMFCClass23View::GetDocument() const
   { return reinterpret_cast<CMFCClass23Doc*>(m_pDocument); }
#endif

