// Room1_C1.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C1.h"
#include "afxdialogex.h"


// Room1_C1 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room1_C1, CDialogEx)

Room1_C1::Room1_C1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin1, pParent)
{

}

Room1_C1::~Room1_C1()
{
}

void Room1_C1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room1_C1, CDialogEx)
	ON_BN_CLICKED(IDOK, &Room1_C1::OnBnClickedOk)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Room1_C1 �޽��� ó�����Դϴ�.


void Room1_C1::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	


	CDialogEx::OnOK();
}


BOOL Room1_C1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	//@@@@âũ��
	MoveWindow(580, 250, 800, 500);
	


	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room1_C1::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.

	image1.Load(_T("./res/room1_bin1.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);

					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}
