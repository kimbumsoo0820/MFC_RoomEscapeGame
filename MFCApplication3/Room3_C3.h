#pragma once


// Room3_C3 ��ȭ �����Դϴ�.

class Room3_C3 : public CDialogEx
{
	DECLARE_DYNAMIC(Room3_C3)

public:
	Room3_C3(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room3_C3();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room3_Bin3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};
