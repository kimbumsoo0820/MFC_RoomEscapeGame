// TheEnd4.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "TheEnd4.h"
#include "afxdialogex.h"
#include "TheEnd4.h"
#include "FINALEND.h"

// TheEnd4 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(TheEnd4, CDialogEx)

TheEnd4::TheEnd4(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_END4, pParent)
{

}

TheEnd4::~TheEnd4()
{
}

void TheEnd4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TheEnd4, CDialogEx)
	ON_WM_PAINT()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// TheEnd4 �޽��� ó�����Դϴ�.


void TheEnd4::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/end4.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL TheEnd4::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(213, 65, 1500, 900);
	SetTimer(1, 3000, NULL);
	b_state++;
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void TheEnd4::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if (b_state == 1) {
		score++;
	}

	if (score == 1) {

		CDialogEx::OnOK();

		FINALEND FINALEND;
		FINALEND.DoModal();
		FINALEND.DestroyWindow();
		
	}

	CDialogEx::OnTimer(nIDEvent);
}
