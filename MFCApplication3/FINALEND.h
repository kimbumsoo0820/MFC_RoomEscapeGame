#pragma once


// FINALEND 대화 상자입니다.

class FINALEND : public CDialogEx
{
	DECLARE_DYNAMIC(FINALEND)

public:
	FINALEND(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~FINALEND();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_THEEND };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
};
