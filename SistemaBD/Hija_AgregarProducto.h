#ifndef HIJA_AGREGARPRODUCTO_H
#define HIJA_AGREGARPRODUCTO_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_AgregarProducto : public Base_AgregarProducto {
	
private:
	BD *m_BaseDatos;
protected:
	void ClickAceptarProducto( wxCommandEvent& event )  override;
	void ClickCancelarProducto( wxCommandEvent& event )  override;
	
public:
	Hija_AgregarProducto(wxWindow *parent,BD *BaseDatos);
	~Hija_AgregarProducto();
};

#endif

