#pragma once
#include "afxext.h"


// Room3_C_Home ��ȭ �����Դϴ�.

class Room3_C_Home : public CDialogEx
{
	DECLARE_DYNAMIC(Room3_C_Home)

public:
	Room3_C_Home(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room3_C_Home();
	int point;
// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room3_Bin_home };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	CBitmapButton test;
	CBitmapButton test2;
	CBitmapButton test3;
	CBitmapButton test4;
	CBitmapButton test5;
	CBitmapButton test6;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
};
