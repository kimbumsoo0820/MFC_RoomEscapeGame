// Room3_C_info.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C_info.h"
#include "afxdialogex.h"


// Room3_C_info ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room3_C_info, CDialogEx)

Room3_C_info::Room3_C_info(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_info, pParent)
{

}

Room3_C_info::~Room3_C_info()
{
}

void Room3_C_info::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room3_C_info, CDialogEx)
	ON_WM_PAINT()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// Room3_C_info �޽��� ó�����Դϴ�.


void Room3_C_info::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/Room3_info.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room3_C_info::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 900, 600);

	SetTimer(1, 3000, NULL);
	b_state = 1;

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room3_C_info::OnTimer(UINT_PTR nIDEvent)
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
