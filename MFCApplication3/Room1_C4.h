#pragma once
#include "afxwin.h"


// Room1_C4 ��ȭ �����Դϴ�.

class Room1_C4 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_C4)

public:
	Room1_C4(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room1_C4();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room1_Bin4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	CImage image1, image2;
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox combo_alphabet1;
	CComboBox combo_alphabet2;
	CComboBox combo_alphabet3;
	CComboBox combo_alphabet4;
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnCbnSelchangeCombo3();
	afx_msg void OnCbnSelchangeCombo4();
	
};
extern int a;