// Room2_C2.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room2_C2.h"
#include "afxdialogex.h"


// Room2_C2 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room2_C2, CDialogEx)

Room2_C2::Room2_C2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room2_Bin2, pParent)
{

}

Room2_C2::~Room2_C2()
{
}

void Room2_C2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room2_C2, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room2_C2::OnBnClickedOk)
END_MESSAGE_MAP()


// Room2_C2 �޽��� ó�����Դϴ�.


void Room2_C2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/room2_bin1.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room2_C2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 800, 500);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room2_C2::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	
	CDialogEx::OnOK();
}
