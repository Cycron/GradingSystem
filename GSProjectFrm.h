///-----------------------------------------------------------------
///
/// @file      GSProjectFrm.h
/// @author    Mikee
/// Created:   19/03/2024 10:03:19 pm
/// @section   DESCRIPTION
///            GSProjectFrm class declaration
///
///------------------------------------------------------------------

#ifndef __GSPROJECTFRM_H__
#define __GSPROJECTFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
////Header Include End

////Dialog Style Start
#undef GSProjectFrm_STYLE
#define GSProjectFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class GSProjectFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		GSProjectFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("GSProject"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = GSProjectFrm_STYLE);
		virtual ~GSProjectFrm();
		void WxButton1Click(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxTextCtrl *WxEdit10;
		wxStaticText *WxStaticText7;
		wxTextCtrl *WxEdit9;
		wxStaticText *WxStaticText6;
		wxStaticText *WxStaticText5;
		wxButton *WxButton1;
		wxTextCtrl *WxEdit8;
		wxTextCtrl *WxEdit7;
		wxTextCtrl *WxEdit6;
		wxTextCtrl *WxEdit5;
		wxTextCtrl *WxEdit4;
		wxTextCtrl *WxEdit3;
		wxStaticText *WxStaticText4;
		wxStaticText *WxStaticText3;
		wxStaticText *WxStaticText2;
		wxTextCtrl *WxEdit2;
		wxStaticText *WxStaticText1;
		wxTextCtrl *WxEdit1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXEDIT10 = 1022,
			ID_WXSTATICTEXT7 = 1020,
			ID_WXEDIT9 = 1019,
			ID_WXSTATICTEXT6 = 1017,
			ID_WXSTATICTEXT5 = 1016,
			ID_WXBUTTON1 = 1014,
			ID_WXEDIT8 = 1013,
			ID_WXEDIT7 = 1012,
			ID_WXEDIT6 = 1011,
			ID_WXEDIT5 = 1010,
			ID_WXEDIT4 = 1008,
			ID_WXEDIT3 = 1007,
			ID_WXSTATICTEXT4 = 1006,
			ID_WXSTATICTEXT3 = 1005,
			ID_WXSTATICTEXT2 = 1004,
			ID_WXEDIT2 = 1003,
			ID_WXSTATICTEXT1 = 1002,
			ID_WXEDIT1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
