
// MFCExperiment6-1View.h : CMFCExperiment61View 类的接口
//

#pragma once


class CMFCExperiment61View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment61View();
	DECLARE_DYNCREATE(CMFCExperiment61View)

// 特性
public:
	CMFCExperiment61Doc* GetDocument() const;

// 操作
public:
	CString str;
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
	virtual ~CMFCExperiment61View();
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
};

#ifndef _DEBUG  // MFCExperiment6-1View.cpp 中的调试版本
inline CMFCExperiment61Doc* CMFCExperiment61View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment61Doc*>(m_pDocument); }
#endif

