#pragma once

// IPCamXPropPage.h�: d�claration de la classe de page de propri�t�s CIPCamXPropPage.


// CIPCamXPropPage�: consultez IPCamXPropPage.cpp pour l'impl�mentation.

class CIPCamXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CIPCamXPropPage)
	DECLARE_OLECREATE_EX(CIPCamXPropPage)

// Constructeur
public:
	CIPCamXPropPage();

// Donn�es de bo�te de dialogue
	enum { IDD = IDD_PROPPAGE_IPCAMX };

// Impl�mentation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

// Tables des messages
protected:
	DECLARE_MESSAGE_MAP()
public:
};

