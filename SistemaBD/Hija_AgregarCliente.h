#ifndef HIJA_AGREGARCLIENTE_H
#define HIJA_AGREGARCLIENTE_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_AgregarCliente : public Base_AgregarCliente {
	
private:
	BD *m_BaseDatos;
protected:
	void ClickAceptarCliente( wxCommandEvent& event )  override;
	void ClickCancerlarCliente( wxCommandEvent& event )  override;
	
public:
	Hija_AgregarCliente(wxWindow *parent,BD *BaseDatos);
	~Hija_AgregarCliente();
};

#endif

