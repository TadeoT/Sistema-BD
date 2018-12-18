#include "Hija_ModificarProducto.h"
#include "string_conv.h"
#include <sstream>
#include <wx/msgdlg.h>
using namespace std;

Hija_ModificarProducto::Hija_ModificarProducto(wxWindow *parent, BD *BaseDatos,int &f) : Base_ModificarProducto(parent), m_BaseDatos(BaseDatos), cual_p(f) {
	
	Producto p = m_BaseDatos->VerProducto(cual_p);
	
	MarcaP->SetValue(std_to_wx(p.VerMarca()));
	NombreP->SetValue(std_to_wx(p.VerNombre()));
	DescripcionP->SetValue(std_to_wx(p.VerDescripcion()));
	ClasificacionP->SetValue(std_to_wx(p.VerClasificacion()));
	ComposicionP->SetValue(std_to_wx(p.VerComposicion()));
	PresentacionP->SetValue(std_to_wx(p.VerPresentacion()));
	
	stringstream ss_stock("");
	ss_stock<<p.VerStock();
	string s_stock = ss_stock.str();
	StockP->SetValue(std_to_wx(s_stock));
	
	stringstream ss_precioDi("");
	ss_precioDi<<p.VerPrecio_di();
	string s_precioDi = ss_precioDi.str();
	Precio_diP->SetValue(std_to_wx(s_precioDi));
	
	stringstream ss_precioPr("");
	ss_precioPr<<p.VerPrecio_pr();
	string s_precioPr = ss_precioPr.str();
	Precio_prP->SetValue(std_to_wx(s_precioPr));
	
	stringstream ss_precioPu("");
	ss_precioPu<<p.VerPrecio_pu();
	string s_precioPu = ss_precioPu.str();
	Precio_puP->SetValue(std_to_wx(s_precioPu));
	
	
}

void Hija_ModificarProducto::ClickAceptarProducto( wxCommandEvent& event )  {
	string marca = wx_to_std (MarcaP->GetValue());
	string nombre = wx_to_std (NombreP->GetValue());
	string descripcion = wx_to_std (DescripcionP->GetValue());
	string clasificacion = wx_to_std (ClasificacionP->GetValue());
	string composicion = wx_to_std (ComposicionP->GetValue());
	string presentacion = wx_to_std (PresentacionP->GetValue());
	float preciodi = atof(Precio_diP->GetValue());
	float preciopr = atof(Precio_prP->GetValue());
	float preciopu = atof(Precio_puP->GetValue());
	int cantidad = atoi(StockP->GetValue());
	
	
	Producto p=m_BaseDatos->VerProducto(cual_p);
	p.ModificarMarca(marca);
	p.ModificarNombre(nombre);
	p.ModificarDescripcion(descripcion);
	p.ModificarClasificacion(clasificacion);
	p.ModificarComposicion(composicion);
	p.ModificarPresentacion(presentacion);
	p.ModificarStock(cantidad);
	p.ModificarPrecio(preciodi,preciopr,preciopu);
	
	
	string errores = p.ValidarDatos();
	
	if (errores.empty()){
		m_BaseDatos->VerProducto(cual_p)=p;
		m_BaseDatos->Guardar_producto();
		wxMessageBox("Modificacion Realizada");
		EndModal(1);
	}else {
		wxMessageBox(errores);
	}
}

void Hija_ModificarProducto::ClickCancelarProducto( wxCommandEvent& event )  {
	EndModal(0);
}

Hija_ModificarProducto::~Hija_ModificarProducto() {
	
}

