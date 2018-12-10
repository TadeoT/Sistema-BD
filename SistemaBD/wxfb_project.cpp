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
	m_grillaClientes->CreateGrid( 0, 5 );
	m_grillaClientes->EnableEditing( true );
	m_grillaClientes->EnableGridLines( true );
	m_grillaClientes->EnableDragGridSize( false );
	m_grillaClientes->SetMargins( 0, 0 );
	
	// Columns
	m_grillaClientes->SetColSize( 0, 81 );
	m_grillaClientes->SetColSize( 1, 144 );
	m_grillaClientes->SetColSize( 2, 117 );
	m_grillaClientes->SetColSize( 3, 99 );
	m_grillaClientes->SetColSize( 4, 56 );
	m_grillaClientes->EnableDragColMove( false );
	m_grillaClientes->EnableDragColSize( true );
	m_grillaClientes->SetColLabelSize( 30 );
	m_grillaClientes->SetColLabelValue( 0, wxT("DNI") );
	m_grillaClientes->SetColLabelValue( 1, wxT("Nombre Completo") );
	m_grillaClientes->SetColLabelValue( 2, wxT("Telefono") );
	m_grillaClientes->SetColLabelValue( 3, wxT("Direccion") );
	m_grillaClientes->SetColLabelValue( 4, wxT("Saldo") );
	m_grillaClientes->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grillaClientes->EnableDragRowSize( true );
	m_grillaClientes->SetRowLabelSize( 0 );
	m_grillaClientes->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
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
	
	
	bSizer19->Add( bSizer11, 1, 0, 5 );
	
	
	bSizer8->Add( bSizer19, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("PRODUCTOS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
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
	m_grillaProductos->CreateGrid( 0, 8 );
	m_grillaProductos->EnableEditing( true );
	m_grillaProductos->EnableGridLines( true );
	m_grillaProductos->EnableDragGridSize( false );
	m_grillaProductos->SetMargins( 0, 0 );
	
	// Columns
	m_grillaProductos->SetColSize( 0, 72 );
	m_grillaProductos->SetColSize( 1, 81 );
	m_grillaProductos->SetColSize( 2, 82 );
	m_grillaProductos->SetColSize( 3, 93 );
	m_grillaProductos->SetColSize( 4, 75 );
	m_grillaProductos->SetColSize( 5, 69 );
	m_grillaProductos->SetColSize( 6, 87 );
	m_grillaProductos->SetColSize( 7, 45 );
	m_grillaProductos->EnableDragColMove( false );
	m_grillaProductos->EnableDragColSize( true );
	m_grillaProductos->SetColLabelSize( 30 );
	m_grillaProductos->SetColLabelValue( 0, wxT("Codigo") );
	m_grillaProductos->SetColLabelValue( 1, wxT("Marca") );
	m_grillaProductos->SetColLabelValue( 2, wxT("Nombre") );
	m_grillaProductos->SetColLabelValue( 3, wxT("Clasificacion") );
	m_grillaProductos->SetColLabelValue( 4, wxT("Presentacion") );
	m_grillaProductos->SetColLabelValue( 5, wxT("Precio Prof") );
	m_grillaProductos->SetColLabelValue( 6, wxT("Precio Publico") );
	m_grillaProductos->SetColLabelValue( 7, wxT("Stock") );
	m_grillaProductos->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grillaProductos->EnableDragRowSize( true );
	m_grillaProductos->SetRowLabelSize( 0 );
	m_grillaProductos->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
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
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer191;
	bSizer191 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("FACTURAS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer191->Add( m_staticText5, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer21->Add( bSizer191, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_grillaPedidos = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_grillaPedidos->CreateGrid( 0, 7 );
	m_grillaPedidos->EnableEditing( true );
	m_grillaPedidos->EnableGridLines( true );
	m_grillaPedidos->EnableDragGridSize( false );
	m_grillaPedidos->SetMargins( 0, 0 );
	
	// Columns
	m_grillaPedidos->SetColSize( 0, 73 );
	m_grillaPedidos->SetColSize( 1, 69 );
	m_grillaPedidos->SetColSize( 2, 57 );
	m_grillaPedidos->SetColSize( 3, 30 );
	m_grillaPedidos->SetColSize( 4, 68 );
	m_grillaPedidos->SetColSize( 5, 54 );
	m_grillaPedidos->SetColSize( 6, 59 );
	m_grillaPedidos->EnableDragColMove( false );
	m_grillaPedidos->EnableDragColSize( true );
	m_grillaPedidos->SetColLabelSize( 30 );
	m_grillaPedidos->SetColLabelValue( 0, wxT("DNI C") );
	m_grillaPedidos->SetColLabelValue( 1, wxT("Codigo P") );
	m_grillaPedidos->SetColLabelValue( 2, wxT("Cantidad") );
	m_grillaPedidos->SetColLabelValue( 3, wxT("Cat") );
	m_grillaPedidos->SetColLabelValue( 4, wxT("Fecha") );
	m_grillaPedidos->SetColLabelValue( 5, wxT("Pagado") );
	m_grillaPedidos->SetColLabelValue( 6, wxT("Total") );
	m_grillaPedidos->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grillaPedidos->EnableDragRowSize( true );
	m_grillaPedidos->SetRowLabelSize( 0 );
	m_grillaPedidos->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grillaPedidos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer10->Add( m_grillaPedidos, 1, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );
	
	AgregarPedido = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( AgregarPedido, 0, wxALL, 5 );
	
	ModificarPedido = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( ModificarPedido, 0, wxALL, 5 );
	
	EliminarPedido = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( EliminarPedido, 0, wxALL, 5 );
	
	
	bSizer10->Add( bSizer22, 0, wxEXPAND, 5 );
	
	
	bSizer21->Add( bSizer10, 1, wxEXPAND, 5 );
	
	
	bSizer8->Add( bSizer21, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer8, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	AgregarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarCliente ), NULL, this );
	ModificarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarCliente ), NULL, this );
	EliminarCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarCliente ), NULL, this );
	AgregarProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarProducto ), NULL, this );
	ModificarProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarProducto ), NULL, this );
	EliminarProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarProducto ), NULL, this );
	AgregarPedido->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarPedido ), NULL, this );
	ModificarPedido->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarPedido ), NULL, this );
	EliminarPedido->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarPedido ), NULL, this );
}

Base_principal::~Base_principal()
{
	// Disconnect Events
	AgregarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarCliente ), NULL, this );
	ModificarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarCliente ), NULL, this );
	EliminarCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarCliente ), NULL, this );
	AgregarProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarProducto ), NULL, this );
	ModificarProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarProducto ), NULL, this );
	EliminarProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarProducto ), NULL, this );
	AgregarPedido->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickAgregarPedido ), NULL, this );
	ModificarPedido->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickModificarPedido ), NULL, this );
	EliminarPedido->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Base_principal::ClickEliminarPedido ), NULL, this );
	
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
