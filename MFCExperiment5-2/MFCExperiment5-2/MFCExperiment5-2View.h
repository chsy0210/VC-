
// MFCExperiment5-2View.h : CMFCExperiment52View 类的接口
//

#pragma once


class CMFCExperiment52View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment52View();
	DECLARE_DYNCREATE(CMFCExperiment52View)

// 特性
public:
	CMFCExperiment52Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
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
	virtual ~CMFCExperiment52View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowbmp();
};

#ifndef _DEBUG  // MFCExperiment5-2View.cpp 中的调试版本
inline CMFCExperiment52Doc* CMFCExperiment52View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment52Doc*>(m_pDocument); }
#endif

