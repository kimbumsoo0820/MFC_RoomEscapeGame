// M_Nop2.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "M_Nop2.h"
#include "afxdialogex.h"


// M_Nop2 대화 상자입니다.

IMPLEMENT_DYNAMIC(M_Nop2, CDialogEx)

M_Nop2::M_Nop2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_NOP2, pParent)
{

}

M_Nop2::~M_Nop2()
{
}

void M_Nop2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(M_Nop2, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// M_Nop2 메시지 처리기입니다.


void M_Nop2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/Nop2.png"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL M_Nop2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(690, 250, 480, 670);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}
