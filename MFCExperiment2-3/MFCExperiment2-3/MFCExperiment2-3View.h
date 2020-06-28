
// MFCExperiment2-3View.h : CMFCExperiment23View 类的接口
//

#pragma once


class CMFCExperiment23View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment23View();
	DECLARE_DYNCREATE(CMFCExperiment23View)

// 特性
public:
	CMFCExperiment23Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCExperiment23View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment2-3View.cpp 中的调试版本
inline CMFCExperiment23Doc* CMFCExperiment23View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment23Doc*>(m_pDocument); }
#endif

