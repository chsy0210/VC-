
// MFCExperiment5-3.h : MFCExperiment5-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment53App:
// �йش����ʵ�֣������ MFCExperiment5-3.cpp
//

class CMFCExperiment53App : public CWinAppEx
{
public:
	CMFCExperiment53App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment53App theApp;
