
// MFCExperiment1-3.h : MFCExperiment1-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment13App:
// �йش����ʵ�֣������ MFCExperiment1-3.cpp
//

class CMFCExperiment13App : public CWinApp
{
public:
	CMFCExperiment13App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment13App theApp;
