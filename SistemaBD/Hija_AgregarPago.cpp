#include "Hija_AgregarPago.h"
#include <string>
#include <wx/msgdlg.h>
using namespace std;

Hija_AgregarPago::Hija_AgregarPago(wxWindow *parent, BD *BaseDatos) : Base_AgregarPago(parent),m_BaseDatos(BaseDatos) {
	
}

void Hija_AgregarPago::ClickAceptarPago( wxCommandEvent& event )  {
	int dni = atoi(dniClientePago->GetValue());
	float total = atof(montoPago->GetValue());
	
	Pago p(dni,total);
	string errores = p.ValidarDatos();
	
	if (errores.empty()){
		string err = m_BaseDatos->AgregarPago(p);
		m_BaseDatos->Guardar_cliente();
		m_BaseDatos->Guardar_pago();
		wxMessageBox(err);
		EndModal(1);
	}else {
		wxMessageBox(errores);
	}
	
}

void Hija_AgregarPago::ClickCancelarPago( wxCommandEvent& event )  {
	EndModal(0);
}

Hija_AgregarPago::~Hija_AgregarPago() {
	
}

