#pragma once


// Room1_Bin4 ��ȭ �����Դϴ�.

class Room1_Bin4 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_Bin4)

public:
	Room1_Bin4(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room1_Bin4();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_room1_Bin4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
