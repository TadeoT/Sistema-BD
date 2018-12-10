#include "Hija_principal.h"
#include <wx/grid.h>
#include "Hija_AgregarCliente.h"
#include <wx/msgdlg.h>

Hija_principal::Hija_principal(BD *BaseDatos) : Base_principal(NULL), m_BaseDatos(BaseDatos)
{
	refrescarGrillaCliente();
	
	
	for (int i =0; i<m_BaseDatos->CantidadDatos_producto();i++){
		Producto &p = m_BaseDatos->VerProducto(i);
		m_grillaProductos->AppendRows();
		m_grillaProductos->SetCellValue(i,1,p.VerMarca());
		m_grillaProductos->SetCellValue(i,2,p.VerNombre());
		m_grillaProductos->SetCellValue(i,3,p.VerPresentacion());
		//		m_grillaClientes->SetCellValue(i,1,c.VerDni());
		//		m_grillaClientes->SetCellValue(i,2,c.VerSaldo());
	}
}





void Hija_principal::ClickAgregarCliente( wxCommandEvent& event )  {
	Hija_AgregarCliente *win = new Hija_AgregarCliente(this,m_BaseDatos);
	if (win->ShowModal()==1){
		refrescarGrillaCliente();
	}
}

void Hija_principal::ClickModificarCliente( wxCommandEvent& event )  {
	event.Skip();
}

void Hija_principal::ClickEliminarCliente( wxCommandEvent& event )  {
	int f = m_grillaClientes->GetGridCursorRow();
	m_BaseDatos->EliminarCliente(f);
	int x = wxMessageBox("Esta Seguro?","Advertencia",wxYES_NO|wxICON_QUESTION);
	if (x==wxYES){
	m_BaseDatos->Guardar_cliente();
	refrescarGrillaCliente();
	}
}

void Hija_principal::ClickAgregarProducto( wxCommandEvent& event )  {
	event.Skip();
}

void Hija_principal::ClickModificarProducto( wxCommandEvent& event )  {
	event.Skip();
}

void Hija_principal::ClickEliminarProducto( wxCommandEvent& event )  {
	event.Skip();
}

void Hija_principal::ClickAgregarPedido( wxCommandEvent& event )  {
	event.Skip();
}

void Hija_principal::ClickModificarPedido( wxCommandEvent& event )  {
	event.Skip();
}

void Hija_principal::ClickEliminarPedido( wxCommandEvent& event )  {
	event.Skip();
}
void Hija_principal::refrescarGrillaCliente(){
	if(m_grillaClientes->GetNumberRows()!=0){
		m_grillaClientes->DeleteRows(0,m_grillaClientes->GetNumberRows());
	}
	for (int i =0; i<m_BaseDatos->CantidadDatos_cliente();i++){
		Cliente &c = m_BaseDatos->VerCliente(i);
		m_grillaClientes->AppendRows();
		m_grillaClientes->SetCellValue(i,0,c.VerApellido()+", "+c.VerNombre());
		//		m_grillaClientes->SetCellValue(i,1,c.VerDni());
		//		m_grillaClientes->SetCellValue(i,2,c.VerSaldo());
	}
}

