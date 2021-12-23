#pragma once


// Room3_C_info 대화 상자입니다.

class Room3_C_info : public CDialogEx
{
	DECLARE_DYNAMIC(Room3_C_info)

public:
	Room3_C_info(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room3_C_info();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room3_info };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	int b_state, score;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
