#ifndef HIJA_PRINCIPAL_H
#define HIJA_PRINCIPAL_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_principal : public Base_principal {
	
private:
	
protected:
	void OnClickVerProductos( wxCommandEvent& event )  override;
	BD *m_BaseDatos;
public:
	Hija_principal(BD *BaseDatos);
};

#endif

