#ifndef HIJA_PRINCIPAL_H
#define HIJA_PRINCIPAL_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_principal : public Base_principal {
	
private:
	
protected:
	void ClickAgregarProducto( wxCommandEvent& event )  override;
	void ClickModificarProducto( wxCommandEvent& event )  override;
	void ClickEliminarProducto( wxCommandEvent& event )  override;
	void ClickAgregarPedido( wxCommandEvent& event )  override;
	void ClickModificarPedido( wxCommandEvent& event )  override;
	void ClickEliminarPedido( wxCommandEvent& event )  override;
	void ClickAgregarCliente( wxCommandEvent& event )  override;
	void ClickModificarCliente( wxCommandEvent& event )  override;
	void ClickEliminarCliente( wxCommandEvent& event )  override;
	BD *m_BaseDatos;
public:
	void refrescarGrillaCliente();
	Hija_principal(BD *BaseDatos);
};

#endif

