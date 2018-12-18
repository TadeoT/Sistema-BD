#ifndef HIJA_MODIFICARPRODUCTO_H
#define HIJA_MODIFICARPRODUCTO_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_ModificarProducto : public Base_ModificarProducto {
	
private:
	BD *m_BaseDatos;
	int cual_p;
protected:
	void ClickAceptarProducto( wxCommandEvent& event )  override;
	void ClickCancelarProducto( wxCommandEvent& event )  override;
	
public:
	Hija_ModificarProducto(wxWindow *parent,BD *BaseDatos,int &f);
	~Hija_ModificarProducto();
};

#endif

