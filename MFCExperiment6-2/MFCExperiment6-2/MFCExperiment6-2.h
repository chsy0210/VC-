
// MFCExperiment6-2.h : MFCExperiment6-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment62App:
// �йش����ʵ�֣������ MFCExperiment6-2.cpp
//

class CMFCExperiment62App : public CWinAppEx
{
public:
	CMFCExperiment62App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment62App theApp;
