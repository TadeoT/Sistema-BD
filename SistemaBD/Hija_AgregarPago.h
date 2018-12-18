#ifndef HIJA_AGREGARPAGO_H
#define HIJA_AGREGARPAGO_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_AgregarPago : public Base_AgregarPago {
	
//private:
	BD *m_BaseDatos;
protected:
	void ClickAceptarPago( wxCommandEvent& event )  override;
	void ClickCancelarPago( wxCommandEvent& event )  override;
	
public:
	Hija_AgregarPago(wxWindow *parent,BD *BaseDatos);
	~Hija_AgregarPago();
};

#endif

