
// MFCClass2-4.h : MFCClass2-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass24App:
// �йش����ʵ�֣������ MFCClass2-4.cpp
//

class CMFCClass24App : public CWinApp
{
public:
	CMFCClass24App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass24App theApp;
