#ifndef HIJA_VERPEDIDOS_H
#define HIJA_VERPEDIDOS_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_VerPedidos : public Base_VerPedidos {
	
private:
	BD *m_BaseDatos;
	int fila;
protected:
	void CerrarVerPedido( wxCommandEvent& event )  override;
	
public:
	Hija_VerPedidos(wxWindow *parent,BD *BaseDatos,int &f);
	~Hija_VerPedidos();
};

#endif

