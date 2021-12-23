#pragma once


// Room2_C2 대화 상자입니다.

class Room2_C2 : public CDialogEx
{
	DECLARE_DYNAMIC(Room2_C2)

public:
	Room2_C2(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room2_C2();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room2_Bin2 };
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
