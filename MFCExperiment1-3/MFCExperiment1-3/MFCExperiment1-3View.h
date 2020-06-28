
// MFCExperiment1-3View.h : CMFCExperiment13View 类的接口
//

#pragma once


class CMFCExperiment13View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment13View();
	DECLARE_DYNCREATE(CMFCExperiment13View)

// 特性
public:
	CMFCExperiment13Doc* GetDocument() const;

// 操作
public:
	CString B;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCExperiment13View();
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

#ifndef _DEBUG  // MFCExperiment1-3View.cpp 中的调试版本
inline CMFCExperiment13Doc* CMFCExperiment13View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment13Doc*>(m_pDocument); }
#endif

