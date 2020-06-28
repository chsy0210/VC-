
// MFCExperiment6-2View.h : CMFCExperiment62View 类的接口
//

#pragma once


class CMFCExperiment62View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment62View();
	DECLARE_DYNCREATE(CMFCExperiment62View)

// 特性
public:
	CMFCExperiment62Doc* GetDocument() const;

// 操作
public:
	CString str;
	int position;
	bool flag;
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
	virtual ~CMFCExperiment62View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCExperiment6-2View.cpp 中的调试版本
inline CMFCExperiment62Doc* CMFCExperiment62View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment62Doc*>(m_pDocument); }
#endif

