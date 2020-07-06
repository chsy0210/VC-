
// MFCExperiment7-3View.h : CMFCExperiment73View 类的接口
//

#pragma once


class CMFCExperiment73View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment73View();
	DECLARE_DYNCREATE(CMFCExperiment73View)

// 特性
public:
	CMFCExperiment73Doc* GetDocument() const;

// 操作
public:
	CRect rect;
	int r = 40;//直径
	int flag = 1;
	int f = 0;
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
	virtual ~CMFCExperiment73View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment7-3View.cpp 中的调试版本
inline CMFCExperiment73Doc* CMFCExperiment73View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment73Doc*>(m_pDocument); }
#endif

