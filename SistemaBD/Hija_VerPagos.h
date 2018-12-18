#ifndef HIJA_VERPAGOS_H
#define HIJA_VERPAGOS_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_VerPagos : public Base_VerPagos {
	
private:
	BD *m_BaseDatos;
protected:
	void ClickCerrarPagos( wxCommandEvent& event )  override;
	
public:
	Hija_VerPagos(wxWindow *parent,BD *BaseDatos);
	~Hija_VerPagos();
};

#endif

