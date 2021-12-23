// Room3_C6.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C6.h"
#include "afxdialogex.h"
#include "Room3_C4.h"
#include "Room3_C5.h"
#include "Room3_C6_Check1.h"
#include "Room3_C6_Check2.h"




// Room3_C6 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room3_C6, CDialogEx)

Room3_C6::Room3_C6(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin6, pParent)
{

}

Room3_C6::~Room3_C6()
{
}

void Room3_C6::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room3_C6, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room3_C6::OnBnClickedOk)
END_MESSAGE_MAP()


// Room3_C6 메시지 처리기입니다.


void Room3_C6::OnPaint()
{

	CPaintDC dc(this);

	image1.Load(_T("./res/solution_3_6_hint0.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
	
	
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room3_C6::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	
	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	
	if (check == 1) {
		Room3_C6_Check1 Room3_C6_Check1;
		Room3_C6_Check1.DoModal();
		Room3_C6_Check1.DestroyWindow();
	}
	else if (check == 2) {
		Room3_C6_Check2 Room3_C6_Check2;
		Room3_C6_Check2.DoModal();
		Room3_C6_Check2.DestroyWindow();
	}

	MoveWindow(580, 250, 900, 600);
	



	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room3_C6::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}
