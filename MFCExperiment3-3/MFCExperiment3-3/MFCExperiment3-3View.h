
// MFCExperiment3-3View.h : CMFCExperiment33View ��Ľӿ�
//

#pragma once


class CMFCExperiment33View : public CView
{
protected: // �������л�����
	CMFCExperiment33View();
	DECLARE_DYNCREATE(CMFCExperiment33View)

// ����
public:
	CMFCExperiment33Doc* GetDocument() const;

// ����
public:
	int a = 0, b = 0, c;
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
	virtual ~CMFCExperiment33View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment3-3View.cpp �еĵ��԰汾
inline CMFCExperiment33Doc* CMFCExperiment33View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment33Doc*>(m_pDocument); }
#endif

