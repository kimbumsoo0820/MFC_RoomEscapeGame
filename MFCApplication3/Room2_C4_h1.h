#pragma once


// Room2_C4_h1 ��ȭ �����Դϴ�.

class Room2_C4_h1 : public CDialogEx
{
	DECLARE_DYNAMIC(Room2_C4_h1)

public:
	Room2_C4_h1(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room2_C4_h1();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room2_Bin4_hint };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
};
