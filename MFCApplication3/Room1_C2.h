#pragma once


// Room1_C2 ��ȭ �����Դϴ�.

class Room1_C2 : public CDialogEx
{
	DECLARE_DYNAMIC(Room1_C2)

public:
	Room1_C2(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room1_C2();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room1_Bin2 };
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
