#pragma once


// Room1_Bin5 ��ȭ �����Դϴ�.

class Room1_Bin5 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_Bin5)

public:
	Room1_Bin5(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room1_Bin5();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_room1_Bin5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
