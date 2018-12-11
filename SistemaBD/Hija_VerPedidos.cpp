#include "Hija_VerPedidos.h"
#include "Pedido.h"
#include <sstream>
using namespace std;

Hija_VerPedidos::Hija_VerPedidos(wxWindow *parent, BD *BaseDatos) : Base_VerPedidos(parent), m_BaseDatos(BaseDatos) {
	
	for (int i = 0;i<m_BaseDatos->CantidadDatos_pedido();i++){
		Pedido &p = m_BaseDatos->VerPedido(i);
		m_grillaPedidos->AppendRows();
		
		stringstream ss_fecha("");
		ss_fecha<<p.Verdia()<<"/"<<p.Vermes()<<"/"<<p.Veranio();
		string s_fecha = ss_fecha.str();
		m_grillaPedidos->SetCellValue(i,0,s_fecha);
		
		stringstream ss_dni("");
		ss_dni<<p.VerdniCliente();
		string s_dni = ss_dni.str();
		m_grillaPedidos->SetCellValue(i,1,s_dni);
		
		stringstream ss_codigo("");
		ss_codigo<<p.VercodigoProducto();
		string s_codigo = ss_codigo.str();
		m_grillaPedidos->SetCellValue(i,2,s_codigo);
		
		int cat = p.VercategoriaVenta();
		string categoria;
		if(cat==1){categoria="Precio Distribuidora";}
		if(cat==2){categoria="Precio Profesional";}
		if(cat==3){categoria="Precio Publico";}
		m_grillaPedidos->SetCellValue(i,3,categoria);
		
		stringstream ss_cantidad("");
		ss_cantidad<<p.VerCantidad();
		string s_cantidad = ss_cantidad.str();
		m_grillaPedidos->SetCellValue(i,4,s_cantidad);
		
		stringstream ss_pagado("");
		ss_pagado<<p.Verpagado();
		string s_pagado = ss_pagado.str();
		m_grillaPedidos->SetCellValue(i,5,s_pagado);
		
		stringstream ss_deuda("");
		ss_deuda<<p.Verdeuda();
		string s_deuda = ss_deuda.str();
		m_grillaPedidos->SetCellValue(i,6,s_deuda);
		
		
		stringstream ss_total("");
		ss_total<<"$ " <<p.Vertotal();
		string s_total = ss_total.str();
		m_grillaPedidos->SetCellValue(i,7,s_total);
	}
	
}

Hija_VerPedidos::~Hija_VerPedidos() {
	
}

void Hija_VerPedidos::CerrarVerPedido( wxCommandEvent& event )  {
	Close();
}

