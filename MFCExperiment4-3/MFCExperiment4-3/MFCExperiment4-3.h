
// MFCExperiment4-3.h : MFCExperiment4-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment43App:
// �йش����ʵ�֣������ MFCExperiment4-3.cpp
//

class CMFCExperiment43App : public CWinApp
{
public:
	CMFCExperiment43App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment43App theApp;
