#pragma once


// Room1_Bin6 ��ȭ �����Դϴ�.

class Room1_Bin6 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_Bin6)

public:
	Room1_Bin6(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room1_Bin6();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_room1_Bin6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
