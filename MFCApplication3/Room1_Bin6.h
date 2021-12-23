#pragma once


// Room1_Bin6 대화 상자입니다.

class Room1_Bin6 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_Bin6)

public:
	Room1_Bin6(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room1_Bin6();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_room1_Bin6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
