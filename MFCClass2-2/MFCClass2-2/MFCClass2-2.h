
// MFCClass2-2.h : MFCClass2-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass22App:
// �йش����ʵ�֣������ MFCClass2-2.cpp
//

class CMFCClass22App : public CWinApp
{
public:
	CMFCClass22App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass22App theApp;
