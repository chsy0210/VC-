
// MFCExperiment4-2.h : MFCExperiment4-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExperiment42App:
// �йش����ʵ�֣������ MFCExperiment4-2.cpp
//

class CMFCExperiment42App : public CWinApp
{
public:
	CMFCExperiment42App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExperiment42App theApp;
