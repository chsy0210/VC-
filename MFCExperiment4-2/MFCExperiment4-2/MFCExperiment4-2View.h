
// MFCExperiment4-2View.h : CMFCExperiment42View 类的接口
//

#pragma once


class CMFCExperiment42View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment42View();
	DECLARE_DYNCREATE(CMFCExperiment42View)

// 特性
public:
	CMFCExperiment42Doc* GetDocument() const;

// 操作
public:
	int ax=400, ay=100, bx=900, by=600;
	int x1 = ax, y1 = ay, x2 = bx, y2 = by;
	CRect rect;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCExperiment42View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment4-2View.cpp 中的调试版本
inline CMFCExperiment42Doc* CMFCExperiment42View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment42Doc*>(m_pDocument); }
#endif

