// TheEnd2.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "TheEnd2.h"
#include "afxdialogex.h"
#include "TheEnd3.h"

// TheEnd2 대화 상자입니다.

IMPLEMENT_DYNAMIC(TheEnd2, CDialogEx)

TheEnd2::TheEnd2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_END2, pParent)
{

}

TheEnd2::~TheEnd2()
{
}

void TheEnd2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TheEnd2, CDialogEx)
	ON_WM_PAINT()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// TheEnd2 메시지 처리기입니다.


void TheEnd2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/end2.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL TheEnd2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(213, 65, 1500, 900);
	SetTimer(1, 3000, NULL);
	b_state++;
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void TheEnd2::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	if (b_state == 1) {
		score++;
	}

	if (score == 1) {
		CDialogEx::OnOK();
		TheEnd3 TheEnd3;
		TheEnd3.DoModal();
		TheEnd3.DestroyWindow();
	}

	CDialogEx::OnTimer(nIDEvent);
}
