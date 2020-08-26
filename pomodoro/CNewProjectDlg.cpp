// CNewProjectDlg.cpp : implementation file
//

#include "pch.h"
#include "pomodoro.h"
#include "CNewProjectDlg.h"
#include "afxdialogex.h"


// CNewProjectDlg dialog

IMPLEMENT_DYNAMIC(CNewProjectDlg, CDialogEx)

CNewProjectDlg::CNewProjectDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_NEW_PROJECT, pParent)
	, project_name(_T(""))
{

}

CNewProjectDlg::~CNewProjectDlg()
{
}

void CNewProjectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, project_name);
	DDV_MaxChars(pDX, project_name, 25);
}


BEGIN_MESSAGE_MAP(CNewProjectDlg, CDialogEx)
END_MESSAGE_MAP()


// CNewProjectDlg message handlers


void CNewProjectDlg::OnOK()
{


	CDialogEx::OnOK();
}
