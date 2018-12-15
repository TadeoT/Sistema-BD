#include "Hija_ModificarCliente.h"
#include <wx/msgdlg.h>
#include "string_conv.h"
#include <string>
using namespace std;
Hija_ModificarCliente::Hija_ModificarCliente(wxWindow *parent, BD *BaseDatos,int &f) : Base_ModificarCliente(parent), m_BaseDatos(BaseDatos), cual_p(f) {
	
	Cliente p = m_BaseDatos->VerCliente(cual_p);
		
	m_nombreC->SetValue( std_to_wx(p.VerNombre()));
	m_apellidoC->SetValue( std_to_wx(p.VerApellido()));
	m_telC->SetValue( std_to_wx(p.VerTelefono()));
	m_direccionC->SetValue( std_to_wx(p.VerDireccion()));
	m_localidadC->SetValue( std_to_wx(p.VerLocalidad()));
	m_emailC->SetValue( std_to_wx(p.VerEmail()));
	
}

void Hija_ModificarCliente::ClickAceptarCliente( wxCommandEvent& event )  {
	
	
	
	string nom = wx_to_std (m_nombreC->GetValue());
	string ape = wx_to_std (m_apellidoC->GetValue());
	string tel = wx_to_std (m_telC->GetValue());
	string dir = wx_to_std (m_direccionC->GetValue());
	string local = wx_to_std (m_localidadC->GetValue());
	string email = wx_to_std (m_emailC->GetValue());
	
	
	Cliente p = m_BaseDatos->VerCliente(cual_p);
	p.ModificarNombre(nom);
	p.ModificarApellido(ape);
	p.ModificarTelefono(tel);
	p.ModificarDireccion(dir);
	p.ModificarLocalidad(local);
	p.ModificarEmail(email);
	
	string errores = p.ValidarDatos();
	
	if (errores.empty()){
		m_BaseDatos->VerCliente(cual_p)=p;
		m_BaseDatos->Guardar_cliente();
		wxMessageBox("Modificacion Realizada");
		EndModal(1);
	}else {
		wxMessageBox(errores);
	}
}

void Hija_ModificarCliente::ClickCancerlarCliente( wxCommandEvent& event )  {
	EndModal(0);
}

Hija_ModificarCliente::~Hija_ModificarCliente() {
	
}

