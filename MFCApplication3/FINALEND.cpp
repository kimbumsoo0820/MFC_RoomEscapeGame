// FINALEND.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "FINALEND.h"
#include "afxdialogex.h"
#include "Room3_C_Home.h"
#include "Room3_C_Home.h"
#include "Room3_C_Home.h"


// FINALEND ��ȭ �����Դϴ�.

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


// FINALEND �޽��� ó�����Դϴ�.


void FINALEND::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/FINALEND.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
	
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL FINALEND::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(213, 65, 1500, 900);
	((Room3_C_Home *)GetParent())->point = 5;
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
