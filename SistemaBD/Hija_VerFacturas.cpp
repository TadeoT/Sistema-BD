#include "Hija_VerFacturas.h"
#include "Hija_VerPedidos.h"
#include <sstream>
#include <string>
using namespace std;

Hija_VerFacturas::Hija_VerFacturas(wxWindow *parent, BD *BaseDatos) : Base_VerFacturas(parent), m_BaseDatos(BaseDatos) {
	for (int i = m_BaseDatos->NumeroFacturaAnterior() ;i>0;i--){
		int e=(m_BaseDatos->NumeroFacturaAnterior()) - i;
		
		m_grillaFacturas->AppendRows();
		Pedido p = m_BaseDatos->VerFactura(i);
		
		stringstream ss_fecha("");
		ss_fecha<<p.Verdia()<<"/"<<p.Vermes()<<"/"<<p.Veranio();
		string s_fecha = ss_fecha.str();
		m_grillaFacturas->SetCellValue(e,0,s_fecha);
		
		stringstream ss_factura("");
		ss_factura<<p.VernumeroFactura();
		string s_factura = ss_factura.str();
		m_grillaFacturas->SetCellValue(e,1,s_factura);
		
		stringstream ss_dni("");
		ss_dni<<p.VerdniCliente();
		string s_dni = ss_dni.str();
		m_grillaFacturas->SetCellValue(e,2,s_dni);
	}
}

void Hija_VerFacturas::ClickVerFactura( wxCommandEvent& event )  {
	int f =m_BaseDatos->NumeroFacturaAnterior() - m_grillaFacturas->GetGridCursorRow();
	Hija_VerPedidos *win = new Hija_VerPedidos(this,m_BaseDatos,f);
	win->ShowModal();
}


void Hija_VerFacturas::ClickCerrarVerFacturas( wxCommandEvent& event )  {
	Close();
}

