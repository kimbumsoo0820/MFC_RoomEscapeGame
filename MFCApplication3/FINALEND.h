#pragma once


// FINALEND ��ȭ �����Դϴ�.

class FINALEND : public CDialogEx
{
	DECLARE_DYNAMIC(FINALEND)

public:
	FINALEND(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~FINALEND();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_THEEND };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
};
