
// MFCClass2-4View.h : CMFCClass24View ��Ľӿ�
//

#pragma once


class CMFCClass24View : public CView
{
protected: // �������л�����
	CMFCClass24View();
	DECLARE_DYNCREATE(CMFCClass24View)

// ����
public:
	CMFCClass24Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCClass24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCClass2-4View.cpp �еĵ��԰汾
inline CMFCClass24Doc* CMFCClass24View::GetDocument() const
   { return reinterpret_cast<CMFCClass24Doc*>(m_pDocument); }
#endif

