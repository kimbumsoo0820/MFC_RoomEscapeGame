// C_Ghoast.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "C_Ghoast.h"
#include "afxdialogex.h"


// C_Ghoast ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(C_Ghoast, CDialogEx)

C_Ghoast::C_Ghoast(CWnd* pParent /*=NULL*/)
	: CDialogEx(Ghoast, pParent)
{

}

C_Ghoast::~C_Ghoast()
{
}

void C_Ghoast::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(C_Ghoast, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &C_Ghoast::OnBnClickedOk)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// C_Ghoast �޽��� ó�����Դϴ�.


void C_Ghoast::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/ghoast.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL C_Ghoast::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	MoveWindow(700, 30, 700, 995);
	SetTimer(1, 250, NULL);
	b_state = 1;

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void C_Ghoast::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	
}


void C_Ghoast::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if (b_state == 1) {
		score++;
	}

	if (score == 1) {
		CDialogEx::OnOK();
	}
	CDialogEx::OnTimer(nIDEvent);
}
