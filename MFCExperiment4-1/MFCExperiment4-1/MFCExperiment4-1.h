
// MFCExperiment4-1.h : MFCExperiment4-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment41App:
// �йش����ʵ�֣������ MFCExperiment4-1.cpp
//

class CMFCExperiment41App : public CWinApp
{
public:
	CMFCExperiment41App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment41App theApp;
