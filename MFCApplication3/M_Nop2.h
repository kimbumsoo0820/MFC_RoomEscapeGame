#pragma once


// M_Nop2 ��ȭ �����Դϴ�.

class M_Nop2 : public CDialogEx
{
	DECLARE_DYNAMIC(M_Nop2)

public:
	M_Nop2(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~M_Nop2();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NOP2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
};
