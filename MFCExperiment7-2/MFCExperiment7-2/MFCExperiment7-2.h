
// MFCExperiment7-2.h : MFCExperiment7-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment72App:
// �йش����ʵ�֣������ MFCExperiment7-2.cpp
//

class CMFCExperiment72App : public CWinAppEx
{
public:
	CMFCExperiment72App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment72App theApp;
