#include "Hija_principal.h"
#include <wx/grid.h>
#include "Hija_AgregarCliente.h"
#include <wx/msgdlg.h>
#include <sstream>
#include <string>
#include "Hija_ModificarCliente.h"
#include "Hija_AgregarPedido.h"
#include "Hija_VerPedidos.h"
#include "Hija_AgregarProducto.h"
#include <wx/icon.h>
#include "Hija_VerFacturas.h"
#include "Hija_ModificarProducto.h"
#include "string_conv.h"
using namespace std;

Hija_principal::Hija_principal(BD *BaseDatos) : Base_principal(NULL), m_BaseDatos(BaseDatos)
{
	
	SetIcon(wxIcon("icono.ico"));
	
	refrescarGrillaCliente();
	refrescarGrillaProducto();
	
}





void Hija_principal::ClickAgregarCliente( wxCommandEvent& event )  {
	Hija_AgregarCliente *win = new Hija_AgregarCliente(this,m_BaseDatos);
	if (win->ShowModal()==1){
		refrescarGrillaCliente();
	}
}

void Hija_principal::ClickModificarCliente( wxCommandEvent& event )  {
	int f = m_grillaClientes->GetGridCursorRow();
	Hija_ModificarCliente *win= new Hija_ModificarCliente(this,m_BaseDatos,f);
	if (win->ShowModal()==1){
		refrescarGrillaCliente();
	}
}

void Hija_principal::ClickEliminarCliente( wxCommandEvent& event )  {
	int f = m_grillaClientes->GetGridCursorRow();
	int x = wxMessageBox("Esta Seguro?","Advertencia",wxYES_NO|wxICON_QUESTION);
	if (x==wxYES){
	m_BaseDatos->EliminarCliente(f);
	m_BaseDatos->Guardar_cliente();
	refrescarGrillaCliente();
	}
}

void Hija_principal::ClickAgregarProducto( wxCommandEvent& event )  {
	Hija_AgregarProducto *win = new Hija_AgregarProducto (this,m_BaseDatos);
	if(win->ShowModal()==1){
		refrescarGrillaProducto();
	}
}

void Hija_principal::ClickModificarProducto( wxCommandEvent& event )  {
	int f = m_grillaProductos->GetGridCursorRow();
	Hija_ModificarProducto *win= new Hija_ModificarProducto(this,m_BaseDatos,f);
	if (win->ShowModal()==1){
		refrescarGrillaProducto();
	}
}

void Hija_principal::ClickEliminarProducto( wxCommandEvent& event )  {
	int f = m_grillaProductos->GetGridCursorRow();
	int x = wxMessageBox("Esta Seguro?","Advertencia",wxYES_NO|wxICON_QUESTION);
	if (x==wxYES){
		m_BaseDatos->EliminarProducto(f);
		m_BaseDatos->Guardar_producto();
		refrescarGrillaCliente();
	}
}

void Hija_principal::refrescarGrillaCliente(){
	if(m_grillaClientes->GetNumberRows()!=0){
		m_grillaClientes->DeleteRows(0,m_grillaClientes->GetNumberRows());
	}
	for (int i =0; i<m_BaseDatos->CantidadDatos_cliente();i++){
		Cliente &c = m_BaseDatos->VerCliente(i);
		m_grillaClientes->AppendRows();
		m_grillaClientes->SetCellValue(i,1,c.VerApellido()+", "+c.VerNombre());
		m_grillaClientes->SetCellValue(i,2,c.VerTelefono());
		m_grillaClientes->SetCellValue(i,3,c.VerDireccion());
		m_grillaClientes->SetCellValue(i,4,c.VerEmail());
		
		stringstream ss_dni("");
		ss_dni <<c.VerDni()<<endl;
		string s_dni = ss_dni.str();
		m_grillaClientes->SetCellValue(i,0,s_dni);
		
		stringstream ss_saldo("");
		ss_saldo<<"$ " <<c.VerSaldo()<<endl;
		string s_saldo = ss_saldo.str();
		m_grillaClientes->SetCellValue(i,5,s_saldo);
		
	}
}
void Hija_principal::refrescarGrillaProducto(){
	if(m_grillaProductos->GetNumberRows()!=0){
		m_grillaProductos->DeleteRows(0,m_grillaProductos->GetNumberRows());
	}
	for (int i =0; i<m_BaseDatos->CantidadDatos_producto();i++){
		Producto &p = m_BaseDatos->VerProducto(i);
		m_grillaProductos->AppendRows();
		m_grillaProductos->SetCellValue(i,1,p.VerMarca());
		m_grillaProductos->SetCellValue(i,2,p.VerNombre());
		m_grillaProductos->SetCellValue(i,4,p.VerPresentacion());
		m_grillaProductos->SetCellValue(i,3,p.VerClasificacion());
		
		stringstream ss_codigo("");
		ss_codigo<<p.VerCodigo()<<endl;
		string s_codigo = ss_codigo.str();
		m_grillaProductos->SetCellValue(i,0,s_codigo);
		
		stringstream ss_precioD("");
		ss_precioD<<"$ " <<p.VerPrecio_di()<<endl;
		string s_precioD = ss_precioD.str();
		m_grillaProductos->SetCellValue(i,5,s_precioD);
		
		stringstream ss_precioPR("");
		ss_precioPR<<"$ " <<p.VerPrecio_pr()<<endl;
		string s_precioPR = ss_precioPR.str();
		m_grillaProductos->SetCellValue(i,6,s_precioPR);
		
		stringstream ss_precioPU("");
		ss_precioPU<<"$ " <<p.VerPrecio_pu()<<endl;
		string s_precioPU = ss_precioPU.str();
		m_grillaProductos->SetCellValue(i,7,s_precioPU);
		
		stringstream ss_stock("");
		ss_stock <<p.VerStock()<<endl;
		string s_stock = ss_stock.str();
		m_grillaProductos->SetCellValue(i,8,s_stock);
		
		//		m_grillaClientes->SetCellValue(i,2,c.VerSaldo());
	}
}


void Hija_principal::ClickMenuAgregarPedido( wxCommandEvent& event )  {
	Hija_AgregarPedido *win = new Hija_AgregarPedido(this,m_BaseDatos);
	if (win->ShowModal()==1){
		refrescarGrillaCliente();
		refrescarGrillaProducto();
	}
}

void Hija_principal::ClickMenuVerPedido( wxCommandEvent& event )  {
	Hija_VerFacturas *win = new Hija_VerFacturas(this,m_BaseDatos);
	win->ShowModal();
}

void Hija_principal::OnCambiaTamanio( wxSizeEvent& event )  {
	event.Skip();
}

void Hija_principal::ClickBuscarCliente( wxCommandEvent& event )  {
	// buscar desde la fila actual
	int fila_actual = m_grillaClientes->GetGridCursorRow();
	if (m_grillaClientes->GetSelectedRows().GetCount()==0) fila_actual=-1;
	int res=m_BaseDatos->BuscarApellidoYNombre( wx_to_std(m_busquedadCliente->GetValue()), fila_actual+1 );
	// si no encontro buscar otra vez desde el principio
	if (res==NO_SE_ENCUENTRA) 
		res=m_BaseDatos->BuscarApellidoYNombre( wx_to_std(m_busquedadCliente->GetValue()), 0 );
	if (res==NO_SE_ENCUENTRA) // si no hay ninguna coincidencia
		wxMessageBox("No se encontraron coincidencias");
	else {
		m_grillaClientes->SetGridCursor(res,0); // seleccionar
		m_grillaClientes->SelectRow(res); // seleccionar
	}
}

void Hija_principal::ClickBuscarProducto( wxCommandEvent& event )  {
	// buscar desde la fila actual
	int fila_actual = m_grillaClientes->GetGridCursorRow();
	if (m_grillaProductos->GetSelectedRows().GetCount()==0) fila_actual=-1;
	int res=m_BaseDatos->BuscarMarcaYNombre( wx_to_std(m_busquedadProducto->GetValue()), fila_actual+1 );
	// si no encontro buscar otra vez desde el principio
	if (res==NO_SE_ENCUENTRA) 
		res=m_BaseDatos->BuscarMarcaYNombre( wx_to_std(m_busquedadProducto->GetValue()), 0 );
	if (res==NO_SE_ENCUENTRA) // si no hay ninguna coincidencia
		wxMessageBox("No se encontraron coincidencias");
	else {
		m_grillaProductos->SetGridCursor(res,0); // seleccionar
		m_grillaProductos->SelectRow(res); // seleccionar
	}
	
}


