// Room2_C4.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room2_C4.h"
#include "afxdialogex.h"
#include "M_Nop2.h"
#include "Room2_C4_h1.h"

int point1=0, point2=0, point3=0, point4=0, point5=0, point6=0;
int c;
// Room2_C4 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room2_C4, CDialogEx)

Room2_C4::Room2_C4(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room2_Bin4, pParent)
{

}

Room2_C4::~Room2_C4()
{
}

void Room2_C4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room2_C4, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_CHECK1, &Room2_C4::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_CHECK2, &Room2_C4::OnBnClickedCheck2)
	ON_BN_CLICKED(IDC_CHECK3, &Room2_C4::OnBnClickedCheck3)
	ON_BN_CLICKED(IDC_CHECK4, &Room2_C4::OnBnClickedCheck4)
	ON_BN_CLICKED(IDC_CHECK5, &Room2_C4::OnBnClickedCheck5)
	ON_BN_CLICKED(IDC_CHECK6, &Room2_C4::OnBnClickedCheck6)
	ON_BN_CLICKED(IDOK, &Room2_C4::OnBnClickedOk)
END_MESSAGE_MAP()


// Room2_C4 �޽��� ó�����Դϴ�.


void Room2_C4::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_2_4.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room2_C4::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 150, 800, 800);
	if (c == 1) {
		CDialogEx::OnOK();
		Room2_C4_h1 Room2_C4_h1;
		Room2_C4_h1.DoModal();
		Room2_C4_h1.DestroyWindow();
	}


	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room2_C4::OnBnClickedCheck1()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	point4++;
	
}


void Room2_C4::OnBnClickedCheck2()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	point1++;
	
}


void Room2_C4::OnBnClickedCheck3()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	point5++;
	
}


void Room2_C4::OnBnClickedCheck4()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	point2++;

}


void Room2_C4::OnBnClickedCheck5()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	point6++;
	
}


void Room2_C4::OnBnClickedCheck6()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	point3++;
	
}


void Room2_C4::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if ( point1%2==1 && point2 % 2==1 && point3 % 2==1 && point4 % 2 == 0 && point5 % 2 == 0 && point6 % 2 == 0) {
		
		CDialogEx::OnOK();
		Room2_C4_h1 Room2_C4_h1;
		Room2_C4_h1.DoModal();
		Room2_C4_h1.DestroyWindow();
		c = 1;

	}
	else {

		M_Nop2 M_Nop2;
		M_Nop2.DoModal();
		M_Nop2.DestroyWindow();
	
	}
	
}
