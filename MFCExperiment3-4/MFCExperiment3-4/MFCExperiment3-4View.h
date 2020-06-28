
// MFCExperiment3-4View.h : CMFCExperiment34View 类的接口
//

#pragma once


class CMFCExperiment34View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment34View();
	DECLARE_DYNCREATE(CMFCExperiment34View)

// 特性
public:
	CMFCExperiment34Doc* GetDocument() const;

// 操作
public:
	int flag = 0;
	int a = 0, b = 0, c;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCExperiment34View();
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

#ifndef _DEBUG  // MFCExperiment3-4View.cpp 中的调试版本
inline CMFCExperiment34Doc* CMFCExperiment34View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment34Doc*>(m_pDocument); }
#endif

