// Room3_C6_Check2.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C6_Check2.h"
#include "afxdialogex.h"
#include "Room3_C6_h3.h"


// Room3_C6_Check2 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room3_C6_Check2, CDialogEx)

Room3_C6_Check2::Room3_C6_Check2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin6_C2, pParent)
{

}

Room3_C6_Check2::~Room3_C6_Check2()
{
}

void Room3_C6_Check2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room3_C6_Check2, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room3_C6_Check2::OnBnClickedOk)
END_MESSAGE_MAP()


// Room3_C6_Check2 �޽��� ó�����Դϴ�.


void Room3_C6_Check2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_3_6_hint2.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room3_C6_Check2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 900, 600);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room3_C6_Check2::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
	Room3_C6_h3 Room3_C6_h3;
	Room3_C6_h3.DoModal();
	
	
}
