
// MFCClass6-2View.h : CMFCClass62View 类的接口
//

#pragma once


class CMFCClass62View : public CView
{
protected: // 仅从序列化创建
	CMFCClass62View();
	DECLARE_DYNCREATE(CMFCClass62View)

// 特性
public:
	CMFCClass62Doc* GetDocument() const;

// 操作
public:
	int h, w, sx, sy;
	CImage img;
	bool flag = false;
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
	virtual ~CMFCClass62View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCClass6-2View.cpp 中的调试版本
inline CMFCClass62Doc* CMFCClass62View::GetDocument() const
   { return reinterpret_cast<CMFCClass62Doc*>(m_pDocument); }
#endif

