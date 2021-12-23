// Room3_C6_h3.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C6_h3.h"
#include "afxdialogex.h"
#include "M_Nop2.h"
#include "TheEnd.h"

int ff;
// Room3_C6_h3 대화 상자입니다.

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


// Room3_C6_h3 메시지 처리기입니다.


void Room3_C6_h3::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/help.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room3_C6_h3::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
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
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
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
