
// MFCClass7-2.h : MFCClass7-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass72App:
// �йش����ʵ�֣������ MFCClass7-2.cpp
//

class CMFCClass72App : public CWinAppEx
{
public:
	CMFCClass72App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass72App theApp;
