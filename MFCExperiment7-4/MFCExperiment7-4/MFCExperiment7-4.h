
// MFCExperiment7-4.h : MFCExperiment7-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment74App:
// �йش����ʵ�֣������ MFCExperiment7-4.cpp
//

class CMFCExperiment74App : public CWinAppEx
{
public:
	CMFCExperiment74App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment74App theApp;
