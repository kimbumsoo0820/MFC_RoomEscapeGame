// Room1_C5_h2.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C5_h2.h"
#include "afxdialogex.h"


// Room1_C5_h2 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room1_C5_h2, CDialogEx)

Room1_C5_h2::Room1_C5_h2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin5_hint, pParent)
{

}

Room1_C5_h2::~Room1_C5_h2()
{
}

void Room1_C5_h2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room1_C5_h2, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Room1_C5_h2 �޽��� ó�����Դϴ�.


void Room1_C5_h2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_1_5_hint.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room1_C5_h2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 800, 500);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
