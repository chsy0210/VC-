
// MFCExperiment3-1View.h : CMFCExperiment31View 类的接口
//

#pragma once


class CMFCExperiment31View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment31View();
	DECLARE_DYNCREATE(CMFCExperiment31View)

// 特性
public:
	CMFCExperiment31Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCExperiment31View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment3-1View.cpp 中的调试版本
inline CMFCExperiment31Doc* CMFCExperiment31View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment31Doc*>(m_pDocument); }
#endif

