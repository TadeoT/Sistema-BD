#include "Hija_AgregarProducto.h"
#include <wx/textctrl.h>
#include <string>
#include "string_conv.h"
#include <wx/msgdlg.h>
using namespace std;

Hija_AgregarProducto::Hija_AgregarProducto(wxWindow *parent, BD *BaseDatos) : Base_AgregarProducto(parent), m_BaseDatos(BaseDatos) {
	
}

void Hija_AgregarProducto::ClickAceptarProducto( wxCommandEvent& event )  {
	
	string marca = wx_to_std (MarcaP->GetValue());
	string nombre = wx_to_std (NombreP->GetValue());
	string descripcion = wx_to_std (DescripcionP->GetValue());
	string clasificacion = wx_to_std (ClasificacionP->GetValue());
	string composicion = wx_to_std (ComposicionP->GetValue());
	string presentacion = wx_to_std (PresentacionP->GetValue());
	int codigo = atoi(CodigoP->GetValue());
	float preciodi = atof(Precio_diP->GetValue());
	float preciopr = atof(Precio_prD->GetValue());
	float preciopu = atof(Precio_puD->GetValue());
	int cantidad = atoi(StockP->GetValue());
	
	
	Producto p(marca,nombre,descripcion,clasificacion,composicion,presentacion,codigo,preciodi,preciopr,preciopu,cantidad);
	
	string errores = p.ValidarDatos();
	
	if (errores.empty()){
		string err = m_BaseDatos->AgregarProducto(p);
		m_BaseDatos->Guardar_producto();
		wxMessageBox(err);
		EndModal(1);
	}else {
		wxMessageBox(errores);
	}
}

void Hija_AgregarProducto::ClickCancelarProducto( wxCommandEvent& event )  {
	EndModal(0);
}

Hija_AgregarProducto::~Hija_AgregarProducto() {
	
}

