
// MFCClass4-1.h : MFCClass4-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass41App:
// �йش����ʵ�֣������ MFCClass4-1.cpp
//

class CMFCClass41App : public CWinAppEx
{
public:
	CMFCClass41App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass41App theApp;
