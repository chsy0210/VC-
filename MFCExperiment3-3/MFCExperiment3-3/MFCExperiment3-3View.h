
// MFCExperiment3-3View.h : CMFCExperiment33View 类的接口
//

#pragma once


class CMFCExperiment33View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment33View();
	DECLARE_DYNCREATE(CMFCExperiment33View)

// 特性
public:
	CMFCExperiment33Doc* GetDocument() const;

// 操作
public:
	int a = 0, b = 0, c;
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
	virtual ~CMFCExperiment33View();
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

#ifndef _DEBUG  // MFCExperiment3-3View.cpp 中的调试版本
inline CMFCExperiment33Doc* CMFCExperiment33View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment33Doc*>(m_pDocument); }
#endif

