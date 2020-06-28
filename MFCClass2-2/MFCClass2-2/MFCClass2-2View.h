
// MFCClass2-2View.h : CMFCClass22View 类的接口
//

#pragma once


class CMFCClass22View : public CView
{
protected: // 仅从序列化创建
	CMFCClass22View();
	DECLARE_DYNCREATE(CMFCClass22View)

// 特性
public:
	CMFCClass22Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&> ca;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMFCClass22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCClass2-2View.cpp 中的调试版本
inline CMFCClass22Doc* CMFCClass22View::GetDocument() const
   { return reinterpret_cast<CMFCClass22Doc*>(m_pDocument); }
#endif

