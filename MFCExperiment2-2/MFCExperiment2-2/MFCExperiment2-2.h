
// MFCExperiment2-2.h : MFCExperiment2-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment22App:
// �йش����ʵ�֣������ MFCExperiment2-2.cpp
//

class CMFCExperiment22App : public CWinApp
{
public:
	CMFCExperiment22App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment22App theApp;
