// Room1_C5.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C5.h"
#include "afxdialogex.h"
#include "Room1_C5_h2.h"
#include "Nop.h"

int b;

// Room1_C5 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room1_C5, CDialogEx)

Room1_C5::Room1_C5(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin5, pParent)
{

}

Room1_C5::~Room1_C5()
{
}

void Room1_C5::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, combo_alphabet1);
	DDX_Control(pDX, IDC_COMBO2, combo_alphabet2);
	DDX_Control(pDX, IDC_COMBO3, combo_alphabet3);
	DDX_Control(pDX, IDC_COMBO4, combo_alphabet4);
	DDX_Control(pDX, IDC_COMBO5, combo_alphabet5);
}


BEGIN_MESSAGE_MAP(Room1_C5, CDialogEx)
	ON_WM_PAINT()
	ON_CBN_SELCHANGE(IDC_COMBO5, &Room1_C5::OnCbnSelchangeCombo5)
	ON_BN_CLICKED(IDOK, &Room1_C5::OnBnClickedOk)
END_MESSAGE_MAP()


// Room1_C5 메시지 처리기입니다.


void Room1_C5::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/solution_1_5.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room1_C5::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	MoveWindow(580, 250, 800, 500);
	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	if (b == 1) {
		CDialogEx::OnOK();
		Room1_C5_h2 Room1_C5_h2;
		Room1_C5_h2.DoModal();
		Room1_C5_h2.DestroyWindow();
	}
	CString alphabet;

	for (int i = 97; i < 120; i++) {
		alphabet.Format(_T("%c"), i);
		combo_alphabet1.AddString(alphabet);
		combo_alphabet2.AddString(alphabet);
		combo_alphabet3.AddString(alphabet);
		combo_alphabet4.AddString(alphabet);
		combo_alphabet5.AddString(alphabet);
	}
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room1_C5::OnCbnSelchangeCombo5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void Room1_C5::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString num1, num2, num3, num4, num5;

	combo_alphabet1.GetLBText(combo_alphabet1.GetCurSel(), num1);
	combo_alphabet2.GetLBText(combo_alphabet2.GetCurSel(), num2);
	combo_alphabet3.GetLBText(combo_alphabet3.GetCurSel(), num3);
	combo_alphabet4.GetLBText(combo_alphabet4.GetCurSel(), num4);
	combo_alphabet5.GetLBText(combo_alphabet5.GetCurSel(), num5);


	if (num1 == "w" && num2 == "a" && num3 == "t" && num4 == "e" && num5 == "r") {
		b = 1;
	}
	else {
		b = 2;
	}
	if (b == 1) {
		CDialogEx::OnOK();
		Room1_C5_h2 Room1_C5_h2;
		Room1_C5_h2.DoModal();
		Room1_C5_h2.DestroyWindow();
	}
	else {

		Nop Nop;
		Nop.DoModal();
		Nop.DestroyWindow();


	}

	
}
