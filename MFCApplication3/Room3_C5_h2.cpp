// Room3_C5_h2.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C5_h2.h"
#include "afxdialogex.h"


// Room3_C5_h2 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room3_C5_h2, CDialogEx)

Room3_C5_h2::Room3_C5_h2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin5_hint, pParent)
{

}

Room3_C5_h2::~Room3_C5_h2()
{
}

void Room3_C5_h2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room3_C5_h2, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room3_C5_h2::OnBnClickedOk)
END_MESSAGE_MAP()


// Room3_C5_h2 �޽��� ó�����Դϴ�.


void Room3_C5_h2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_3_5_hint.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room3_C5_h2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 1000, 600);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room3_C5_h2::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
}
