
// MFCExperiment1-2.h : MFCExperiment1-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment12App:
// �йش����ʵ�֣������ MFCExperiment1-2.cpp
//

class CMFCExperiment12App : public CWinApp
{
public:
	CMFCExperiment12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment12App theApp;
