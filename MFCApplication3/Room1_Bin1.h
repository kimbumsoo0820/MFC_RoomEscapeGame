#pragma once


// Room1_Bin1 ��ȭ �����Դϴ�.

class Room1_Bin1 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_Bin1)

public:
	Room1_Bin1(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room1_Bin1();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Bin1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedOk();
};
