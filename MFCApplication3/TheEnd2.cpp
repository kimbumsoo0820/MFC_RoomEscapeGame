// TheEnd2.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "TheEnd2.h"
#include "afxdialogex.h"
#include "TheEnd3.h"

// TheEnd2 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(TheEnd2, CDialogEx)

TheEnd2::TheEnd2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_END2, pParent)
{

}

TheEnd2::~TheEnd2()
{
}

void TheEnd2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TheEnd2, CDialogEx)
	ON_WM_PAINT()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// TheEnd2 �޽��� ó�����Դϴ�.


void TheEnd2::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/end2.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL TheEnd2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(213, 65, 1500, 900);
	SetTimer(1, 3000, NULL);
	b_state++;
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void TheEnd2::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if (b_state == 1) {
		score++;
	}

	if (score == 1) {
		CDialogEx::OnOK();
		TheEnd3 TheEnd3;
		TheEnd3.DoModal();
		TheEnd3.DestroyWindow();
	}

	CDialogEx::OnTimer(nIDEvent);
}
