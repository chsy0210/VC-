
// MFCClass5-2.h : MFCClass5-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass52App:
// �йش����ʵ�֣������ MFCClass5-2.cpp
//

class CMFCClass52App : public CWinAppEx
{
public:
	CMFCClass52App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass52App theApp;
