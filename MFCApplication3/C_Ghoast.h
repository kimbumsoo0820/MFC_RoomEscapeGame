#pragma once


// C_Ghoast ��ȭ �����Դϴ�.

class C_Ghoast : public CDialogEx
{
	DECLARE_DYNAMIC(C_Ghoast)

public:
	C_Ghoast(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~C_Ghoast();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = Ghoast };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	int b_state, score;
};
