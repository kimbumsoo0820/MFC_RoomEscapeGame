#pragma once


// Room3_C_info ��ȭ �����Դϴ�.

class Room3_C_info : public CDialogEx
{
	DECLARE_DYNAMIC(Room3_C_info)

public:
	Room3_C_info(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Room3_C_info();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Room3_info };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	int b_state, score;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
