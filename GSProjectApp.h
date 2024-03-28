//---------------------------------------------------------------------------
//
// Name:        GSProjectApp.h
// Author:      Mikee
// Created:     19/03/2024 10:03:18 pm
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __GSPROJECTFRMApp_h__
#define __GSPROJECTFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class GSProjectFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
