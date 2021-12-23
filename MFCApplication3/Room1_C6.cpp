// Room1_C6.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C6.h"
#include "afxdialogex.h"
#include "Room1_C6_h3.h"
#include "Nop.h"



// Room1_C6 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Room1_C6, CDialogEx)

Room1_C6::Room1_C6(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin6, pParent)
{

}

Room1_C6::~Room1_C6()
{
}

void Room1_C6::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, combo_alphabet1);
	DDX_Control(pDX, IDC_COMBO2, combo_alphabet2);
	DDX_Control(pDX, IDC_COMBO3, combo_alphabet3);
}


BEGIN_MESSAGE_MAP(Room1_C6, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room1_C6::OnBnClickedOk)
END_MESSAGE_MAP()


// Room1_C6 �޽��� ó�����Դϴ�.


void Room1_C6::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/solution_1_6.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Room1_C6::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	

	MoveWindow(580, 250, 800, 500);
	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	CString alphabet;

	for (int i = 97; i < 120; i++) {
		alphabet.Format(_T("%c"), i);
		combo_alphabet1.AddString(alphabet);
		combo_alphabet3.AddString(alphabet);
	}
	for (int j = 0; j < 11; j++) {
		alphabet.Format(_T("%d"), j);
		combo_alphabet2.AddString(alphabet);
	}


	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Room1_C6::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CString num1,num2,num3;
	
	int b;
	combo_alphabet1.GetLBText(combo_alphabet1.GetCurSel(), num1);
	combo_alphabet2.GetLBText(combo_alphabet2.GetCurSel(), num2);
	combo_alphabet3.GetLBText(combo_alphabet3.GetCurSel(), num3);

	if (num1 == "h" && num2 == "2" && num3 == "o" ) {
		b = 1;
	}
	else {
		b = 2;
	}
	if (b == 1) {
		CDialogEx::OnOK();
		Room1_C6_h3 Room1_C6_h3;
		Room1_C6_h3.DoModal();
		Room1_C6_h3.DestroyWindow();
	}
	else {

		Nop Nop;
		Nop.DoModal();
		Nop.DestroyWindow();


	}
	
}
