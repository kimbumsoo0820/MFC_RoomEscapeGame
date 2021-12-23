// FINALEND.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "FINALEND.h"
#include "afxdialogex.h"
#include "Room3_C_Home.h"
#include "Room3_C_Home.h"
#include "Room3_C_Home.h"


// FINALEND 대화 상자입니다.

IMPLEMENT_DYNAMIC(FINALEND, CDialogEx)

FINALEND::FINALEND(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_THEEND, pParent)
{

}

FINALEND::~FINALEND()
{
}

void FINALEND::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(FINALEND, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// FINALEND 메시지 처리기입니다.


void FINALEND::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/FINALEND.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
	
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL FINALEND::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(213, 65, 1500, 900);
	((Room3_C_Home *)GetParent())->point = 5;
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}
