// Room1_C2.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C2.h"
#include "afxdialogex.h"
#include "C_Ghoast.h"


// Room1_C2 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room1_C2, CDialogEx)

Room1_C2::Room1_C2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin2, pParent)
{

}

Room1_C2::~Room1_C2()
{
}

void Room1_C2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room1_C2, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room1_C2::OnBnClickedOk)
END_MESSAGE_MAP()


// Room1_C2 �޽��� ó�����Դϴ�.


void Room1_C2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/room1_bin2.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);

					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room1_C2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	//@@@@âũ��
	MoveWindow(580, 250, 800, 500);
	C_Ghoast C_Ghoast;
	C_Ghoast.DoModal();
	C_Ghoast.DestroyWindow();
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room1_C2::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
}
