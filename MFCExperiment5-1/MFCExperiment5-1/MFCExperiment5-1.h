
// MFCExperiment5-1.h : MFCExperiment5-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment51App:
// �йش����ʵ�֣������ MFCExperiment5-1.cpp
//

class CMFCExperiment51App : public CWinAppEx
{
public:
	CMFCExperiment51App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment51App theApp;
