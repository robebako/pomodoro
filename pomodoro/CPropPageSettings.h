#pragma once


// CPropPageSettings

class CPropPageSettings : public CMFCPropertyPage
{
	DECLARE_DYNAMIC(CPropPageSettings)

public:
	CPropPageSettings();
	virtual ~CPropPageSettings();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};


