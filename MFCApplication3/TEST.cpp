// TEST.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "TEST.h"
#include "afxdialogex.h"


// TEST 대화 상자입니다.

IMPLEMENT_DYNAMIC(TEST, CDialogEx)

TEST::TEST(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

TEST::~TEST()
{
}

void TEST::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TEST, CDialogEx)
	ON_BN_CLICKED(IDOK, &TEST::OnBnClickedOk)
END_MESSAGE_MAP()


// TEST 메시지 처리기입니다.


void TEST::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}
