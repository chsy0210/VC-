
// MFCExperiment7-2View.h : CMFCExperiment72View 类的接口
//

#pragma once
#include"MyDialog.h"

class CMFCExperiment72View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment72View();
	DECLARE_DYNCREATE(CMFCExperiment72View)

// 特性
public:
	CMFCExperiment72Doc* GetDocument() const;

// 操作
public:
	MyDialog *pD;
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
	virtual ~CMFCExperiment72View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment7-2View.cpp 中的调试版本
inline CMFCExperiment72Doc* CMFCExperiment72View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment72Doc*>(m_pDocument); }
#endif

