
// MFCExperiment5-2View.h : CMFCExperiment52View ��Ľӿ�
//

#pragma once


class CMFCExperiment52View : public CView
{
protected: // �������л�����
	CMFCExperiment52View();
	DECLARE_DYNCREATE(CMFCExperiment52View)

// ����
public:
	CMFCExperiment52Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
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
	virtual ~CMFCExperiment52View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowbmp();
};

#ifndef _DEBUG  // MFCExperiment5-2View.cpp �еĵ��԰汾
inline CMFCExperiment52Doc* CMFCExperiment52View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment52Doc*>(m_pDocument); }
#endif

