#ifndef HIJA_MODIFICARCLIENTE_H
#define HIJA_MODIFICARCLIENTE_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_ModificarCliente : public Base_ModificarCliente {
	
private:
	BD *m_BaseDatos;
	int cual_p;
protected:
	void ClickAceptarCliente( wxCommandEvent& event )  override;
	void ClickCancerlarCliente( wxCommandEvent& event )  override;
	
public:
	Hija_ModificarCliente(wxWindow *parent,BD *BaseDatos,int &f);
	~Hija_ModificarCliente();
};

#endif

