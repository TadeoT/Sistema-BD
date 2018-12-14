#include "Hija_AgregarPedido.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include <string>
#include <sstream>
using namespace std;

Hija_AgregarPedido::Hija_AgregarPedido(wxWindow *parent, BD *BaseDatos) : Base_AgregarPedido(parent), m_BaseDatos(BaseDatos) {
	
}

Hija_AgregarPedido::~Hija_AgregarPedido() {
	
}

void Hija_AgregarPedido::ClickAceptarPedido( wxCommandEvent& event )  {
	//DATOS EN COMUN CON TODOS LOS PEDIDOS
	int dni = atoi(DniClientePedido->GetValue());
	int categoria = atoi(CategoriaPedido->GetValue());
	int numeroFactura;
	float totalFinal=0;
	if(m_BaseDatos->CantidadDatos_pedido()==0){
		numeroFactura=1;}else {numeroFactura = m_BaseDatos->NumeroFacturaAnterior()+1;}
	
	
	string erroresTotates1="";
	string erroresTotates2="";
	
	
	//PEDIDO UNO POR UNO
	
	//Al menos teine que haber un Producto
		int codigo =  atoi(CodigoPedido1->GetValue());
		int cantidad = atoi(CantidadPedido1->GetValue());
		
		Pedido p(dni,codigo,0,cantidad,categoria,numeroFactura);
			
		string errores = p.ValidarDatos();
		
		if (errores.empty()){
			string err = m_BaseDatos->AgregarPedido(p);
			if(!err.empty()){
				erroresTotates1+=" Verifique Primer Producto, DNI o Categoria";
			}else{totalFinal= p.Vertotal() + totalFinal;}
		}else {
			erroresTotates2+=errores;
		}
	

	if(CodigoPedido2->GetValue()!=""){
		int codigo =  atoi(CodigoPedido2->GetValue());
		int cantidad = atoi(CantidadPedido2->GetValue());
		
		Pedido p(dni,codigo,0,cantidad,categoria,numeroFactura);
		
		string errores = p.ValidarDatos();
		
		if (errores.empty()){
			string err = m_BaseDatos->AgregarPedido(p);
			if(!err.empty()){
				erroresTotates1+=" Verifique Segundo Producto, DNI o Categoria";
			}else{totalFinal= p.Vertotal() + totalFinal;}
		}else {
			erroresTotates2+=errores;
		}
	}
	
	if(CodigoPedido3->GetValue()!=""){
		int codigo =  atoi(CodigoPedido3->GetValue());
		int cantidad = atoi(CantidadPedido3->GetValue());
		
		Pedido p(dni,codigo,0,cantidad,categoria,numeroFactura);
		
		string errores = p.ValidarDatos();
		
		if (errores.empty()){
			string err = m_BaseDatos->AgregarPedido(p);
			if(!err.empty()){
				erroresTotates1+=" Verifique Tercer Producto, DNI o Categoria";
			}else{totalFinal= p.Vertotal() + totalFinal;}
		}else {
			erroresTotates2+=errores;
		}
	}
	
	if(CodigoPedido4->GetValue()!=""){
		int codigo =  atoi(CodigoPedido4->GetValue());
		int cantidad = atoi(CantidadPedido4->GetValue());
		
		Pedido p(dni,codigo,0,cantidad,categoria,numeroFactura);
		
		string errores = p.ValidarDatos();
		
		if (errores.empty()){
			string err = m_BaseDatos->AgregarPedido(p);
			if(!err.empty()){
				erroresTotates1+=" Verifique Cuarto Producto, DNI o Categoria";
			}else{totalFinal= p.Vertotal() + totalFinal;}
		}else {
			erroresTotates2+=errores;
		}
	}
	
	if(CodigoPedido5->GetValue()!=""){
		int codigo =  atoi(CodigoPedido5->GetValue());
		int cantidad = atoi(CantidadPedido5->GetValue());
		
		Pedido p(dni,codigo,0,cantidad,categoria,numeroFactura);
		
		string errores = p.ValidarDatos();
		
		if (errores.empty()){
			string err = m_BaseDatos->AgregarPedido(p);
			if(!err.empty()){
				erroresTotates1+=" Verifique Quinto Producto, DNI o Categoria";
			}else{totalFinal= p.Vertotal() + totalFinal;}
		}else {
			erroresTotates2+=errores;
		}
	}
	
	if(CodigoPedido6->GetValue()!=""){
		int codigo =  atoi(CodigoPedido6->GetValue());
		int cantidad = atoi(CantidadPedido6->GetValue());
		
		Pedido p(dni,codigo,0,cantidad,categoria,numeroFactura);
		
		string errores = p.ValidarDatos();
		
		if (errores.empty()){
			string err = m_BaseDatos->AgregarPedido(p);
			if(!err.empty()){
				erroresTotates1+=" Verifique Sexto Producto, DNI o Categoria";
			}else{totalFinal= p.Vertotal() + totalFinal;}
		}else {
			erroresTotates2+=errores;
		}
	}
	if(CodigoPedido7->GetValue()!=""){
		int codigo =  atoi(CodigoPedido7->GetValue());
		int cantidad = atoi(CantidadPedido7->GetValue());
		
		Pedido p(dni,codigo,0,cantidad,categoria,numeroFactura);
		
		string errores = p.ValidarDatos();
		
		if (errores.empty()){
			string err = m_BaseDatos->AgregarPedido(p);
			if(!err.empty()){
				erroresTotates1+=" Verifique Septimo Producto, DNI o Categoria";
			}else{totalFinal= p.Vertotal() + totalFinal;}
		}else {
			erroresTotates2+=errores;
		}
	}
	

	if(erroresTotates1.empty() && erroresTotates2.empty()){
		
	m_BaseDatos->Guardar_pedido();
	m_BaseDatos->Guardar_cliente();
	m_BaseDatos->Guardar_producto();
	
	stringstream ss_total("");
	ss_total<<"Facturacion Realizada. Total :$ " <<totalFinal;
	string s_total = ss_total.str();
	wxMessageBox(s_total);
	EndModal(1);
	}else {
		m_BaseDatos->RecargarVectores();
		if(erroresTotates1.empty()&& (!erroresTotates2.empty())){
		wxMessageBox(erroresTotates2);
		}
		if(erroresTotates2.empty() && (!erroresTotates1.empty())){
			wxMessageBox(erroresTotates1);
		}
		if((!erroresTotates1.empty()) && (!erroresTotates2.empty())){
			string err=erroresTotates1+erroresTotates2;
			wxMessageBox(err);
		}
	}
}

void Hija_AgregarPedido::ClickCancelarPedido( wxCommandEvent& event )  {
	EndModal(0);
}


