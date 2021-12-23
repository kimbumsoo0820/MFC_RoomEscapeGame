// Room1_C4_h1.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C4_h1.h"
#include "afxdialogex.h"
#include "C_Ghoast.h"


// Room1_C4_h1 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room1_C4_h1, CDialogEx)

Room1_C4_h1::Room1_C4_h1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin4_hint, pParent)
{

}

Room1_C4_h1::~Room1_C4_h1()
{
}

void Room1_C4_h1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room1_C4_h1, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room1_C4_h1::OnBnClickedOk)
END_MESSAGE_MAP()


// Room1_C4_h1 메시지 처리기입니다.


void Room1_C4_h1::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/solution_1_4_hint.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room1_C4_h1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.



	MoveWindow(580, 250, 800, 500);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room1_C4_h1::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}
