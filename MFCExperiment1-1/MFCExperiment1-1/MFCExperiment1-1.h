
// MFCExperiment1-1.h : MFCExperiment1-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment11App:
// �йش����ʵ�֣������ MFCExperiment1-1.cpp
//

class CMFCExperiment11App : public CWinApp
{
public:
	CMFCExperiment11App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment11App theApp;
