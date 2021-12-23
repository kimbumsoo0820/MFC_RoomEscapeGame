// Room3_C6_h3.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C6_h3.h"
#include "afxdialogex.h"
#include "M_Nop2.h"
#include "TheEnd.h"

int ff;
// Room3_C6_h3 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room3_C6_h3, CDialogEx)

Room3_C6_h3::Room3_C6_h3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin6_hint, pParent)
{

}

Room3_C6_h3::~Room3_C6_h3()
{
}

void Room3_C6_h3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, combo_alphabet1);
	DDX_Control(pDX, IDC_COMBO2, combo_alphabet2);
	DDX_Control(pDX, IDC_COMBO3, combo_alphabet3);
	DDX_Control(pDX, IDC_COMBO4, combo_alphabet4);
	DDX_Control(pDX, IDC_COMBO5, combo_alphabet5);
	DDX_Control(pDX, IDC_COMBO6, combo_alphabet6);
}


BEGIN_MESSAGE_MAP(Room3_C6_h3, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room3_C6_h3::OnBnClickedOk)
END_MESSAGE_MAP()


// Room3_C6_h3 �޽��� ó�����Դϴ�.


void Room3_C6_h3::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/help.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room3_C6_h3::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(213, 65, 1500, 900);

	
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


void Room3_C6_h3::OnBnClickedOk()
{
	CString num1, num2, num3, num4, num5, num6;

	combo_alphabet1.GetLBText(combo_alphabet1.GetCurSel(), num1);
	combo_alphabet2.GetLBText(combo_alphabet2.GetCurSel(), num2);
	combo_alphabet3.GetLBText(combo_alphabet3.GetCurSel(), num3);
	combo_alphabet4.GetLBText(combo_alphabet4.GetCurSel(), num4);
	combo_alphabet5.GetLBText(combo_alphabet5.GetCurSel(), num5);
	combo_alphabet6.GetLBText(combo_alphabet6.GetCurSel(), num6);


	if (num1 == "f" && num2 == "a" && num3 == "t" && num4 == "h" && num5 == "e" && num6 == "r") {
		ff = 1;
		
	}
	else {
		ff = 2;
	}
	if (ff == 1) {
		CDialogEx::OnOK();
		TheEnd TheEnd;
		TheEnd.DoModal();
		TheEnd.DestroyWindow();
	}
	else {

		M_Nop2 M_Nop2;
		M_Nop2.DoModal();
		M_Nop2.DestroyWindow();


	}
}
