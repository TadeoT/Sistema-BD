#include "Hija_AcercaDe.h"

Hija_AcercaDe::Hija_AcercaDe(wxWindow *parent) : Base_AcercaDe(parent) {
	
}

void Hija_AcercaDe::ClickCerrarAbout( wxCommandEvent& event )  {
	Close();
}

Hija_AcercaDe::~Hija_AcercaDe() {
	
}

