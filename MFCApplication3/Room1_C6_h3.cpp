// Room1_C6_h3.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C6_h3.h"
#include "afxdialogex.h"
#include "Room2_C1.h"
#include "MFCApplication3Dlg.h"






// Room1_C6_h3 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room1_C6_h3, CDialogEx)

Room1_C6_h3::Room1_C6_h3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin6_hint, pParent)
{

}

Room1_C6_h3::~Room1_C6_h3()
{
}

void Room1_C6_h3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room1_C6_h3, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room1_C6_h3::OnBnClickedOk)
END_MESSAGE_MAP()


// Room1_C6_h3 �޽��� ó�����Դϴ�.


void Room1_C6_h3::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/Room1_finish.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room1_C6_h3::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 800, 500);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room1_C6_h3::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();

	Room2_C1 Room2_C1;
	Room2_C1.DoModal();
	Room2_C1.DestroyWindow();


	

}
