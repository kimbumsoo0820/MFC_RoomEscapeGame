#pragma once


// Explain ��ȭ �����Դϴ�.

class Explain : public CDialogEx
{
	DECLARE_DYNAMIC(Explain)

public:
	Explain(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Explain();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = M_explain };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	CImage image1;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
};
