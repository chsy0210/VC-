
// MFCClass3-1.h : MFCClass3-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass31App:
// �йش����ʵ�֣������ MFCClass3-1.cpp
//

class CMFCClass31App : public CWinAppEx
{
public:
	CMFCClass31App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass31App theApp;
