
// MFCExperiment2-2View.h : CMFCExperiment22View ��Ľӿ�
//

#pragma once


class CMFCExperiment22View : public CView
{
protected: // �������л�����
	CMFCExperiment22View();
	DECLARE_DYNCREATE(CMFCExperiment22View)

// ����
public:
	CMFCExperiment22Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCExperiment2-2View.cpp �еĵ��԰汾
inline CMFCExperiment22Doc* CMFCExperiment22View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment22Doc*>(m_pDocument); }
#endif

