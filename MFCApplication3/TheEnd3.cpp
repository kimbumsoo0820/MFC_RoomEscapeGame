// TheEnd3.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "TheEnd3.h"
#include "afxdialogex.h"
#include "TheEnd4.h"


// TheEnd3 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(TheEnd3, CDialogEx)

TheEnd3::TheEnd3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_END3, pParent)
{

}

TheEnd3::~TheEnd3()
{
}

void TheEnd3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TheEnd3, CDialogEx)
	ON_WM_PAINT()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// TheEnd3 �޽��� ó�����Դϴ�.


void TheEnd3::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/end3.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL TheEnd3::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(213, 65, 1500, 900);
	SetTimer(1, 3000, NULL);
	b_state++;
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void TheEnd3::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if (b_state == 1) {
		score++;
	}

	if (score == 1) {
		CDialogEx::OnOK();
		TheEnd4 TheEnd4;
		TheEnd4.DoModal();
		TheEnd4.DestroyWindow();
	}

	CDialogEx::OnTimer(nIDEvent);
}
