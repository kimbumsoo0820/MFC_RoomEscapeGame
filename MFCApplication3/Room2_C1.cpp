// Room2_C1.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room2_C1.h"
#include "afxdialogex.h"
#include "Room2_C1.h" // room2_bin1
#include "Room2_C2.h"
#include "Room2_C3.h"
#include "Room2_C4.h"
#include "Room2_C5.h"
#include "Room2_C6.h"
#include "MFCApplication3Dlg.h"
#pragma comment(lib, "winmm")
#include <mmsystem.h>

// Room2_C1 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room2_C1, CDialogEx)

Room2_C1::Room2_C1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Room2_Bin1, pParent)
{

}

Room2_C1::~Room2_C1()
{
}

void Room2_C1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, test);
	DDX_Control(pDX, IDC_BUTTON2, test2);
	DDX_Control(pDX, IDC_BUTTON3, test3);
	DDX_Control(pDX, IDC_BUTTON4, test4);
	DDX_Control(pDX, IDC_BUTTON5, test5);
	DDX_Control(pDX, IDC_BUTTON6, test6);
}


BEGIN_MESSAGE_MAP(Room2_C1, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &Room2_C1::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Room2_C1::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Room2_C1::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Room2_C1::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Room2_C1::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Room2_C1::OnBnClickedButton6)
END_MESSAGE_MAP()


// Room2_C1 메시지 처리기입니다.


void Room2_C1::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/2.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Room2_C1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(213, 65, 1500, 900);

	CString szSoundPath = (_T("./res/Room2_sad.wav"));

	PlaySound(szSoundPath, AfxGetInstanceHandle(), SND_ASYNC | SND_LOOP); // 무한

	test.LoadBitmaps(IDB_room2_1, NULL, NULL, NULL);
	test.SizeToContent();

	test2.LoadBitmaps(IDB_room2_2, NULL, NULL, NULL);
	test2.SizeToContent();

	test3.LoadBitmaps(IDB_room2_3, NULL, NULL, NULL);
	test3.SizeToContent();

	test4.LoadBitmaps(IDB_room2_4, NULL, NULL, NULL);
	test4.SizeToContent();

	test5.LoadBitmaps(IDB_room2_5, NULL, NULL, NULL);
	test5.SizeToContent();

	test6.LoadBitmaps(IDB_room2_6, NULL, NULL, NULL);
	test6.SizeToContent();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Room2_C1::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

}


void Room2_C1::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Room2_C2 Room2_C2;
	Room2_C2.DoModal();
	Room2_C2.DestroyWindow();
}


void Room2_C1::OnBnClickedButton3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Room2_C3 Room2_C3;
	Room2_C3.DoModal();
	Room2_C3.DestroyWindow();
}


void Room2_C1::OnBnClickedButton4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Room2_C4 Room2_C4;
	Room2_C4.DoModal();
	Room2_C4.DestroyWindow();
}


void Room2_C1::OnBnClickedButton5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Room2_C5 Room2_C5;
	Room2_C5.DoModal();
	Room2_C5.DestroyWindow();
}


void Room2_C1::OnBnClickedButton6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Room2_C6 Room2_C6;
	Room2_C6.DoModal();
	Room2_C6.DestroyWindow();
}
