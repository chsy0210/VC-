
// MFCExperiment6-1.h : MFCExperiment6-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment61App:
// �йش����ʵ�֣������ MFCExperiment6-1.cpp
//

class CMFCExperiment61App : public CWinAppEx
{
public:
	CMFCExperiment61App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment61App theApp;
