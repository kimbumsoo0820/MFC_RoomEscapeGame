#pragma once


// Room2_C4 대화 상자입니다.

class Room2_C4 : public CDialogEx
{
	DECLARE_DYNAMIC(Room2_C4)

public:
	Room2_C4(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Room2_C4();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room2_Bin4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedCheck5();
	afx_msg void OnBnClickedCheck6();
	afx_msg void OnBnClickedOk();
};
extern int point1, point2, point3, point3, point3, point5, point6;
extern int c;