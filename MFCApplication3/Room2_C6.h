#pragma once
#include "afxwin.h"


// Room2_C6 ��ȭ �����Դϴ�.

class Room2_C6 : public CDialogEx
{
	DECLARE_DYNAMIC(Room2_C6)

public:
	Room2_C6(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room2_C6();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room2_Bin6 };
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
};
