#pragma once


// TheEnd4 ��ȭ �����Դϴ�.

class TheEnd4 : public CDialogEx
{
	DECLARE_DYNAMIC(TheEnd4)

public:
	TheEnd4(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~TheEnd4();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_END4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	int b_state, score;
};
