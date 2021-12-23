#pragma once


// Room1_C4_h1 대화 상자입니다.

class Room1_C4_h1 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_C4_h1)

public:
	Room1_C4_h1(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room1_C4_h1();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room1_Bin4_hint };
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
