#pragma once


// Room1_C5_h2 대화 상자입니다.

class Room1_C5_h2 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_C5_h2)

public:
	Room1_C5_h2(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room1_C5_h2();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room1_Bin5_hint };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
};
