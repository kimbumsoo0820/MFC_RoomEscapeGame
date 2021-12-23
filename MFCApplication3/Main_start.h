#pragma once


// Main_start 대화 상자입니다.

class Main_start : public CDialogEx
{
	DECLARE_DYNAMIC(Main_start)

public:
	Main_start(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Main_start();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = Main };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1, image2;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};
