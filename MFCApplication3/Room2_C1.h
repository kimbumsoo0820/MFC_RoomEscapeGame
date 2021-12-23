#pragma once
#include "afxext.h"


// Room2_C1 대화 상자입니다.

class Room2_C1 : public CDialogEx
{
	DECLARE_DYNAMIC(Room2_C1)

public:
	Room2_C1(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room2_C1();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room2_Bin1 };
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
