
// MFCExperiment2-3.h : MFCExperiment2-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment23App:
// �йش����ʵ�֣������ MFCExperiment2-3.cpp
//

class CMFCExperiment23App : public CWinApp
{
public:
	CMFCExperiment23App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment23App theApp;
