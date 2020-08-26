// CPropPageSettings.cpp : implementation file
//

#include "pch.h"
#include "pomodoro.h"
#include "CPropPageSettings.h"
#include "CNewProjectDlg.h"


// CPropPageSettings

IMPLEMENT_DYNAMIC(CPropPageSettings, CMFCPropertyPage)

CPropPageSettings::CPropPageSettings() : CMFCPropertyPage(IDD_PROPPAGE_SETTINGS) 
{

}

CPropPageSettings::~CPropPageSettings()
{
}


BEGIN_MESSAGE_MAP(CPropPageSettings, CMFCPropertyPage)
	ON_BN_CLICKED(IDC_BUTTON1, &CPropPageSettings::OnBnClickedButton1)
END_MESSAGE_MAP()



// CPropPageSettings message handlers




void CPropPageSettings::OnBnClickedButton1()
{
	CNewProjectDlg npDlg(this);
	if (npDlg.DoModal() == IDOK)
	{
		CpomodoroApp* pWinApp = (CpomodoroApp*)AfxGetApp();
		pWinApp->works.insert({ npDlg.project_name, 0 });
	}
}
