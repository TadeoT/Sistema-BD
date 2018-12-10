#include <wx/image.h>
#include "Application.h"
#include "Hija_principal.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	m_BaseDatos = new BD ("datosClientes.dat","datosProductos.dat","datosPedidos.dat");
	//wxInitAllImageHandlers();
	Hija_principal *win = new Hija_principal(m_BaseDatos);
	win->Show();
	return true;
}

