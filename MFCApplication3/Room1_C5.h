#pragma once
#include "afxwin.h"


// Room1_C5 대화 상자입니다.

class Room1_C5 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_C5)

public:
	Room1_C5(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room1_C5();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room1_Bin5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1, image2;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	CComboBox combo_alphabet1;
	CComboBox combo_alphabet2;
	CComboBox combo_alphabet3;
	CComboBox combo_alphabet4;
	CComboBox combo_alphabet5;
	afx_msg void OnCbnSelchangeCombo5();
	afx_msg void OnBnClickedOk();
};
extern int b;