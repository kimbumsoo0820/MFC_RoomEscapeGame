#pragma once


// TheEnd ��ȭ �����Դϴ�.

class TheEnd : public CDialogEx
{
	DECLARE_DYNAMIC(TheEnd)

public:
	TheEnd(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~TheEnd();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_END };
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
