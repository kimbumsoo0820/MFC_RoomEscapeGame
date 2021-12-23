#pragma once
#include "afxext.h"


// Room3_C_Home 대화 상자입니다.

class Room3_C_Home : public CDialogEx
{
	DECLARE_DYNAMIC(Room3_C_Home)

public:
	Room3_C_Home(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room3_C_Home();
	int point;
// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room3_Bin_home };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
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
