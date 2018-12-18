#ifndef HIJA_AUMENTOPORCENTAJE_H
#define HIJA_AUMENTOPORCENTAJE_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_AumentoPorcentaje : public Base_AumentoPorcentaje {
	
private:
	BD *m_BaseDatos;
protected:
	void ClickAceptarAumento( wxCommandEvent& event )  override;
	void ClickCancelarAumento( wxCommandEvent& event )  override;
	
public:
	Hija_AumentoPorcentaje(wxWindow *parent,BD *BaseDatos);
	~Hija_AumentoPorcentaje();
};

#endif

