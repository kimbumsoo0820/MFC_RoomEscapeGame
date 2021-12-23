// Room1_C6_h3.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_C6_h3.h"
#include "afxdialogex.h"
#include "Room2_C1.h"
#include "MFCApplication3Dlg.h"






// Room1_C6_h3 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room1_C6_h3, CDialogEx)

Room1_C6_h3::Room1_C6_h3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room1_Bin6_hint, pParent)
{

}

Room1_C6_h3::~Room1_C6_h3()
{
}

void Room1_C6_h3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room1_C6_h3, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Room1_C6_h3::OnBnClickedOk)
END_MESSAGE_MAP()


// Room1_C6_h3 메시지 처리기입니다.


void Room1_C6_h3::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/Room1_finish.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room1_C6_h3::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(580, 250, 800, 500);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room1_C6_h3::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();

	Room2_C1 Room2_C1;
	Room2_C1.DoModal();
	Room2_C1.DestroyWindow();


	

}
