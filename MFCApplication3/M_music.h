#pragma once


// M_music ��ȭ �����Դϴ�.

class M_music : public CDialogEx
{
	DECLARE_DYNAMIC(M_music)

public:
	M_music(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~M_music();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Music };
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
