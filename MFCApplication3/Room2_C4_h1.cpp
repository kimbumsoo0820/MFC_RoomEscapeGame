// Room2_C4_h1.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room2_C4_h1.h"
#include "afxdialogex.h"


// Room2_C4_h1 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room2_C4_h1, CDialogEx)

Room2_C4_h1::Room2_C4_h1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room2_Bin4_hint, pParent)
{

}

Room2_C4_h1::~Room2_C4_h1()
{
}

void Room2_C4_h1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room2_C4_h1, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Room2_C4_h1 �޽��� ó�����Դϴ�.


void Room2_C4_h1::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_2_4_hint.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room2_C4_h1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(213, 65, 1280, 850);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
