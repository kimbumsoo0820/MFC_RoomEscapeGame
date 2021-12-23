// Room3_C_Home.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room3_C_Home.h"
#include "afxdialogex.h"
#include "Room3_C_info.h"
#include "Room3_C1.h"
#include "Room3_C2.h"
#include "Room3_C3.h"
#include "Room3_C4.h"
#include "Room3_C5.h"
#include "Room3_C6.h"
#include "Room3_C6_Check1.h"
#include "Room3_C6_Check2.h"
#include "TheEnd.h"
#pragma comment(lib, "winmm")
#include <mmsystem.h>

int point = 0;

// Room3_C_Home 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room3_C_Home, CDialogEx)

Room3_C_Home::Room3_C_Home(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room3_Bin_home, pParent)
{

}

Room3_C_Home::~Room3_C_Home()
{
}

void Room3_C_Home::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, test);
	DDX_Control(pDX, IDC_BUTTON2, test2);
	DDX_Control(pDX, IDC_BUTTON3, test3);
	DDX_Control(pDX, IDC_BUTTON4, test4);
	DDX_Control(pDX, IDC_BUTTON5, test5);
	DDX_Control(pDX, IDC_BUTTON6, test6);
}


BEGIN_MESSAGE_MAP(Room3_C_Home, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &Room3_C_Home::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Room3_C_Home::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Room3_C_Home::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Room3_C_Home::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Room3_C_Home::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Room3_C_Home::OnBnClickedButton6)
END_MESSAGE_MAP()


// Room3_C_Home 메시지 처리기입니다.


void Room3_C_Home::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/3.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);

	Room3_C_info Room3_C_info;
	Room3_C_info.DoModal();
	Room3_C_info.DestroyWindow();
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room3_C_Home::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(213, 65, 1500, 900);
	CString szSoundPath = (_T("./res/Room3_sad.wav"));

	PlaySound(szSoundPath, AfxGetInstanceHandle(), SND_ASYNC | SND_LOOP); // 무한

	test.LoadBitmaps(IDB_room3_1, NULL, NULL, NULL);
	test.SizeToContent();

	test2.LoadBitmaps(IDB_room3_2, NULL, NULL, NULL);
	test2.SizeToContent();

	test3.LoadBitmaps(IDB_room3_3, NULL, NULL, NULL);
	test3.SizeToContent();

	test4.LoadBitmaps(IDB_room3_4, NULL, NULL, NULL);
	test4.SizeToContent();

	test5.LoadBitmaps(IDB_room3_5, NULL, NULL, NULL);
	test5.SizeToContent();

	test6.LoadBitmaps(IDB_room3_6, NULL, NULL, NULL);
	test6.SizeToContent();

	if (point == 5) {
		PlaySound(NULL, AfxGetInstanceHandle(), NULL); // 정지

	}


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.

}


void Room3_C_Home::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	Room3_C1 Room3_C1;
	Room3_C1.DoModal();
	Room3_C1.DestroyWindow();
}


void Room3_C_Home::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Room3_C2 Room3_C2;
	Room3_C2.DoModal();
	Room3_C2.DestroyWindow();
}


void Room3_C_Home::OnBnClickedButton3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Room3_C3 Room3_C3;
	Room3_C3.DoModal();
	Room3_C3.DestroyWindow();
}


void Room3_C_Home::OnBnClickedButton4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Room3_C4 Room3_C4;
	Room3_C4.DoModal();
	Room3_C4.DestroyWindow();
}


void Room3_C_Home::OnBnClickedButton5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Room3_C5 Room3_C5;
	Room3_C5.DoModal();
	Room3_C5.DestroyWindow();
}


void Room3_C_Home::OnBnClickedButton6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point == 1) {
		Room3_C6_Check1 Room3_C6_Check1;
		Room3_C6_Check1.DoModal();
		Room3_C6_Check1.DestroyWindow();
	}

	if (point == 2) {
		Room3_C6_Check2 Room3_C6_Check2;
		Room3_C6_Check2.DoModal();
		Room3_C6_Check2.DestroyWindow();
	}


	if (point == 0) {
		Room3_C6 Room3_C6;
		Room3_C6.DoModal();
		Room3_C6.DestroyWindow();
	}

	
	
}
