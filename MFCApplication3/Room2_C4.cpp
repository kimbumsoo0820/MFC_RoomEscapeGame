// Room2_C4.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room2_C4.h"
#include "afxdialogex.h"
#include "M_Nop2.h"
#include "Room2_C4_h1.h"

int point1=0, point2=0, point3=0, point4=0, point5=0, point6=0;
int c;
// Room2_C4 대화 상자입니다.

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


// Room2_C4 메시지 처리기입니다.


void Room2_C4::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/solution_2_4.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room2_C4::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(580, 150, 800, 800);
	if (c == 1) {
		CDialogEx::OnOK();
		Room2_C4_h1 Room2_C4_h1;
		Room2_C4_h1.DoModal();
		Room2_C4_h1.DestroyWindow();
	}


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room2_C4::OnBnClickedCheck1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	point4++;
	
}


void Room2_C4::OnBnClickedCheck2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	point1++;
	
}


void Room2_C4::OnBnClickedCheck3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	point5++;
	
}


void Room2_C4::OnBnClickedCheck4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	point2++;

}


void Room2_C4::OnBnClickedCheck5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	point6++;
	
}


void Room2_C4::OnBnClickedCheck6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	point3++;
	
}


void Room2_C4::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
