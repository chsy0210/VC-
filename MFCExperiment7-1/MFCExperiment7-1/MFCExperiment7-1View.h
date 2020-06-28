
// MFCExperiment7-1View.h : CMFCExperiment71View 类的接口
//

#pragma once


class CMFCExperiment71View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment71View();
	DECLARE_DYNCREATE(CMFCExperiment71View)

// 特性
public:
	CMFCExperiment71Doc* GetDocument() const;

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
	virtual ~CMFCExperiment71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment7-1View.cpp 中的调试版本
inline CMFCExperiment71Doc* CMFCExperiment71View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment71Doc*>(m_pDocument); }
#endif

