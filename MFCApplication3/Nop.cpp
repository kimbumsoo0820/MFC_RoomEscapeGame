// Nop.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Nop.h"
#include "afxdialogex.h"


// Nop ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Nop, CDialogEx)

Nop::Nop(CWnd* pParent /*=NULL*/)
	: CDialogEx(NOP, pParent)
{

}

Nop::~Nop()
{
}

void Nop::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Nop, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Nop �޽��� ó�����Դϴ�.


void Nop::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.

	image1.Load(_T("./res/wrong2.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Nop::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	MoveWindow(250, 70, 1280, 850);
	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
