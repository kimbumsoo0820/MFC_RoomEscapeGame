// Room1_C4_h1.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C4_h1.h"
#include "afxdialogex.h"
#include "C_Ghoast.h"


// Room1_C4_h1 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room1_C4_h1, CDialogEx)

Room1_C4_h1::Room1_C4_h1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin4_hint, pParent)
{

}

Room1_C4_h1::~Room1_C4_h1()
{
}

void Room1_C4_h1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room1_C4_h1, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room1_C4_h1::OnBnClickedOk)
END_MESSAGE_MAP()


// Room1_C4_h1 �޽��� ó�����Դϴ�.


void Room1_C4_h1::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_1_4_hint.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room1_C4_h1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.



	MoveWindow(580, 250, 800, 500);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room1_C4_h1::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
}
