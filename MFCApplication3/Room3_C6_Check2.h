#pragma once


// Room3_C6_Check2 대화 상자입니다.

class Room3_C6_Check2 : public CDialogEx
{
	DECLARE_DYNAMIC(Room3_C6_Check2)

public:
	Room3_C6_Check2(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room3_C6_Check2();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room3_Bin6_C2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};
