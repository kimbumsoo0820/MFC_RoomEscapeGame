// C_Ghoast.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "C_Ghoast.h"
#include "afxdialogex.h"


// C_Ghoast 대화 상자입니다.

IMPLEMENT_DYNAMIC(C_Ghoast, CDialogEx)

C_Ghoast::C_Ghoast(CWnd* pParent /*=NULL*/)
	: CDialogEx(Ghoast, pParent)
{

}

C_Ghoast::~C_Ghoast()
{
}

void C_Ghoast::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(C_Ghoast, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &C_Ghoast::OnBnClickedOk)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// C_Ghoast 메시지 처리기입니다.


void C_Ghoast::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/ghoast.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL C_Ghoast::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	MoveWindow(700, 30, 700, 995);
	SetTimer(1, 250, NULL);
	b_state = 1;

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void C_Ghoast::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
}


void C_Ghoast::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	if (b_state == 1) {
		score++;
	}

	if (score == 1) {
		CDialogEx::OnOK();
	}
	CDialogEx::OnTimer(nIDEvent);
}
