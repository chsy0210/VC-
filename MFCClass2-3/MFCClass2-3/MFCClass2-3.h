
// MFCClass2-3.h : MFCClass2-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass23App:
// �йش����ʵ�֣������ MFCClass2-3.cpp
//

class CMFCClass23App : public CWinAppEx
{
public:
	CMFCClass23App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass23App theApp;
