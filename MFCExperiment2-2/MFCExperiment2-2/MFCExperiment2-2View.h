
// MFCExperiment2-2View.h : CMFCExperiment22View 类的接口
//

#pragma once


class CMFCExperiment22View : public CView
{
protected: // 仅从序列化创建
	CMFCExperiment22View();
	DECLARE_DYNCREATE(CMFCExperiment22View)

// 特性
public:
	CMFCExperiment22Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCExperiment22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCExperiment2-2View.cpp 中的调试版本
inline CMFCExperiment22Doc* CMFCExperiment22View::GetDocument() const
   { return reinterpret_cast<CMFCExperiment22Doc*>(m_pDocument); }
#endif

