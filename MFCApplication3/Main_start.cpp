// Main_start.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Main_start.h"
#include "afxdialogex.h"
#include "Explain.h"
#include "Room3_C_Home.h"

// Main_start ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Main_start, CDialogEx)

Main_start::Main_start(CWnd* pParent /*=NULL*/)
	: CDialogEx(Main, pParent)
{

}

Main_start::~Main_start()
{
}

void Main_start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Main_start, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDOK, &Main_start::OnBnClickedOk)
END_MESSAGE_MAP()


// Main_start �޽��� ó�����Դϴ�.


void Main_start::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	
	image1.Load(_T("./res/main.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);

					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Main_start::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	MoveWindow(250, 70, 1500, 900);
	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Main_start::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
	Explain Explain;
	Explain.DoModal();
	Explain.DestroyWindow();

}
