// Explain.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "Explain.h"
#include "afxdialogex.h"
#include "M_music.h"


// Explain ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Explain, CDialogEx)

Explain::Explain(CWnd* pParent /*=NULL*/)
	: CDialogEx(M_explain, pParent)
{

}

Explain::~Explain()
{
}

void Explain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Explain, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Explain �޽��� ó�����Դϴ�.


void Explain::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	image1.Load(_T("./res/Explain.jpg"));
	image1.BitBlt(dc.m_hDC, 0, 0);
					   // �׸��� �޽����� ���ؼ��� CDialogEx::OnPaint()��(��) ȣ������ ���ʽÿ�.
}


BOOL Explain::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	MoveWindow(350, 70, 1280, 750);

	M_music M_music;
	M_music.DoModal();
	M_music.DestroyWindow();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
