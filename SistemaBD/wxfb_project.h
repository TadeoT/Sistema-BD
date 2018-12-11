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
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/frame.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Base_principal
///////////////////////////////////////////////////////////////////////////////
class Base_principal : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar1;
		wxMenu* MenuPedidos;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText21;
		wxButton* m_button10;
		wxTextCtrl* m_textCtrl1;
		wxGrid* m_grillaClientes;
		wxButton* AgregarCliente;
		wxButton* ModificarCliente;
		wxButton* EliminarCliente;
		wxStaticText* m_staticText3;
		wxButton* m_button11;
		wxTextCtrl* m_textCtrl2;
		wxGrid* m_grillaProductos;
		wxButton* AgregarProducto;
		wxButton* ModificarProducto;
		wxButton* EliminarProducto;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickMenuAgregarPedido( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickMenuVerPedido( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAgregarCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickModificarCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminarCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAgregarProducto( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickModificarProducto( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminarProducto( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Base_principal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Sistema BD"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1384,735 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~Base_principal();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Base_AgregarCliente
///////////////////////////////////////////////////////////////////////////////
class Base_AgregarCliente : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText7;
		wxTextCtrl* m_apellidoC;
		wxStaticText* m_staticText71;
		wxTextCtrl* m_nombreC;
		wxStaticText* m_staticText72;
		wxTextCtrl* m_telC;
		wxStaticText* m_staticText73;
		wxTextCtrl* m_direccionC;
		wxStaticText* m_staticText74;
		wxTextCtrl* m_localidadC;
		wxStaticText* m_staticText75;
		wxTextCtrl* m_emailC;
		wxStaticText* m_staticText76;
		wxTextCtrl* m_dniC;
		wxButton* AceptarCliente;
		wxButton* CancelarCliente;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickAceptarCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancerlarCliente( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Base_AgregarCliente( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Agregar Cliente"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 618,454 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Base_AgregarCliente();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Base_ModificarCliente
///////////////////////////////////////////////////////////////////////////////
class Base_ModificarCliente : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText7;
		wxTextCtrl* m_apellidoC;
		wxStaticText* m_staticText71;
		wxTextCtrl* m_nombreC;
		wxStaticText* m_staticText72;
		wxTextCtrl* m_telC;
		wxStaticText* m_staticText73;
		wxTextCtrl* m_direccionC;
		wxStaticText* m_staticText74;
		wxTextCtrl* m_localidadC;
		wxStaticText* m_staticText75;
		wxTextCtrl* m_emailC;
		wxStaticText* m_staticText76;
		wxTextCtrl* m_dniC;
		wxStaticText* Saldo;
		wxTextCtrl* m_dniC1;
		wxButton* AceptarCliente;
		wxButton* CancelarCliente;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickAceptarCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancerlarCliente( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Base_ModificarCliente( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Modificar Cliente"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 621,481 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Base_ModificarCliente();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Base_AgregarPedido
///////////////////////////////////////////////////////////////////////////////
class Base_AgregarPedido : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText27;
		wxTextCtrl* DNIClientePedido;
		wxStaticText* m_staticText271;
		wxTextCtrl* CodigoProductoPedido;
		wxStaticText* m_staticText272;
		wxTextCtrl* PagadoPedido;
		wxStaticText* m_staticText273;
		wxTextCtrl* CategoriaPedido;
		wxStaticText* m_staticText274;
		wxTextCtrl* CantidadPedido;
		wxButton* AceptarPedido;
		wxButton* CancelarPedido;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickAceptarPedido( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelarPedido( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Base_AgregarPedido( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Agregar Pedido"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 592,612 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Base_AgregarPedido();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Base_VerPedidos
///////////////////////////////////////////////////////////////////////////////
class Base_VerPedidos : public wxDialog 
{
	private:
	
	protected:
		wxGrid* m_grillaPedidos;
		wxButton* CerrarPedido;
		
		// Virtual event handlers, overide them in your derived class
		virtual void CerrarVerPedido( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Base_VerPedidos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Pedidos Realizados"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 759,552 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Base_VerPedidos();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Base_AgregarProducto
///////////////////////////////////////////////////////////////////////////////
class Base_AgregarProducto : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText45;
		wxTextCtrl* CodigoP;
		wxStaticText* m_staticText451;
		wxTextCtrl* MarcaP;
		wxStaticText* m_staticText452;
		wxTextCtrl* NombreP;
		wxStaticText* m_staticText453;
		wxTextCtrl* DescripcionP;
		wxStaticText* m_staticText454;
		wxTextCtrl* ClasificacionP;
		wxStaticText* m_staticText455;
		wxTextCtrl* ComposicionP;
		wxStaticText* m_staticText456;
		wxTextCtrl* PresentacionP;
		wxStaticText* m_staticText457;
		wxTextCtrl* StockP;
		wxStaticText* m_staticText458;
		wxTextCtrl* Precio_diP;
		wxStaticText* m_staticText459;
		wxTextCtrl* Precio_prD;
		wxStaticText* m_staticText4510;
		wxTextCtrl* Precio_puD;
		wxButton* AceptarProducto;
		wxButton* CancelarProducto;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickAceptarProducto( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelarProducto( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Base_AgregarProducto( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Agregar Producto"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 626,554 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Base_AgregarProducto();
	
};

#endif //__WXFB_PROJECT_H__
