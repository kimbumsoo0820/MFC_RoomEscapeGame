// Room3_C1.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C1.h"
#include "afxdialogex.h"


// Room3_C1 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room3_C1, CDialogEx)

Room3_C1::Room3_C1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin1, pParent)
{

}

Room3_C1::~Room3_C1()
{
}

void Room3_C1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room3_C1, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room3_C1::OnBnClickedOk)
END_MESSAGE_MAP()


// Room3_C1 �޽��� ó�����Դϴ�.


void Room3_C1::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/Room3_bin1.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room3_C1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 915, 650);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room3_C1::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
}
