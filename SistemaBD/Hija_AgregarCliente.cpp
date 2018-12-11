#include "Hija_AgregarCliente.h"
#include <string>
#include "string_conv.h"
#include <wx/msgdlg.h>
using namespace std;

Hija_AgregarCliente::Hija_AgregarCliente(wxWindow *parent, BD *BaseDatos) : Base_AgregarCliente(parent), m_BaseDatos(BaseDatos) {
	
}

void Hija_AgregarCliente::ClickAceptarCliente( wxCommandEvent& event )  {
	string nom = wx_to_std (m_nombreC->GetValue());
	string ape = wx_to_std (m_apellidoC->GetValue());
	string tel = wx_to_std (m_telC->GetValue());
	string dir = wx_to_std (m_direccionC->GetValue());
	string local = wx_to_std (m_localidadC->GetValue());
	string email = wx_to_std (m_emailC->GetValue());
	float saldo=0;
	int dni = atoi(m_dniC->GetValue());
	
	Cliente p(nom,ape,tel,dir,local,email,dni,saldo);
	
	string errores = p.ValidarDatos();
	
	if (errores.empty()){
	string repetido = m_BaseDatos->AgregarCliente(p);
	m_BaseDatos->Guardar_cliente();
	wxMessageBox(repetido);
	EndModal(1);
	}else {
		wxMessageBox(errores);
	}
}

void Hija_AgregarCliente::ClickCancerlarCliente( wxCommandEvent& event )  {
	EndModal(0);
}

Hija_AgregarCliente::~Hija_AgregarCliente() {
	
}

