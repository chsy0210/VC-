// MyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCExperiment7-2.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog �Ի���

IMPLEMENT_DYNAMIC(MyDialog, CDialogEx)

MyDialog::MyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(MyDialog::IDD, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

MyDialog::~MyDialog()
{
}

void MyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
}


BEGIN_MESSAGE_MAP(MyDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON3, &MyDialog::OnBnClickedButton3)
END_MESSAGE_MAP()


// MyDialog ��Ϣ�������


void MyDialog::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	this->UpdateData(true);
	c = a + b;
	UpdateData(false);

}
