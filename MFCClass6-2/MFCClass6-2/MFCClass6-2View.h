
// MFCClass6-2View.h : CMFCClass62View ��Ľӿ�
//

#pragma once


class CMFCClass62View : public CView
{
protected: // �������л�����
	CMFCClass62View();
	DECLARE_DYNCREATE(CMFCClass62View)

// ����
public:
	CMFCClass62Doc* GetDocument() const;

// ����
public:
	int h, w, sx, sy;
	CImage img;
	bool flag = false;
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
	virtual ~CMFCClass62View();
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

#ifndef _DEBUG  // MFCClass6-2View.cpp �еĵ��԰汾
inline CMFCClass62Doc* CMFCClass62View::GetDocument() const
   { return reinterpret_cast<CMFCClass62Doc*>(m_pDocument); }
#endif

