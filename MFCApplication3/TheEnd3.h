#pragma once


// TheEnd3 ��ȭ �����Դϴ�.

class TheEnd3 : public CDialogEx
{
	DECLARE_DYNAMIC(TheEnd3)

public:
	TheEnd3(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~TheEnd3();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_END3 };
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
