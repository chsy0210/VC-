
// MFCExperiment2-1.h : MFCExperiment2-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment21App:
// �йش����ʵ�֣������ MFCExperiment2-1.cpp
//

class CMFCExperiment21App : public CWinApp
{
public:
	CMFCExperiment21App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment21App theApp;
