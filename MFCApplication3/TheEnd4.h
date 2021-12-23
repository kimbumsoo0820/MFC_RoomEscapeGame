#pragma once


// TheEnd4 대화 상자입니다.

class TheEnd4 : public CDialogEx
{
	DECLARE_DYNAMIC(TheEnd4)

public:
	TheEnd4(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~TheEnd4();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_END4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	int b_state, score;
};
