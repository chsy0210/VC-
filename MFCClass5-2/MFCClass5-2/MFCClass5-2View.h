
// MFCClass5-2View.h : CMFCClass52View 类的接口
//

#pragma once


class CMFCClass52View : public CView
{
protected: // 仅从序列化创建
	CMFCClass52View();
	DECLARE_DYNCREATE(CMFCClass52View)

// 特性
public:
	CMFCClass52Doc* GetDocument() const;

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
	virtual ~CMFCClass52View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawcolorcircle();
};

#ifndef _DEBUG  // MFCClass5-2View.cpp 中的调试版本
inline CMFCClass52Doc* CMFCClass52View::GetDocument() const
   { return reinterpret_cast<CMFCClass52Doc*>(m_pDocument); }
#endif

