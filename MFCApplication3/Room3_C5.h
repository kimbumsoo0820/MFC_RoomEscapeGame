#pragma once
#include "afxwin.h"


// Room3_C5 ��ȭ �����Դϴ�.

class Room3_C5 : public CDialogEx
{
	DECLARE_DYNAMIC(Room3_C5)

public:
	Room3_C5(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room3_C5();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room3_Bin5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
	CComboBox combo_alphabet1;
	CComboBox combo_alphabet2;
	CComboBox combo_alphabet3;
	CComboBox combo_alphabet4;
	CComboBox combo_alphabet5;
};
extern int f;