#pragma once


// Room3_C1 ��ȭ �����Դϴ�.

class Room3_C1 : public CDialogEx
{
	DECLARE_DYNAMIC(Room3_C1)

public:
	Room3_C1(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room3_C1();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room3_Bin1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};