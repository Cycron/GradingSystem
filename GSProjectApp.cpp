//---------------------------------------------------------------------------
//
// Name:        GSProjectApp.cpp
// Author:      Mikee
// Created:     19/03/2024 10:03:18 pm
// Description: 
//
//---------------------------------------------------------------------------

#include "GSProjectApp.h"
#include "GSProjectFrm.h"

IMPLEMENT_APP(GSProjectFrmApp)

bool GSProjectFrmApp::OnInit()
{
    GSProjectFrm* frame = new GSProjectFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int GSProjectFrmApp::OnExit()
{
	return 0;
}
