// Room3_C5_h2.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C5_h2.h"
#include "afxdialogex.h"


// Room3_C5_h2 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room3_C5_h2, CDialogEx)

Room3_C5_h2::Room3_C5_h2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin5_hint, pParent)
{

}

Room3_C5_h2::~Room3_C5_h2()
{
}

void Room3_C5_h2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room3_C5_h2, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room3_C5_h2::OnBnClickedOk)
END_MESSAGE_MAP()


// Room3_C5_h2 메시지 처리기입니다.


void Room3_C5_h2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/solution_3_5_hint.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room3_C5_h2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(580, 250, 1000, 600);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room3_C5_h2::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}
