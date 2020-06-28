
// MFCExperiment3-2View.h : CMFCExperiment32View 类的接口
//

#pragma once


class CMFCExperiment32View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment32View();
	DECLARE_DYNCREATE(CMFCExperiment32View)

// 特性
public:
	CMFCExperiment32Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCExperiment32View();
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

#ifndef _DEBUG  // MFCExperiment3-2View.cpp 中的调试版本
inline CMFCExperiment32Doc* CMFCExperiment32View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment32Doc*>(m_pDocument); }
#endif

