#include "Hija_AgregarPedido.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include <string>
using namespace std;

Hija_AgregarPedido::Hija_AgregarPedido(wxWindow *parent, BD *BaseDatos) : Base_AgregarPedido(parent), m_BaseDatos(BaseDatos) {
	
}

Hija_AgregarPedido::~Hija_AgregarPedido() {
	
}

void Hija_AgregarPedido::ClickAceptarPedido( wxCommandEvent& event )  {
	
	int dni = atoi(DNIClientePedido->GetValue());
	int codigo = atoi(CodigoProductoPedido->GetValue());
	float pagado = atof(PagadoPedido->GetValue());
	int cantidad = atoi(CantidadPedido->GetValue());
	int categoria = atoi(CategoriaPedido->GetValue());
	
	Pedido p(dni,codigo,pagado,cantidad,categoria);
	
	string errores = p.ValidarDatos();
	
	if (errores.empty()){
		string err = m_BaseDatos->AgregarPedido(p);
		m_BaseDatos->Guardar_pedido();
		m_BaseDatos->Guardar_cliente();
		m_BaseDatos->Guardar_producto();
		wxMessageBox(err);
		EndModal(1);
	}else {
		wxMessageBox(errores);
	}
	
}

void Hija_AgregarPedido::ClickCancelarPedido( wxCommandEvent& event )  {
	EndModal(0);
}

