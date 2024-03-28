///-----------------------------------------------------------------
///
/// @file      GSProjectFrm.cpp
/// @author    Mikee
/// Created:   19/03/2024 10:03:19 pm
/// @section   DESCRIPTION
///            GSProjectFrm class implementation
///
///------------------------------------------------------------------

#include "GSProjectFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// GSProjectFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(GSProjectFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(GSProjectFrm::OnClose)
	EVT_BUTTON(ID_WXBUTTON1,GSProjectFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

GSProjectFrm::GSProjectFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

GSProjectFrm::~GSProjectFrm()
{
}

void GSProjectFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxEdit10 = new wxTextCtrl(this, ID_WXEDIT10, _(""), wxPoint(245, 209), wxSize(62, 19), 0, wxDefaultValidator, _("WxEdit10"));
	WxEdit10->Enable(false);

	WxStaticText7 = new wxStaticText(this, ID_WXSTATICTEXT7, _("AVE_GRADE"), wxPoint(165, 210), wxDefaultSize, 0, _("WxStaticText7"));

	WxEdit9 = new wxTextCtrl(this, ID_WXEDIT9, _(""), wxPoint(78, 208), wxSize(62, 19), 0, wxDefaultValidator, _("WxEdit9"));

	WxStaticText6 = new wxStaticText(this, ID_WXSTATICTEXT6, _("EXAM"), wxPoint(33, 209), wxDefaultSize, 0, _("WxStaticText6"));

	WxStaticText5 = new wxStaticText(this, ID_WXSTATICTEXT5, _("PERCENTAGE"), wxPoint(138, 38), wxDefaultSize, 0, _("WxStaticText5"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("COMPUTE"), wxPoint(234, 299), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton1"));

	WxEdit8 = new wxTextCtrl(this, ID_WXEDIT8, _("0"), wxPoint(155, 155), wxSize(35, 19), 0, wxDefaultValidator, _("WxEdit8"));
	WxEdit8->Enable(false);

	WxEdit7 = new wxTextCtrl(this, ID_WXEDIT7, _("0"), wxPoint(155, 125), wxSize(35, 19), 0, wxDefaultValidator, _("WxEdit7"));
	WxEdit7->Enable(false);

	WxEdit6 = new wxTextCtrl(this, ID_WXEDIT6, _("0"), wxPoint(155, 95), wxSize(35, 19), 0, wxDefaultValidator, _("WxEdit6"));
	WxEdit6->Enable(false);

	WxEdit5 = new wxTextCtrl(this, ID_WXEDIT5, _("0"), wxPoint(155, 65), wxSize(35, 19), 0, wxDefaultValidator, _("WxEdit5"));
	WxEdit5->Enable(false);

	WxEdit4 = new wxTextCtrl(this, ID_WXEDIT4, _("0"), wxPoint(100, 155), wxSize(35, 19), 0, wxDefaultValidator, _("WxEdit4"));

	WxEdit3 = new wxTextCtrl(this, ID_WXEDIT3, _("0"), wxPoint(100, 125), wxSize(35, 19), 0, wxDefaultValidator, _("WxEdit3"));

	WxStaticText4 = new wxStaticText(this, ID_WXSTATICTEXT4, _("PROJECT"), wxPoint(35, 155), wxDefaultSize, 0, _("WxStaticText4"));

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("LABORATORY"), wxPoint(10, 125), wxDefaultSize, 0, _("WxStaticText3"));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("QUIZZES"), wxPoint(35, 95), wxDefaultSize, 0, _("WxStaticText2"));

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _("0"), wxPoint(100, 95), wxSize(35, 19), 0, wxDefaultValidator, _("WxEdit2"));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("ATTENDANCE"), wxPoint(10, 65), wxDefaultSize, 0, _("WxStaticText1"));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _("0"), wxPoint(101, 65), wxSize(35, 19), 0, wxDefaultValidator, _("WxEdit1"));

	SetTitle(_("GSProject"));
	SetIcon(wxNullIcon);
	SetSize(249,11,383,401);
	Center();
	
	////GUI Items Creation End
}

void GSProjectFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void GSProjectFrm::WxButton1Click(wxCommandEvent& event)
{
    double att, quiz, lab, prj, exam, att_ave, lab_ave, quiz_ave, prj_ave, ave, ave_grade;
	   
	   if(WxEdit1->GetValue().ToDouble(&att)){
	   
	   att_ave = (att)*.10;
	   
	   WxEdit5->SetValue(wxString::Format (wxT("%lf"), att_ave));
       
       }
       
       if(WxEdit1->GetValue().ToDouble(&att)){
	   
	   att_ave = (att)*.10;
	   
	   WxEdit5->SetValue(wxString::Format (wxT("%lf"), att_ave));
       
       }
       
       if(WxEdit2->GetValue().ToDouble(&lab)){
	   
	   lab_ave = (lab)*.30;
	   
	   WxEdit6->SetValue(wxString::Format (wxT("%lf"), lab_ave));
       
       }
       
       if(WxEdit3->GetValue().ToDouble(&quiz)){
	   
	   quiz_ave = (quiz)*.40;
	   
	   WxEdit7->SetValue(wxString::Format (wxT("%lf"), quiz_ave));
       
       }
       
        if(WxEdit4->GetValue().ToDouble(&prj)){
	   
	   prj_ave = (prj)*.20;
	   
	   WxEdit8->SetValue(wxString::Format (wxT("%lf"), prj_ave));
       
       }
    
        if(WxEdit9->GetValue().ToDouble(&exam)){
            exam = (exam /100)*100;
            ave = (att_ave + lab_ave + quiz_ave + prj_ave);
            ave_grade = ((ave*2)+ exam)/3;
            
            WxEdit10->SetValue(wxString::Format (wxT("%lf"),ave_grade));
            
            
            }
    
    
    
    // insert your code here
	   
}
