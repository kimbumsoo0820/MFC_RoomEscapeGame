#pragma once


// M_Nop2 대화 상자입니다.

class M_Nop2 : public CDialogEx
{
	DECLARE_DYNAMIC(M_Nop2)

public:
	M_Nop2(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~M_Nop2();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NOP2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
};
