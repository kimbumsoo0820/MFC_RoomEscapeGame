// TheEnd.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "TheEnd.h"
#include "afxdialogex.h"
#include "TheEnd2.h"


// TheEnd ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(TheEnd, CDialogEx)

TheEnd::TheEnd(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_END, pParent)
{

}

TheEnd::~TheEnd()
{
}

void TheEnd::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TheEnd, CDialogEx)
	ON_WM_PAINT()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// TheEnd �޽��� ó�����Դϴ�.


void TheEnd::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.

	image1.Load(_T("./res/end1.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);

	

					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL TheEnd::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(213, 65, 1500, 900);

	SetTimer(1, 3000, NULL);
	b_state ++;


	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void TheEnd::OnTimer(UINT_PTR nIDEvent)
{
	CPaintDC dc(this);
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if (b_state == 1) {
		score++;
	}

	if (score == 1) {
		CDialogEx::OnOK();
		TheEnd2 TheEnd2;
		TheEnd2.DoModal();
		TheEnd2.DestroyWindow();
	}


	CDialogEx::OnTimer(nIDEvent);
}
