
// MFCExperiment2-1View.h : CMFCExperiment21View ��Ľӿ�
//

#pragma once


class CMFCExperiment21View : public CView
{
protected: // �������л�����
	CMFCExperiment21View();
	DECLARE_DYNCREATE(CMFCExperiment21View)

// ����
public:
	CMFCExperiment21Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCExperiment21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCExperiment2-1View.cpp �еĵ��԰汾
inline CMFCExperiment21Doc* CMFCExperiment21View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment21Doc*>(m_pDocument); }
#endif

