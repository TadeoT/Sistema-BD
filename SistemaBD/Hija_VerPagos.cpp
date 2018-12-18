#include "Hija_VerPagos.h"
#include <sstream>
#include <string>
using namespace std;

Hija_VerPagos::Hija_VerPagos(wxWindow *parent, BD *BaseDatos) : Base_VerPagos(parent),m_BaseDatos(BaseDatos) {
	
	for (int i=m_BaseDatos->CantidadDatos_pago()-1;i>0;i--){
		int e=(m_BaseDatos->CantidadDatos_pago()-1) - i;
		Pago p = m_BaseDatos->VerPago(i);
		m_grillaPagos->AppendRows();
		
		stringstream ss_fecha("");
		ss_fecha<<p.Verdia()<<"/"<<p.Vermes()<<"/"<<p.Veranio();
		string s_fecha = ss_fecha.str();
		m_grillaPagos->SetCellValue(e,0,s_fecha);
		
		stringstream ss_dni("");
		ss_dni<<p.VerdniCliente();
		string s_dni = ss_dni.str();
		m_grillaPagos->SetCellValue(e,1,s_dni);
		
		stringstream ss_total("");
		ss_total<<"$ " <<p.Vertotal();
		string s_total = ss_total.str();
		m_grillaPagos->SetCellValue(e,2,s_total);
	}
	
	
}

void Hija_VerPagos::ClickCerrarPagos( wxCommandEvent& event )  {
	Close();
}

Hija_VerPagos::~Hija_VerPagos() {
	
}

