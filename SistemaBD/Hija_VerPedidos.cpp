#include "Hija_VerPedidos.h"
#include "Pedido.h"
#include <sstream>
#include <iostream>
#include "string_conv.h"
using namespace std;

Hija_VerPedidos::Hija_VerPedidos(wxWindow *parent, BD *BaseDatos,int &f) : Base_VerPedidos(parent), m_BaseDatos(BaseDatos),fila(f) {
		int e=0; float totalF=0;
	for (int i = m_BaseDatos->ComienzoPedido(f);i<(m_BaseDatos->ComienzoPedido(f)+m_BaseDatos->CantidadPedidosPorFactura(f));i++){
		
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
		
		totalF=p.Vertotal()+totalF;
		stringstream ss_total("");
		ss_total<<"$ " <<p.Vertotal();
		string s_total = ss_total.str();
		m_grillaPedidos->SetCellValue(e,6,s_total);
		
		e++;
	}
	stringstream ss_total("");
	ss_total<<"$"<<totalF;
	string s_total = ss_total.str();
	TotalFinalPedidos->SetValue( std_to_wx(s_total ));
	
}

Hija_VerPedidos::~Hija_VerPedidos() {
	
}

void Hija_VerPedidos::CerrarVerPedido( wxCommandEvent& event )  {
	Close();
}

