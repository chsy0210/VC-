
// MFCClass7-1View.h : CMFCClass71View 类的接口
//

#pragma once


class CMFCClass71View : public CView
{
protected: // 仅从序列化创建
	CMFCClass71View();
	DECLARE_DYNCREATE(CMFCClass71View)

// 特性
public:
	CMFCClass71Doc* GetDocument() const;

// 操作
public:

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
	virtual ~CMFCClass71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // MFCClass7-1View.cpp 中的调试版本
inline CMFCClass71Doc* CMFCClass71View::GetDocument() const
   { return reinterpret_cast<CMFCClass71Doc*>(m_pDocument); }
#endif

