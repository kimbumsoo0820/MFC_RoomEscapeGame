// Room3_C6_Check1.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C6_Check1.h"
#include "afxdialogex.h"


// Room3_C6_Check1 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room3_C6_Check1, CDialogEx)

Room3_C6_Check1::Room3_C6_Check1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin6_C1, pParent)
{

}

Room3_C6_Check1::~Room3_C6_Check1()
{
}

void Room3_C6_Check1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room3_C6_Check1, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Room3_C6_Check1 �޽��� ó�����Դϴ�.


void Room3_C6_Check1::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_3_6_hint1.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room3_C6_Check1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 900, 600);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
