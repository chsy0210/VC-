
// MFCExperiment3-1.h : MFCExperiment3-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment31App:
// �йش����ʵ�֣������ MFCExperiment3-1.cpp
//

class CMFCExperiment31App : public CWinApp
{
public:
	CMFCExperiment31App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment31App theApp;
