
// MFCClass2-1.h : MFCClass2-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass21App:
// �йش����ʵ�֣������ MFCClass2-1.cpp
//

class CMFCClass21App : public CWinApp
{
public:
	CMFCClass21App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass21App theApp;
