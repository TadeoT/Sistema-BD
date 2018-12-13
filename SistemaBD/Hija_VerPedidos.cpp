#include "Hija_VerPedidos.h"
#include "Pedido.h"
#include <sstream>
using namespace std;

Hija_VerPedidos::Hija_VerPedidos(wxWindow *parent, BD *BaseDatos) : Base_VerPedidos(parent), m_BaseDatos(BaseDatos) {
	
	for (int i = m_BaseDatos->CantidadDatos_pedido() - 1 ;i>=0;i--){
		int e=(m_BaseDatos->CantidadDatos_pedido()-1) - i;
		
		Pedido &p = m_BaseDatos->VerPedido(i);
		m_grillaPedidos->AppendRows();
		
		stringstream ss_fecha("");
		ss_fecha<<p.Verdia()<<"/"<<p.Vermes()<<"/"<<p.Veranio();
		string s_fecha = ss_fecha.str();
		m_grillaPedidos->SetCellValue(e,0,s_fecha);
		
		stringstream ss_dni("");
		ss_dni<<p.VerdniCliente();
		string s_dni = ss_dni.str();
		m_grillaPedidos->SetCellValue(e,1,s_dni);
		
		stringstream ss_factura("");
		ss_factura<<p.VernumeroFactura();
		string s_factura = ss_factura.str();
		m_grillaPedidos->SetCellValue(e,2,s_factura);
		
		stringstream ss_codigo("");
		ss_codigo<<p.VercodigoProducto();
		string s_codigo = ss_codigo.str();
		m_grillaPedidos->SetCellValue(e,3,s_codigo);
		
		int cat = p.VercategoriaVenta();
		string categoria;
		if(cat==1){categoria="Precio Distribuidora";}
		if(cat==2){categoria="Precio Profesional";}
		if(cat==3){categoria="Precio Publico";}
		m_grillaPedidos->SetCellValue(e,4,categoria);
		
		stringstream ss_cantidad("");
		ss_cantidad<<p.VerCantidad();
		string s_cantidad = ss_cantidad.str();
		m_grillaPedidos->SetCellValue(e,5,s_cantidad);
		
		
		stringstream ss_total("");
		ss_total<<"$ " <<p.Vertotal();
		string s_total = ss_total.str();
		m_grillaPedidos->SetCellValue(e,6,s_total);
	}
	
}

Hija_VerPedidos::~Hija_VerPedidos() {
	
}

void Hija_VerPedidos::CerrarVerPedido( wxCommandEvent& event )  {
	Close();
}

