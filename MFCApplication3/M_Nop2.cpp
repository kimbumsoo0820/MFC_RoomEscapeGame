// M_Nop2.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "M_Nop2.h"
#include "afxdialogex.h"


// M_Nop2 ��ȭ �����Դϴ�.

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


// M_Nop2 �޽��� ó�����Դϴ�.


void M_Nop2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/Nop2.png"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL M_Nop2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(690, 250, 480, 670);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
