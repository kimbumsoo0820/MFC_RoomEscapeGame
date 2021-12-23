// Room3_C6.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C6.h"
#include "afxdialogex.h"
#include "Room3_C4.h"
#include "Room3_C5.h"
#include "Room3_C6_Check1.h"
#include "Room3_C6_Check2.h"




// Room3_C6 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room3_C6, CDialogEx)

Room3_C6::Room3_C6(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin6, pParent)
{

}

Room3_C6::~Room3_C6()
{
}

void Room3_C6::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room3_C6, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room3_C6::OnBnClickedOk)
END_MESSAGE_MAP()


// Room3_C6 �޽��� ó�����Դϴ�.


void Room3_C6::OnPaint()
{

	CPaintDC dc(this);

	image1.Load(_T("./res/solution_3_6_hint0.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
	
	
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room3_C6::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	
	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	
	if (check == 1) {
		Room3_C6_Check1 Room3_C6_Check1;
		Room3_C6_Check1.DoModal();
		Room3_C6_Check1.DestroyWindow();
	}
	else if (check == 2) {
		Room3_C6_Check2 Room3_C6_Check2;
		Room3_C6_Check2.DoModal();
		Room3_C6_Check2.DestroyWindow();
	}

	MoveWindow(580, 250, 900, 600);
	



	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room3_C6::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
}
