
// MFCExperiment5-1View.h : CMFCExperiment51View 类的接口
//

#pragma once


class CMFCExperiment51View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment51View();
	DECLARE_DYNCREATE(CMFCExperiment51View)

// 特性
public:
	CMFCExperiment51Doc* GetDocument() const;

// 操作
public:

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
	virtual ~CMFCExperiment51View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // MFCExperiment5-1View.cpp 中的调试版本
inline CMFCExperiment51Doc* CMFCExperiment51View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment51Doc*>(m_pDocument); }
#endif

