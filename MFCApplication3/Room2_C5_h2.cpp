// Room2_C5_h2.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room2_C5_h2.h"
#include "afxdialogex.h"


// Room2_C5_h2 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room2_C5_h2, CDialogEx)

Room2_C5_h2::Room2_C5_h2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room2_Bin5_hint, pParent)
{

}

Room2_C5_h2::~Room2_C5_h2()
{
}

void Room2_C5_h2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room2_C5_h2, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Room2_C5_h2 �޽��� ó�����Դϴ�.


void Room2_C5_h2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_2_5_hint.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room2_C5_h2::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	MoveWindow(580, 250, 800, 500);
	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
