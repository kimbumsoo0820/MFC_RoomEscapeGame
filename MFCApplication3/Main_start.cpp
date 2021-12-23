// Main_start.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Main_start.h"
#include "afxdialogex.h"
#include "Explain.h"
#include "Room3_C_Home.h"

// Main_start 대화 상자입니다.

IMPLEMENT_DYNAMIC(Main_start, CDialogEx)

Main_start::Main_start(CWnd* pParent /*=NULL*/)
	: CDialogEx(Main, pParent)
{

}

Main_start::~Main_start()
{
}

void Main_start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Main_start, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Main_start::OnBnClickedOk)
END_MESSAGE_MAP()


// Main_start 메시지 처리기입니다.


void Main_start::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	
	image1.Load(_T("./res/main.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);

					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Main_start::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	MoveWindow(250, 70, 1500, 900);
	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Main_start::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
	Explain Explain;
	Explain.DoModal();
	Explain.DestroyWindow();

}
