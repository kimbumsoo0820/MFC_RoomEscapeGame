#pragma once


// Main_start ��ȭ �����Դϴ�.

class Main_start : public CDialogEx
{
	DECLARE_DYNAMIC(Main_start)

public:
	Main_start(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Main_start();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = Main };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1, image2;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};
