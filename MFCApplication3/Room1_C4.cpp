// Room1_C4.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C4.h"
#include "afxdialogex.h"
#include"Room1_C4_h1.h"
#include"Nop.h"


int a;

// Room1_C4 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room1_C4, CDialogEx)

Room1_C4::Room1_C4(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin4, pParent)
{

}

Room1_C4::~Room1_C4()
{
}

void Room1_C4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, combo_alphabet1);
	DDX_Control(pDX, IDC_COMBO2, combo_alphabet2);
	DDX_Control(pDX, IDC_COMBO3, combo_alphabet3);
	DDX_Control(pDX, IDC_COMBO4, combo_alphabet4);
}


BEGIN_MESSAGE_MAP(Room1_C4, CDialogEx)
	ON_BN_CLICKED(IDOK, &Room1_C4::OnBnClickedOk)
	ON_WM_PAINT()
	ON_CBN_SELCHANGE(IDC_COMBO1, &Room1_C4::OnCbnSelchangeCombo1)
	ON_CBN_SELCHANGE(IDC_COMBO2, &Room1_C4::OnCbnSelchangeCombo2)
	ON_CBN_SELCHANGE(IDC_COMBO3, &Room1_C4::OnCbnSelchangeCombo3)
	ON_CBN_SELCHANGE(IDC_COMBO4, &Room1_C4::OnCbnSelchangeCombo4)
END_MESSAGE_MAP()


// Room1_C4 메시지 처리기입니다.


void Room1_C4::OnBnClickedOk()
{

	CString num1, num2, num3, num4;
	
	combo_alphabet1.GetLBText(combo_alphabet1.GetCurSel(), num1);
	combo_alphabet2.GetLBText(combo_alphabet2.GetCurSel(), num2);
	combo_alphabet3.GetLBText(combo_alphabet3.GetCurSel(), num3);
	combo_alphabet4.GetLBText(combo_alphabet4.GetCurSel(), num4);

	if (num1 == "a" && num2 == "c" && num3 == "c" && num4 == "i") {
		a = 1;
	}
	else {
		a = 2;
	}
	if (a == 1) {
		CDialogEx::OnOK();
		Room1_C4_h1 Room1_C4_h1;
		Room1_C4_h1.DoModal();
		Room1_C4_h1.DestroyWindow();
	}
	else {
		
		Nop Nop;
		Nop.DoModal();
		Nop.DestroyWindow();

		
	}



	
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.


}


BOOL Room1_C4::OnInitDialog()
{

	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(580, 250, 800, 500);
	if (a == 1) {
		CDialogEx::OnOK();
		Room1_C4_h1 Room1_C4_h1;
		Room1_C4_h1.DoModal();
		Room1_C4_h1.DestroyWindow();
	}
	CString alphabet;

	for (int i = 97; i < 112; i++) {
		alphabet.Format(_T("%c"), i);
		combo_alphabet1.AddString(alphabet);
		combo_alphabet2.AddString(alphabet);
		combo_alphabet3.AddString(alphabet);
		combo_alphabet4.AddString(alphabet);
	}
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room1_C4::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.

	image1.Load(_T("./res/solution_1_4.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);

					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


void Room1_C4::OnCbnSelchangeCombo1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void Room1_C4::OnCbnSelchangeCombo2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void Room1_C4::OnCbnSelchangeCombo3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void Room1_C4::OnCbnSelchangeCombo4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
