
// MFCExperiment3-4.h : MFCExperiment3-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment34App:
// �йش����ʵ�֣������ MFCExperiment3-4.cpp
//

class CMFCExperiment34App : public CWinApp
{
public:
	CMFCExperiment34App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment34App theApp;
