
// MFCExperiment7-1.h : MFCExperiment7-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment71App:
// �йش����ʵ�֣������ MFCExperiment7-1.cpp
//

class CMFCExperiment71App : public CWinAppEx
{
public:
	CMFCExperiment71App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment71App theApp;
