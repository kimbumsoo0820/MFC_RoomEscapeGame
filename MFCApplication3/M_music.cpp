// M_music.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "M_music.h"
#include "afxdialogex.h"


// M_music ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(M_music, CDialogEx)

M_music::M_music(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Music, pParent)
{

}

M_music::~M_music()
{
}

void M_music::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(M_music, CDialogEx)
	ON_WM_PAINT()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// M_music �޽��� ó�����Դϴ�.


void M_music::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/music.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);

					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL M_music::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(350, 70, 1280, 750);

	SetTimer(1, 3000, NULL);
	b_state = 1;
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void M_music::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if (b_state == 1) {
		score++;
	}

	if (score == 1) {
		CDialogEx::OnOK();
	}
	CDialogEx::OnTimer(nIDEvent);
}
