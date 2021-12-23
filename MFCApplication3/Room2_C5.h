#pragma once
#include "afxwin.h"


// Room2_C5 대화 상자입니다.

class Room2_C5 : public CDialogEx
{
	DECLARE_DYNAMIC(Room2_C5)

public:
	Room2_C5(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room2_C5();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room2_Bin5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	CComboBox combo_alphabet1;
	CComboBox combo_alphabet2;
	CComboBox combo_alphabet3;
	CComboBox combo_alphabet4;
	CComboBox combo_alphabet5;
	CComboBox combo_alphabet6;
	CComboBox combo_alphabet7;
	CComboBox combo_alphabet8;
	afx_msg void OnBnClickedOk();
};
extern int d;