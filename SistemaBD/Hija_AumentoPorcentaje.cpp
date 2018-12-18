#include "Hija_AumentoPorcentaje.h"
#include <string>
#include <wx/msgdlg.h>
using namespace std;

Hija_AumentoPorcentaje::Hija_AumentoPorcentaje(wxWindow *parent, BD *BaseDatos) : Base_AumentoPorcentaje(parent),m_BaseDatos(BaseDatos) {
	
}

void Hija_AumentoPorcentaje::ClickAceptarAumento( wxCommandEvent& event )  {
	float porcentaje = atof(PorcentajeAumento->GetValue());
	
	m_BaseDatos->AumentarPorPorcentajeProductos(porcentaje);
	
	
	EndModal(1);
}

void Hija_AumentoPorcentaje::ClickCancelarAumento( wxCommandEvent& event )  {
	EndModal(0);
}

Hija_AumentoPorcentaje::~Hija_AumentoPorcentaje() {
	
}

