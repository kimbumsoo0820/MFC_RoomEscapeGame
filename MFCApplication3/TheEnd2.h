#pragma once


// TheEnd2 ��ȭ �����Դϴ�.

class TheEnd2 : public CDialogEx
{
	DECLARE_DYNAMIC(TheEnd2)

public:
	TheEnd2(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~TheEnd2();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_END2 };
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
