#ifndef HIJA_PRINCIPAL_H
#define HIJA_PRINCIPAL_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_principal : public Base_principal {
	
private:
	
protected:
	void ClickMenuAgregarPedido( wxCommandEvent& event )  override;
	void ClickMenuVerPedido( wxCommandEvent& event )  override;
	void ClickAgregarProducto( wxCommandEvent& event )  override;
	void ClickModificarProducto( wxCommandEvent& event )  override;
	void ClickEliminarProducto( wxCommandEvent& event )  override;
	void ClickAgregarCliente( wxCommandEvent& event )  override;
	void ClickModificarCliente( wxCommandEvent& event )  override;
	void ClickEliminarCliente( wxCommandEvent& event )  override;
	BD *m_BaseDatos;
public:
	void refrescarGrillaCliente();
	void refrescarGrillaProducto();
	void refrescarGrillaPedido();
	Hija_principal(BD *BaseDatos);
};

#endif

