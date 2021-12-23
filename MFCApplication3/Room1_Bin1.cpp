// Room1_Bin1.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Room1_Bin1.h"
#include "afxdialogex.h"


// Room1_Bin1 대화 상자입니다.

IMPLEMENT_DYNAMIC(Room1_Bin1, CDialogEx)

Room1_Bin1::Room1_Bin1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Bin1, pParent)
{

}

Room1_Bin1::~Room1_Bin1()
{
}

void Room1_Bin1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Room1_Bin1, CDialogEx)
END_MESSAGE_MAP()


// Room1_Bin1 메시지 처리기입니다.
