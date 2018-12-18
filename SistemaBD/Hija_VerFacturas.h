#ifndef HIJA_VERFACTURAS_H
#define HIJA_VERFACTURAS_H
#include "wxfb_project.h"
#include "BD.h"

class Hija_VerFacturas : public Base_VerFacturas {
	
private:
	BD *m_BaseDatos;
protected:
	void DobleClickFactura( wxGridEvent& event )  override;
	void ClickCerrarVerFacturas( wxCommandEvent& event )  override;
	void ClickVerFactura( wxCommandEvent& event )  override;
	
public:
	Hija_VerFacturas(wxWindow *parent,BD *BaseDatos);
	
};

#endif

