
// MFCClass7-1.h : MFCClass7-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass71App:
// �йش����ʵ�֣������ MFCClass7-1.cpp
//

class CMFCClass71App : public CWinAppEx
{
public:
	CMFCClass71App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass71App theApp;
