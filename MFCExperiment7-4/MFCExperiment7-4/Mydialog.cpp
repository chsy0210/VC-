// Mydialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCExperiment7-4.h"
#include "Mydialog.h"
#include "afxdialogex.h"


// Mydialog �Ի���

IMPLEMENT_DYNAMIC(Mydialog, CDialogEx)

Mydialog::Mydialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(Mydialog::IDD, pParent)
	, x(_T(""))
	, z(_T(""))
{

}

Mydialog::~Mydialog()
{
}

void Mydialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(Mydialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydialog ��Ϣ�������


void Mydialog::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	CString n;
	n.Format(_T("%d"), y);
	z = x + n;
	UpdateData(false);
}
