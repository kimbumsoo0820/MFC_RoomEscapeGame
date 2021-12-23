#pragma once


// C_Ghoast 대화 상자입니다.

class C_Ghoast : public CDialogEx
{
	DECLARE_DYNAMIC(C_Ghoast)

public:
	C_Ghoast(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~C_Ghoast();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = Ghoast };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	int b_state, score;
};
