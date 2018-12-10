#include "Hija_ModificarCliente.h"
#include <wx/msgdlg.h>
Hija_ModificarCliente::Hija_ModificarCliente(wxWindow *parent, BD *BaseDatos) : Base_ModificarCliente(parent), m_BaseDatos(BaseDatos) {
	
}

void Hija_ModificarCliente::ClickAceptarCliente( wxCommandEvent& event )  {
	event.Skip();
}

void Hija_ModificarCliente::ClickCancerlarCliente( wxCommandEvent& event )  {
	event.Skip();
}

Hija_ModificarCliente::~Hija_ModificarCliente() {
	
}

