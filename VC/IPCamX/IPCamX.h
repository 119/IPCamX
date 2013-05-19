#pragma once

// IPCamX.h�: fichier d'en-t�te principal pour IPCamX.DLL

#if !defined( __AFXCTL_H__ )
#error "incluez 'afxctl.h' avant d'inclure ce fichier"
#endif

#include "resource.h"       // symboles principaux


// CIPCamXApp�: consultez IPCamX.cpp pour l'impl�mentation.

class CIPCamXApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

