// Room3_C4.cpp : 구현 파일입니다.
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


// Room3_C4 대화 상자입니다.

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


// Room3_C4 메시지 처리기입니다.


void Room3_C4::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/solution_3_4.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room3_C4::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
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
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room3_C4::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
