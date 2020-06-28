// MyDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCClass7-2.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog 对话框

IMPLEMENT_DYNAMIC(MyDialog, CDialogEx)

MyDialog::MyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(MyDialog::IDD, pParent)
	, str1(_T(""))
	, str2(_T(""))
{

}

MyDialog::~MyDialog()
{
}

void MyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str1);
	DDV_MaxChars(pDX, str1, 20);
	DDX_Text(pDX, IDC_EDIT2, str2);
	DDV_MaxChars(pDX, str2, 20);
}


BEGIN_MESSAGE_MAP(MyDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDialog 消息处理程序


void MyDialog::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码

	this->UpdateData(true);
	CString str;
	str = str1;
	str1 = str2;
	str2 = str;
	this->UpdateData(false);

}
