#pragma once


// Mydialog 对话框

class Mydialog : public CDialogEx
{
	DECLARE_DYNAMIC(Mydialog)

public:
	Mydialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydialog();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString x;
	int y;
	CString z;
	afx_msg void OnBnClickedButton1();
};
