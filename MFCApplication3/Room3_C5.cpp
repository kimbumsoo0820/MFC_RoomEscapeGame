// Room3_C5.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C5.h"
#include "afxdialogex.h"
#include "M_Nop2.h"
#include "Room3_C5_h2.h"
#include "Room3_C6.h"
#include "Room3_C_Home.h"
int f;


// Room3_C5 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room3_C5, CDialogEx)

Room3_C5::Room3_C5(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin5, pParent)
{

}

Room3_C5::~Room3_C5()
{
}

void Room3_C5::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, combo_alphabet1);
	DDX_Control(pDX, IDC_COMBO2, combo_alphabet2);
	DDX_Control(pDX, IDC_COMBO3, combo_alphabet3);
	DDX_Control(pDX, IDC_COMBO4, combo_alphabet4);
	DDX_Control(pDX, IDC_COMBO5, combo_alphabet5);
}


BEGIN_MESSAGE_MAP(Room3_C5, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room3_C5::OnBnClickedOk)
END_MESSAGE_MAP()


// Room3_C5 �޽��� ó�����Դϴ�.


void Room3_C5::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_3_5.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room3_C5::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(580, 250, 915, 640);

	if (f == 1) {
		CDialogEx::OnOK();
		Room3_C5_h2 Room3_C5_h2;
		Room3_C5_h2.DoModal();
		Room3_C5_h2.DestroyWindow();
	}
	CString alphabet;

	for (int i = 97; i < 123; i++) {
		alphabet.Format(_T("%c"), i);
		combo_alphabet1.AddString(alphabet);
		combo_alphabet2.AddString(alphabet);
		combo_alphabet3.AddString(alphabet);
		combo_alphabet4.AddString(alphabet);
		combo_alphabet5.AddString(alphabet);
		

	}

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room3_C5::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CString num1, num2, num3, num4, num5;

	combo_alphabet1.GetLBText(combo_alphabet1.GetCurSel(), num1);
	combo_alphabet2.GetLBText(combo_alphabet2.GetCurSel(), num2);
	combo_alphabet3.GetLBText(combo_alphabet3.GetCurSel(), num3);
	combo_alphabet4.GetLBText(combo_alphabet4.GetCurSel(), num4);
	combo_alphabet5.GetLBText(combo_alphabet5.GetCurSel(), num5);
	


	if (num1 == "o" && num2 == "c" && num3 == "e" && num4 == "a" && num5 == "n") {
		f = 1;
		((Room3_C_Home *)GetParent())->point = 2;
	}
	else {
		f = 2;
	}
	if (f == 1) {
		CDialogEx::OnOK();
		Room3_C5_h2 Room3_C5_h2;
		Room3_C5_h2.DoModal();
		Room3_C5_h2.DestroyWindow();
	}
	else {

		M_Nop2 M_Nop2;
		M_Nop2.DoModal();
		M_Nop2.DestroyWindow();


	}
}
