// Room2_C3.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room2_C3.h"
#include "afxdialogex.h"


// Room2_C3 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room2_C3, CDialogEx)

Room2_C3::Room2_C3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room2_Bin3, pParent)
{

}

Room2_C3::~Room2_C3()
{
}

void Room2_C3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room2_C3, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room2_C3::OnBnClickedOk)
END_MESSAGE_MAP()


// Room2_C3 �޽��� ó�����Դϴ�.


void Room2_C3::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/room2_bin2.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room2_C3::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 800, 500);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room2_C3::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
}
