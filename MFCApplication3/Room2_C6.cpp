// Room2_C6.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room2_C6.h"
#include "afxdialogex.h"
#include "Room2_C6_h3.h"
#include "M_Nop2.h"


// Room2_C6 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room2_C6, CDialogEx)

Room2_C6::Room2_C6(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room2_Bin6, pParent)
{

}

Room2_C6::~Room2_C6()
{
}

void Room2_C6::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, combo_alphabet1);
	DDX_Control(pDX, IDC_COMBO2, combo_alphabet2);
	DDX_Control(pDX, IDC_COMBO3, combo_alphabet3);
	DDX_Control(pDX, IDC_COMBO4, combo_alphabet4);
}


BEGIN_MESSAGE_MAP(Room2_C6, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room2_C6::OnBnClickedOk)
END_MESSAGE_MAP()


// Room2_C6 메시지 처리기입니다.


void Room2_C6::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/solution_2_6.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room2_C6::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(580, 250, 900, 600);

	CString alphabet;

	for (int i = 0; i < 10; i++) {
		alphabet.Format(_T("%d"), i);
		combo_alphabet1.AddString(alphabet);
		combo_alphabet2.AddString(alphabet);
		combo_alphabet3.AddString(alphabet);
		combo_alphabet4.AddString(alphabet);
		
	}


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room2_C6::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString num1, num2, num3, num4;

	combo_alphabet1.GetLBText(combo_alphabet1.GetCurSel(), num1);
	combo_alphabet2.GetLBText(combo_alphabet2.GetCurSel(), num2);
	combo_alphabet3.GetLBText(combo_alphabet3.GetCurSel(), num3);
	combo_alphabet4.GetLBText(combo_alphabet4.GetCurSel(), num4);
	
	int d;

	if (num1 == "0" && num2 == "8" && num3 == "2" && num4 == "0" ) {
		d = 1;
	}
	else {
		d = 2;
	}
	if (d == 1) {
		CDialogEx::OnOK();
		Room2_C6_h3 Room2_C6_h3;
		Room2_C6_h3.DoModal();
		Room2_C6_h3.DestroyWindow();
	}
	else {

		M_Nop2 M_Nop2;
		M_Nop2.DoModal();
		M_Nop2.DestroyWindow();


	}
}
