#include "Hija_VerFacturas.h"
#include "Hija_VerPedidos.h"
using namespace std;

Hija_VerFacturas::Hija_VerFacturas(wxWindow *parent, BD *BaseDatos) : Base_VerFacturas(parent), m_BaseDatos(BaseDatos) {
	for (int i = m_BaseDatos->NumeroFacturaAnterior() ;i>0;i--){
		m_grillaFacturas->AppendRows();
		
	}
}

void Hija_VerFacturas::ClickVerFactura( wxCommandEvent& event )  {
	Hija_VerPedidos *win = new Hija_VerPedidos(this,m_BaseDatos);
	win->ShowModal();
}


void Hija_VerFacturas::ClickCerrarVerFacturas( wxCommandEvent& event )  {
	Close();
}

