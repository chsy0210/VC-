
// MFCExperiment3-2.h : MFCExperiment3-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment32App:
// �йش����ʵ�֣������ MFCExperiment3-2.cpp
//

class CMFCExperiment32App : public CWinApp
{
public:
	CMFCExperiment32App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment32App theApp;
