#include "Hija_VerPedidos.h"
#include "Pedido.h"
#include <sstream>
using namespace std;

Hija_VerPedidos::Hija_VerPedidos(wxWindow *parent, BD *BaseDatos) : Base_VerPedidos(parent), m_BaseDatos(BaseDatos) {
	
	for (int i = 0;i<m_BaseDatos->CantidadDatos_pedido();i++){
		Pedido &p = m_BaseDatos->VerPedido(i);
		m_grillaPedidos->AppendRows();
			
		stringstream ss_total("");
		ss_total<<"$ " <<p.Vertotal()<<endl;
		string s_total = ss_total.str();
		m_grillaPedidos->SetCellValue(i,6,s_total);
			
		/*m_grillaProductos->SetCellValue(i,1,);*/
	}
	
}

Hija_VerPedidos::~Hija_VerPedidos() {
	
}

void Hija_VerPedidos::CerrarVerPedido( wxCommandEvent& event )  {
	Close();
}

