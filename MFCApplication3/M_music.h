#pragma once


// M_music 대화 상자입니다.

class M_music : public CDialogEx
{
	DECLARE_DYNAMIC(M_music)

public:
	M_music(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~M_music();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Music };
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
