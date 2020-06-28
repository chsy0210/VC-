
// MFCExperiment5-3View.h : CMFCExperiment53View 类的接口
//

#pragma once


class CMFCExperiment53View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment53View();
	DECLARE_DYNCREATE(CMFCExperiment53View)

// 特性
public:
	CMFCExperiment53Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&> ca;
	CArray<CRect, CRect&> cb;
	int flag = 0;
	CRect rect;

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
	virtual ~CMFCExperiment53View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnDrawrectangle();
	afx_msg void OnDrawoval();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment5-3View.cpp 中的调试版本
inline CMFCExperiment53Doc* CMFCExperiment53View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment53Doc*>(m_pDocument); }
#endif

