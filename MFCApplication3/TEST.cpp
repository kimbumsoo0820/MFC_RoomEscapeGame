// TEST.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "TEST.h"
#include "afxdialogex.h"


// TEST ��ȭ �����Դϴ�.

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


// TEST �޽��� ó�����Դϴ�.


void TEST::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
}
