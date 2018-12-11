#ifndef HIJA_AGREGARPEDIDO_H
#define HIJA_AGREGARPEDIDO_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_AgregarPedido : public Base_AgregarPedido {
	
private:
	BD *m_BaseDatos;
protected:
	void ClickAceptarPedido( wxCommandEvent& event )  override;
	void ClickCancelarPedido( wxCommandEvent& event )  override;
	
public:
	Hija_AgregarPedido(wxWindow *parent,BD *BaseDatos);
	~Hija_AgregarPedido();
};

#endif

