// Room3_C4.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C4.h"
#include "afxdialogex.h"
#include "Room3_C4_h1.h"
#include "M_Nop2.h"
#include "Room3_C6.h"
#include "Room3_C_Home.h"

int e;


// Room3_C4 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room3_C4, CDialogEx)

Room3_C4::Room3_C4(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin4, pParent)
{

}

Room3_C4::~Room3_C4()
{
}

void Room3_C4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, combo_alphabet1);
	DDX_Control(pDX, IDC_COMBO2, combo_alphabet2);
	DDX_Control(pDX, IDC_COMBO3, combo_alphabet3);
	DDX_Control(pDX, IDC_COMBO4, combo_alphabet4);
	DDX_Control(pDX, IDC_COMBO5, combo_alphabet5);
	DDX_Control(pDX, IDC_COMBO6, combo_alphabet6);
}


BEGIN_MESSAGE_MAP(Room3_C4, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room3_C4::OnBnClickedOk)
END_MESSAGE_MAP()


// Room3_C4 �޽��� ó�����Դϴ�.


void Room3_C4::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_3_4.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room3_C4::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 915, 640);
	if (e == 1) {
		CDialogEx::OnOK();
		Room3_C4_h1 Room3_C4_h1;
		Room3_C4_h1.DoModal();
		Room3_C4_h1.DestroyWindow();
	}
	CString alphabet;

	for (int i = 97; i < 123; i++) {
		alphabet.Format(_T("%c"), i);
		combo_alphabet1.AddString(alphabet);
		combo_alphabet2.AddString(alphabet);
		combo_alphabet3.AddString(alphabet);
		combo_alphabet4.AddString(alphabet);
		combo_alphabet5.AddString(alphabet);
		combo_alphabet6.AddString(alphabet);

	}
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room3_C4::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CString num1, num2, num3, num4, num5, num6;

	combo_alphabet1.GetLBText(combo_alphabet1.GetCurSel(), num1);
	combo_alphabet2.GetLBText(combo_alphabet2.GetCurSel(), num2);
	combo_alphabet3.GetLBText(combo_alphabet3.GetCurSel(), num3);
	combo_alphabet4.GetLBText(combo_alphabet4.GetCurSel(), num4);
	combo_alphabet5.GetLBText(combo_alphabet5.GetCurSel(), num5);
	combo_alphabet6.GetLBText(combo_alphabet6.GetCurSel(), num6);
	

	if (num1 == "f" && num2 == "a" && num3 == "m" && num4 == "i" && num5 == "l" && num6 == "y" ) {
		e = 1;
		((Room3_C_Home *)GetParent())->point = 1;
	}
	else {
		e = 2;
	}
	if (e == 1) {
		CDialogEx::OnOK();
		Room3_C4_h1 Room3_C4_h1;
		Room3_C4_h1.DoModal();
		Room3_C4_h1.DestroyWindow();
	}
	else {

		M_Nop2 M_Nop2;
		M_Nop2.DoModal();
		M_Nop2.DestroyWindow();


	}
}
