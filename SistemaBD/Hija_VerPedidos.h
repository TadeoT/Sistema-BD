#ifndef HIJA_VERPEDIDOS_H
#define HIJA_VERPEDIDOS_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_VerPedidos : public Base_VerPedidos {
	
private:
	BD *m_BaseDatos;
protected:
	
public:
	Hija_VerPedidos(wxWindow *parent,BD *BaseDatos);
	~Hija_VerPedidos();
};

#endif

