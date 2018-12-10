///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May 29 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

Base_principal::Base_principal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_menubar1 = new wxMenuBar( 0 );
	MenuPedidos = new wxMenu();
	wxMenuItem* m_menuItem3;
	m_menuItem3 = new wxMenuItem( MenuPedidos, wxID_ANY, wxString( wxT("Agregar Pedido") ) , wxEmptyString, wxITEM_NORMAL );
	MenuPedidos->Append( m_menuItem3 );
	
	wxMenuItem* m_menuItem4;
	m_menuItem4 = new wxMenuItem( MenuPedidos, wxID_ANY, wxString( wxT("Ver Pedidos") ) , wxEmptyString, wxITEM_NORMAL );
	MenuPedidos->Append( m_menuItem4 );
	
	m_menubar1->Append( MenuPedidos, wxT("Menu Pedidos") ); 
	
	this->SetMenuBar( m_menubar1 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Sistema DB"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 26, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("EmojiOne Color") ) );
	
	bSizer4->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer3->Add( bSizer4, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer3->Add( bSizer81, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("CLIENTES"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	m_staticText21->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Microsoft Sans Serif") ) );
	
	bSizer9->Add( m_staticText21, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button10 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button10->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	
	bSizer15->Add( m_button10, 0, wxALL, 5 );
	
	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_textCtrl1, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer9->Add( bSizer15, 0, wxEXPAND, 5 );
	
	
	bSizer19->Add( bSizer9, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_grillaClientes = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_grillaClientes->CreateGrid( 0, 6 );
	m_grillaClientes->EnableEditing( true );
	m_grillaClientes->EnableGridLines( true );
	m_grillaClientes->EnableDragGridSize( false );
	m_grillaClientes->SetMargins( 0, 0 );
	
	// Columns
	m_grillaClientes->SetColSize( 0, 81 );
	m_grillaClientes->SetColSize( 1, 153 );
	m_grillaClientes->SetColSize( 2, 107 );
	m_grillaClientes->SetColSize( 3, 126 );
	m_grillaClientes->SetColSize( 4, 124 );
	m_grillaClientes->SetColSize( 5, 90 );
	m_grillaClientes->EnableDragColMove( false );
	m_grillaClientes->EnableDragColSize( true );
	m_grillaClientes->SetColLabelSize( 30 );
	m_grillaClientes->SetColLabelValue( 0, wxT("DNI") );
	m_grillaClientes->SetColLabelValue( 1, wxT("Nombre Completo") );
	m_grillaClientes->SetColLabelValue( 2, wxT("Telefono") );
	m_grillaClientes->SetColLabelValue( 3, wxT("Direccion") );
	m_grillaClientes->SetColLabelValue( 4, wxT("Email") );
	m_grillaClientes->SetColLabelValue( 5, wxT("Saldo") );
	m_grillaClientes->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grillaClientes->EnableDragRowSize( true );
	m_grillaClientes->SetRowLabelSize( 0 );
	m_grillaClientes->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grillaClientes->SetDefaultCellFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_grillaClientes->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer11->Add( m_grillaClientes, 1, wxEXPAND|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxHORIZONTAL );
	
	AgregarCliente = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( AgregarCliente, 0, wxALL, 5 );
	
	ModificarCliente = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( ModificarCliente, 0, wxALL, 5 );
	
	EliminarCliente = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( EliminarCliente, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer24, 0, wxEXPAND, 5 );
	
	
	bSizer19->Add( bSizer11, 1, wxEXPAND, 5 );
	
	
	bSizer8->Add( bSizer19, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("PRODUCTOS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Microsoft Sans Serif") ) );
	
	bSizer111->Add( m_staticText3, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button11 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_button11, 0, wxALL|wxEXPAND, 5 );
	
	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_textCtrl2, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer111->Add( bSizer16, 0, wxEXPAND, 5 );
	
	
	bSizer12->Add( bSizer111, 0, wxEXPAND, 5 );
	
	m_grillaProductos = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_grillaProductos->CreateGrid( 0, 9 );
	m_grillaProductos->EnableEditing( true );
	m_grillaProductos->EnableGridLines( true );
	m_grillaProductos->EnableDragGridSize( false );
	m_grillaProductos->SetMargins( 0, 0 );
	
	// Columns
	m_grillaProductos->SetColSize( 0, 65 );
	m_grillaProductos->SetColSize( 1, 80 );
	m_grillaProductos->SetColSize( 2, 75 );
	m_grillaProductos->SetColSize( 3, 83 );
	m_grillaProductos->SetColSize( 4, 75 );
	m_grillaProductos->SetColSize( 5, 74 );
	m_grillaProductos->SetColSize( 6, 77 );
	m_grillaProductos->SetColSize( 7, 82 );
	m_grillaProductos->SetColSize( 8, 63 );
	m_grillaProductos->EnableDragColMove( false );
	m_grillaProductos->EnableDragColSize( true );
	m_grillaProductos->SetColLabelSize( 30 );
	m_grillaProductos->SetColLabelValue( 0, wxT("Codigo") );
	m_grillaProductos->SetColLabelValue( 1, wxT("Marca") );
	m_grillaProductos->SetColLabelValue( 2, wxT("Nombre") );
	m_grillaProductos->SetColLabelValue( 3, wxT("Clasificacion") );
	m_grillaProductos->SetColLabelValue( 4, wxT("Presentacion") );
	m_grillaProductos->SetColLabelValue( 5, wxT("Precio Dist") );
	m_grillaProductos->SetColLabelValue( 6, wxT("Precio Prof") );
	m_grillaProductos->SetColLabelValue( 7, wxT("Precio Public") );
	m_grillaProductos->SetColLabelValue( 8, wxT("Stock") );
	m_grillaProductos->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grillaProductos->EnableDragRowSize( true );
	m_grillaProductos->SetRowLabelSize( 0 );
	m_grillaProductos->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grillaProductos->SetDefaultCellFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_grillaProductos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer12->Add( m_grillaProductos, 1, wxEXPAND|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );
	
	AgregarProducto = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( AgregarProducto, 0, wxALL, 5 );
	
	ModificarProducto = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( ModificarProducto, 0, wxALL, 5 );
	
	EliminarProducto = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( EliminarProducto, 0, wxALL, 5 );
	
	
	bSizer12->Add( bSizer23, 0, wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer12, 1, wxEXPAND, 5 );
	
	
	bSizer8->Add( bSizer20, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer8, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( m_menuItem3->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( Base_principal::ClickMenuAgregarPedido ) );
	this->Connect( m_menuItem4->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( Base_principal::ClickMenuVerPedido ) );
	AgregarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarCliente ), NULL, this );
	ModificarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarCliente ), NULL, this );
	EliminarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarCliente ), NULL, this );
	AgregarProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarProducto ), NULL, this );
	ModificarProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarProducto ), NULL, this );
	EliminarProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarProducto ), NULL, this );
}

Base_principal::~Base_principal()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( Base_principal::ClickMenuAgregarPedido ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( Base_principal::ClickMenuVerPedido ) );
	AgregarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarCliente ), NULL, this );
	ModificarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarCliente ), NULL, this );
	EliminarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarCliente ), NULL, this );
	AgregarProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarProducto ), NULL, this );
	ModificarProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarProducto ), NULL, this );
	EliminarProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarProducto ), NULL, this );
	
}

Base_AgregarCliente::Base_AgregarCliente( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer21->Add( m_staticText7, 0, wxALL|wxEXPAND, 5 );
	
	m_apellidoC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_apellidoC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer21, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer211;
	bSizer211 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	bSizer211->Add( m_staticText71, 0, wxALL|wxEXPAND, 5 );
	
	m_nombreC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer211->Add( m_nombreC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer211, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer212;
	bSizer212 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText72 = new wxStaticText( this, wxID_ANY, wxT("Telefono"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	bSizer212->Add( m_staticText72, 0, wxALL|wxEXPAND, 5 );
	
	m_telC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( m_telC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer212, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer213;
	bSizer213 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText73 = new wxStaticText( this, wxID_ANY, wxT("Direccion"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText73->Wrap( -1 );
	bSizer213->Add( m_staticText73, 0, wxALL|wxEXPAND, 5 );
	
	m_direccionC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer213->Add( m_direccionC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer213, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer214;
	bSizer214 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText74 = new wxStaticText( this, wxID_ANY, wxT("Localidad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText74->Wrap( -1 );
	bSizer214->Add( m_staticText74, 0, wxALL|wxEXPAND, 5 );
	
	m_localidadC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer214->Add( m_localidadC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer214, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer215;
	bSizer215 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText75 = new wxStaticText( this, wxID_ANY, wxT("Email    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText75->Wrap( -1 );
	bSizer215->Add( m_staticText75, 0, wxALL|wxEXPAND, 5 );
	
	m_emailC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer215->Add( m_emailC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer215, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer216;
	bSizer216 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText76 = new wxStaticText( this, wxID_ANY, wxT("DNI     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText76->Wrap( -1 );
	bSizer216->Add( m_staticText76, 0, wxALL|wxEXPAND, 5 );
	
	m_dniC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer216->Add( m_dniC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer216, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxHORIZONTAL );
	
	AceptarCliente = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( AceptarCliente, 0, wxALL, 5 );
	
	CancelarCliente = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( CancelarCliente, 0, wxALL, 5 );
	
	
	bSizer62->Add( bSizer63, 0, 0, 5 );
	
	
	bSizer20->Add( bSizer62, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer20 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	AceptarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_AgregarCliente::ClickAceptarCliente ), NULL, this );
	CancelarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_AgregarCliente::ClickCancerlarCliente ), NULL, this );
}

Base_AgregarCliente::~Base_AgregarCliente()
{
	// Disconnect Events
	AceptarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_AgregarCliente::ClickAceptarCliente ), NULL, this );
	CancelarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_AgregarCliente::ClickCancerlarCliente ), NULL, this );
	
}

Base_ModificarCliente::Base_ModificarCliente( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer21->Add( m_staticText7, 0, wxALL|wxEXPAND, 5 );
	
	m_apellidoC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_apellidoC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer21, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer211;
	bSizer211 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	bSizer211->Add( m_staticText71, 0, wxALL|wxEXPAND, 5 );
	
	m_nombreC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer211->Add( m_nombreC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer211, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer212;
	bSizer212 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText72 = new wxStaticText( this, wxID_ANY, wxT("Telefono"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	bSizer212->Add( m_staticText72, 0, wxALL|wxEXPAND, 5 );
	
	m_telC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( m_telC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer212, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer213;
	bSizer213 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText73 = new wxStaticText( this, wxID_ANY, wxT("Direccion"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText73->Wrap( -1 );
	bSizer213->Add( m_staticText73, 0, wxALL|wxEXPAND, 5 );
	
	m_direccionC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer213->Add( m_direccionC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer213, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer214;
	bSizer214 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText74 = new wxStaticText( this, wxID_ANY, wxT("Localidad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText74->Wrap( -1 );
	bSizer214->Add( m_staticText74, 0, wxALL|wxEXPAND, 5 );
	
	m_localidadC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer214->Add( m_localidadC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer214, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer215;
	bSizer215 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText75 = new wxStaticText( this, wxID_ANY, wxT("Email    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText75->Wrap( -1 );
	bSizer215->Add( m_staticText75, 0, wxALL|wxEXPAND, 5 );
	
	m_emailC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer215->Add( m_emailC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer215, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer216;
	bSizer216 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText76 = new wxStaticText( this, wxID_ANY, wxT("DNI     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText76->Wrap( -1 );
	bSizer216->Add( m_staticText76, 0, wxALL|wxEXPAND, 5 );
	
	m_dniC = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer216->Add( m_dniC, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer216, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer2161;
	bSizer2161 = new wxBoxSizer( wxHORIZONTAL );
	
	Saldo = new wxStaticText( this, wxID_ANY, wxT("Saldo  "), wxDefaultPosition, wxDefaultSize, 0 );
	Saldo->Wrap( -1 );
	bSizer2161->Add( Saldo, 0, wxALL|wxEXPAND, 5 );
	
	m_dniC1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2161->Add( m_dniC1, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer20->Add( bSizer2161, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxHORIZONTAL );
	
	AceptarCliente = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( AceptarCliente, 0, wxALL, 5 );
	
	CancelarCliente = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( CancelarCliente, 0, wxALL, 5 );
	
	
	bSizer62->Add( bSizer63, 0, 0, 5 );
	
	
	bSizer20->Add( bSizer62, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer20 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	AceptarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_ModificarCliente::ClickAceptarCliente ), NULL, this );
	CancelarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_ModificarCliente::ClickCancerlarCliente ), NULL, this );
}

Base_ModificarCliente::~Base_ModificarCliente()
{
	// Disconnect Events
	AceptarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_ModificarCliente::ClickAceptarCliente ), NULL, this );
	CancelarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_ModificarCliente::ClickCancerlarCliente ), NULL, this );
	
}

Base_AgregarPedido::Base_AgregarPedido( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer54->Add( m_staticText27, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl26 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer54->Add( m_textCtrl26, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer53->Add( bSizer54, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer541;
	bSizer541 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText271 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText271->Wrap( -1 );
	bSizer541->Add( m_staticText271, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl261 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer541->Add( m_textCtrl261, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer53->Add( bSizer541, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer542;
	bSizer542 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText272 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText272->Wrap( -1 );
	bSizer542->Add( m_staticText272, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl262 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer542->Add( m_textCtrl262, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer53->Add( bSizer542, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer543;
	bSizer543 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText273 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText273->Wrap( -1 );
	bSizer543->Add( m_staticText273, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl263 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer543->Add( m_textCtrl263, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer53->Add( bSizer543, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer544;
	bSizer544 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText274 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText274->Wrap( -1 );
	bSizer544->Add( m_staticText274, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl264 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer544->Add( m_textCtrl264, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer53->Add( bSizer544, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer545;
	bSizer545 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText275 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText275->Wrap( -1 );
	bSizer545->Add( m_staticText275, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl265 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer545->Add( m_textCtrl265, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer53->Add( bSizer545, 1, wxEXPAND, 5 );
	
	
	bSizer50->Add( bSizer53, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button17 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( m_button17, 0, wxALL, 5 );
	
	m_button16 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( m_button16, 0, wxALL, 5 );
	
	
	bSizer50->Add( bSizer51, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer50 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

Base_AgregarPedido::~Base_AgregarPedido()
{
}

Base_VerPedidos::Base_VerPedidos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxVERTICAL );
	
	m_grid3 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_grid3->CreateGrid( 5, 5 );
	m_grid3->EnableEditing( true );
	m_grid3->EnableGridLines( true );
	m_grid3->EnableDragGridSize( false );
	m_grid3->SetMargins( 0, 0 );
	
	// Columns
	m_grid3->EnableDragColMove( false );
	m_grid3->EnableDragColSize( true );
	m_grid3->SetColLabelSize( 30 );
	m_grid3->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grid3->EnableDragRowSize( true );
	m_grid3->SetRowLabelSize( 0 );
	m_grid3->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grid3->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer49->Add( m_grid3, 1, wxALL|wxEXPAND, 5 );
	
	m_button15 = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer49->Add( m_button15, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer49 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

Base_VerPedidos::~Base_VerPedidos()
{
}
