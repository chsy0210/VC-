
// MFCExperiment3-3.h : MFCExperiment3-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment33App:
// �йش����ʵ�֣������ MFCExperiment3-3.cpp
//

class CMFCExperiment33App : public CWinAppEx
{
public:
	CMFCExperiment33App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment33App theApp;
