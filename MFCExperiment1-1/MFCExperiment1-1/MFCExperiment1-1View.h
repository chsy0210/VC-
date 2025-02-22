
// MFCExperiment1-1View.h : CMFCExperiment11View 类的接口
//

#pragma once


class CMFCExperiment11View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment11View();
	DECLARE_DYNCREATE(CMFCExperiment11View)

// 特性
public:
	CMFCExperiment11Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCExperiment11View();
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

#ifndef _DEBUG  // MFCExperiment1-1View.cpp 中的调试版本
inline CMFCExperiment11Doc* CMFCExperiment11View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment11Doc*>(m_pDocument); }
#endif

