#pragma once


// Room3_C6 ��ȭ �����Դϴ�.

class Room3_C6 : public CDialogEx
{
	DECLARE_DYNAMIC(Room3_C6)

public:
	Room3_C6(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room3_C6();
	int check;
// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room3_Bin6 };
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
