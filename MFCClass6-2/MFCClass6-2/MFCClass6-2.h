
// MFCClass6-2.h : MFCClass6-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass62App:
// �йش����ʵ�֣������ MFCClass6-2.cpp
//

class CMFCClass62App : public CWinAppEx
{
public:
	CMFCClass62App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass62App theApp;
