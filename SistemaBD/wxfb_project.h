///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May 29 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/hyperlink.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/grid.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Base_principal
///////////////////////////////////////////////////////////////////////////////
class Base_principal : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxButton* m_button4;
		wxButton* m_button5;
		wxButton* m_button6;
		wxStaticText* dataVersion;
		wxStaticText* m_staticText6;
		wxHyperlinkCtrl* m_hyperlink1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickVerProductos( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Base_principal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 908,507 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~Base_principal();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Base_Productos
///////////////////////////////////////////////////////////////////////////////
class Base_Productos : public wxFrame 
{
	private:
	
	protected:
		wxButton* m_button4;
		wxTextCtrl* m_textCtrl1;
		wxButton* m_button5;
		wxGrid* m_grid2;
		wxButton* m_button6;
		wxButton* m_button7;
		wxButton* m_button8;
	
	public:
		
		Base_Productos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 809,461 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~Base_Productos();
	
};

#endif //__WXFB_PROJECT_H__
