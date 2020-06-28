
// MFCExperiment4-3View.h : CMFCExperiment43View 类的接口
//

#pragma once


class CMFCExperiment43View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment43View();
	DECLARE_DYNCREATE(CMFCExperiment43View)

// 特性
public:
	CMFCExperiment43Doc* GetDocument() const;

// 操作
public:
	int N;
	CArray<CRect, CRect> cr;
	int set;
	int flag[10];
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCExperiment43View();
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
};

#ifndef _DEBUG  // MFCExperiment4-3View.cpp 中的调试版本
inline CMFCExperiment43Doc* CMFCExperiment43View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment43Doc*>(m_pDocument); }
#endif

