#ifndef HIJA_ACERCADE_H
#define HIJA_ACERCADE_H
#include "wxfb_project.h"

class Hija_AcercaDe : public Base_AcercaDe {
	
private:
	
protected:
	void ClickCerrarAbout( wxCommandEvent& event )  override;
	
public:
	Hija_AcercaDe(wxWindow *parent);
	~Hija_AcercaDe();
};

#endif

