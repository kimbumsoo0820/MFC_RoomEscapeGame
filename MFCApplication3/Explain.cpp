// Explain.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Explain.h"
#include "afxdialogex.h"
#include "M_music.h"


// Explain 대화 상자입니다.

IMPLEMENT_DYNAMIC(Explain, CDialogEx)

Explain::Explain(CWnd* pParent /*=NULL*/)
	: CDialogEx(M_explain, pParent)
{

}

Explain::~Explain()
{
}

void Explain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Explain, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Explain 메시지 처리기입니다.


void Explain::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	image1.Load(_T("./res/Explain.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL Explain::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	MoveWindow(350, 70, 1280, 750);

	M_music M_music;
	M_music.DoModal();
	M_music.DestroyWindow();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}
