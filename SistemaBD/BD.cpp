/**
* @file BD.cpp
* @brief Declaraciones de todo lo necesario para trabajar con la clase BD
**/
#include <fstream>
#include <algorithm>
#include "BD.h"
#include "Utils.h"
#include <iostream>
using namespace std;

BD::BD(std::string a_nombre_archivo_cliente,std::string a_nombre_archivo_producto,std::string a_nombre_archivo_pedido) {
	nombre_archivo_cliente = a_nombre_archivo_cliente;
	std::ifstream archivo_cliente (nombre_archivo_cliente.c_str(),std::ios::binary|std::ios::ate);
	if (archivo_cliente.is_open()) {
		int tamanio_archivo = archivo_cliente.tellg();
		int cantidad_clientes = tamanio_archivo/sizeof(registro_Cliente);
		arregloCliente.resize(cantidad_clientes);
		archivo_cliente.seekg(0,std::ios::beg);
		for (int i=0;i<cantidad_clientes;i++)
			arregloCliente[i].LeerDesdeBinario(archivo_cliente);
		archivo_cliente.close();
	}
	nombre_archivo_producto=a_nombre_archivo_producto;
	std::ifstream archivo_producto (nombre_archivo_producto.c_str(),std::ios::binary|std::ios::ate);
	if (archivo_producto.is_open()) {
		int tamanio_archivo = archivo_producto.tellg();
		int cantidad_productos = tamanio_archivo/sizeof(registro_Producto);
		arregloProducto.resize(cantidad_productos);
		archivo_producto.seekg(0,std::ios::beg);
		for (int i=0;i<cantidad_productos;i++)
			arregloProducto[i].LeerDesdeBinario(archivo_producto);
		archivo_producto.close();
	}
	nombre_archivo_pedido=a_nombre_archivo_pedido;
	std::ifstream archivo_pedido (nombre_archivo_pedido.c_str(),std::ios::binary|std::ios::ate);
	if (archivo_pedido.is_open()) {
		int tamanio_archivo = archivo_pedido.tellg();
		int cantidad_pedidos = tamanio_archivo/sizeof(registro_Pedido);
		arregloPedido.resize(cantidad_pedidos);
		archivo_pedido.seekg(0,std::ios::beg);
		for (int i=0;i<cantidad_pedidos;i++)
			arregloPedido[i].LeerDesdeBinario(archivo_pedido);
		archivo_pedido.close();
	}
}

bool BD::Guardar_cliente() {
	std::ofstream archivo_cliente(nombre_archivo_cliente.c_str(),std::ios::binary|std::ios::trunc);
	if (!archivo_cliente.is_open()) return false;
	int cantidad_Clientes = CantidadDatos_cliente();
	for (int i=0;i<cantidad_Clientes;i++)
		arregloCliente[i].GuardarEnBinario(archivo_cliente);
	archivo_cliente.close();
	return true;
}
bool BD::Guardar_producto(){
	std::ofstream archivo_producto(nombre_archivo_producto.c_str(),std::ios::binary|std::ios::trunc);
	if (!archivo_producto.is_open()) return false;
	int cantidad_Producto = CantidadDatos_producto();
	for (int i=0;i<cantidad_Producto;i++)
		arregloProducto[i].GuardarEnBinario(archivo_producto);
	archivo_producto.close();
	return true;
}
bool BD::Guardar_pedido(){
	std::ofstream archivo_pedido(nombre_archivo_pedido.c_str(),std::ios::binary|std::ios::trunc);
	if (!archivo_pedido.is_open()) return false;
	int cantidad_Pedido = CantidadDatos_pedido();
	for (int i=0;i<cantidad_Pedido;i++)
		arregloPedido[i].GuardarEnBinario(archivo_pedido);
	archivo_pedido.close();
	return true;
}

//Cliente &BD::operator[](int i) {
	//return arregloCliente[i];
//}
//Producto &BD::operator[](int i){ //VER    ACAA!!!!!!!!!!!!!!!!!!!!!
	//return arregloProducto[i];
//}

Cliente &BD::VerCliente(int i) {
	return arregloCliente[i];
}
Producto &BD::VerProducto(int i){
	return arregloProducto[i];
}
Pedido &BD::VerPedido(int i){
	return arregloPedido[i];
}

int BD::CantidadDatos_cliente() {
	return arregloCliente.size();
}
int BD::CantidadDatos_producto(){
	return arregloProducto.size();
}
int BD::CantidadDatos_pedido(){
	return arregloPedido.size();
}
int BD::NumeroFacturaAnterior(){
	return arregloPedido[arregloPedido.size()-1].VernumeroFactura();
}

std::string BD::AgregarCliente(const Cliente &p) {
	int dni = p.VerDni();
	auto it =find_if(arregloCliente.begin(),arregloCliente.end(),[&dni](const Cliente& c){ return c.VerDni() == dni;});

	if(it == arregloCliente.end() && dni>1){
		arregloCliente.push_back(p);
		return "Cliente Ingresado";
	}else return "Ya existe el DNI ingresado, Verifique DNI";
}


std::string BD::AgregarProducto(const Producto &p){
	int codigo = p.VerCodigo();
	auto ut =find_if(arregloProducto.begin(),arregloProducto.end(),[&codigo](const Producto& p){ return p.VerCodigo() == codigo;});

	if(ut == arregloProducto.end()){
	arregloProducto.push_back(p);
	return "Producto Ingresado";
}else return "Ya existe el CODIGO ingresado";
}



std::string BD::AgregarPedido( Pedido &p){
	//------------------VARIABLES BUSQUEDA-------------------------------
	//declaro las variables que voy a usar
	int dni = p.VerdniCliente(),cantidad = p.VerCantidad();
	int codigo = p.VercodigoProducto();

	//------------------BUSQUEDA---------------------------------
	//hago la busquedad del dni del cliente
	auto it =find_if(arregloCliente.begin(),arregloCliente.end(),[&dni](const Cliente& c){ return c.VerDni() == dni;});
	//hago la busqueda del codigo del Producto
	auto ut =find_if(arregloProducto.begin(),arregloProducto.end(),[&codigo](const Producto& p){ return p.VerCodigo() == codigo;});

	//--------------------SI EXISTE----------------------------------------------
	if(it !=arregloCliente.end() && ut !=arregloProducto.end()){

	//---------------------indices-----------------------------------
	auto indexC = std::distance(arregloCliente.begin(), it);
	auto indexP = std::distance(arregloProducto.begin(),ut);
	//------------------calculos-----------------------------------
	bool controlador=false;
	if (p.VercategoriaVenta()==1){
	int total = arregloProducto[indexP].VerPrecio_di() * p.VerCantidad();
	p.Modificartotal(total);
	controlador=true;
	}
	if (p.VercategoriaVenta()==2){
	int total = arregloProducto[indexP].VerPrecio_pr() * p.VerCantidad();
	p.Modificartotal(total);
	controlador=true;
	}
	if (p.VercategoriaVenta()==3){
	int total = arregloProducto[indexP].VerPrecio_pu() * p.VerCantidad();
	p.Modificartotal(total);
	controlador=true;
	}
	if (controlador){
	float deuda= p.Verpagado() - p.Vertotal();
	p.Modificardeuda(deuda);
	}

	//-------------------modificar---------------------------------

	//modifico el SALDO del cliente
	float deudaActual = arregloCliente[indexC].VerSaldo() + p.Verdeuda();
	arregloCliente[indexC].ModificarSaldo(deudaActual);

	//modifico el STOCK del Producto
	int stockActual = arregloProducto[indexP].VerStock() - cantidad;
	arregloProducto[indexP].ModificarStock(stockActual);
	//------------------------------------------------------------
	//Agrego al Vector el pedido
	arregloPedido.push_back(p);
 	return "";

	}
	//------------------------NO EXISTE-------------------------------------------
	else {return "No se encontro el DNI del cliente o el Codigo del producto \n";}


}

//----------------BUSQUEDAD DE CLIENTES Y PRODUCTOS -------------------------------
int BD::BuscarApellidoYNombre(std::string parte, int pos_desde) {
	pasar_a_minusculas(parte);
	int cant = CantidadDatos_cliente();
	for (int i=pos_desde;i<cant;i++) {
		Cliente &p = arregloCliente[i];
		std::string apenom = p.VerApellido()+", "+p.VerNombre();
		pasar_a_minusculas(apenom);
		if (apenom.find(parte,0)!=std::string::npos)
			return i;
	}
	return NO_SE_ENCUENTRA;
}

int BD::BuscarMarcaYNombre(std::string parte, int pos_desde) {
	pasar_a_minusculas(parte);
	int cant = CantidadDatos_producto();
	for (int i=pos_desde;i<cant;i++) {
		Producto &p = arregloProducto[i];
		std::string marcanom = p.VerMarca()+", "+p.VerNombre();
		pasar_a_minusculas(marcanom);
		if (marcanom.find(parte,0)!=std::string::npos)
			return i;
	}
	return NO_SE_ENCUENTRA;
}
//------------------------------------------------------------------------------------

void BD::OrdenarCliente(CriterioOrdenCliente criterio) {
	switch (criterio) {
	case ORDEN_APELLIDO_Y_NOMBRE:
		sort(arregloCliente.begin(),arregloCliente.end(),criterio_comparacion_apellido_y_nombre);
		break;
	case ORDEN_TELEFONO:
		sort(arregloCliente.begin(),arregloCliente.end(),criterio_comparacion_telefono);
		break;
	case ORDEN_DIRECCION:
		sort(arregloCliente.begin(),arregloCliente.end(),criterio_comparacion_direccion);
		break;
	case ORDEN_EMAIL:
		sort(arregloCliente.begin(),arregloCliente.end(),criterio_comparacion_email);
		break;
	};
}

void BD::OrdenarProducto(CriterioOrdenProducto criterio){
	switch (criterio){
		case ORDEN_MARCA:
			sort (arregloProducto.begin(),arregloProducto.end(),criterio_comparacion_marca);
			break;
		case ORDEN_CODIGO:
			sort (arregloProducto.begin(),arregloProducto.end(),criterio_comparacion_codigo);
			break;
	};
}


void BD::EliminarCliente(int i) {
	arregloCliente.erase(arregloCliente.begin()+i);
}
void BD::EliminarProducto(int i){
	arregloProducto.erase(arregloProducto.begin()+i);
}
void BD::EliminarPedido(int i){
	arregloPedido.erase(arregloPedido.begin()+i);
}

Pedido BD::VerFactura(int i){

	int dni,dia,mes,anio,cantidad=1;
	float total;

	auto it = find_if(arregloPedido.begin(),arregloPedido.end(),[&i](const Pedido& p){ return p.VernumeroFactura() == i;});
	auto index = std::distance(arregloPedido.begin(), it);
	dni = arregloPedido[index].VerdniCliente();
	dia= arregloPedido[index].Verdia();
	mes= arregloPedido[index].Vermes();
	anio= arregloPedido[index].Veranio();

	Pedido p(dni,0,0,cantidad,1,i);
	p.ModificarFecha(dia,mes,anio);

	return p;
}

int BD::CantidadPedidosPorFactura(int f){
	int factura = f,contador=0;

	auto it = find_if(arregloPedido.begin(),arregloPedido.end(),[&factura](const Pedido& p){ return p.VernumeroFactura() == factura;});
	while (it != arregloPedido.end()){
		contador++;
		it = std::find_if (++it,arregloPedido.end(),[&factura](const Pedido& p){ return p.VernumeroFactura() == factura;});
	}
	return contador;
}

int BD::ComienzoPedido(int f){
	int factura = f;

	auto it = find_if(arregloPedido.begin(),arregloPedido.end(),[&factura](const Pedido& p){ return p.VernumeroFactura() == factura;});
	auto index = std::distance(arregloPedido.begin(), it);
	return index;


}





void BD::RecargarVectores(){
std::ifstream archivo_cliente (nombre_archivo_cliente.c_str(),std::ios::binary|std::ios::ate);
if (archivo_cliente.is_open()) {
	int tamanio_archivo = archivo_cliente.tellg();
	int cantidad_clientes = tamanio_archivo/sizeof(registro_Cliente);
	arregloCliente.resize(cantidad_clientes);
	archivo_cliente.seekg(0,std::ios::beg);
	for (int i=0;i<cantidad_clientes;i++)
		arregloCliente[i].LeerDesdeBinario(archivo_cliente);
	archivo_cliente.close();
}
std::ifstream archivo_producto (nombre_archivo_producto.c_str(),std::ios::binary|std::ios::ate);
if (archivo_producto.is_open()) {
	int tamanio_archivo = archivo_producto.tellg();
	int cantidad_productos = tamanio_archivo/sizeof(registro_Producto);
	arregloProducto.resize(cantidad_productos);
	archivo_producto.seekg(0,std::ios::beg);
	for (int i=0;i<cantidad_productos;i++)
		arregloProducto[i].LeerDesdeBinario(archivo_producto);
	archivo_producto.close();
}
std::ifstream archivo_pedido (nombre_archivo_pedido.c_str(),std::ios::binary|std::ios::ate);
if (archivo_pedido.is_open()) {
	int tamanio_archivo = archivo_pedido.tellg();
	int cantidad_pedidos = tamanio_archivo/sizeof(registro_Pedido);
	arregloPedido.resize(cantidad_pedidos);
	archivo_pedido.seekg(0,std::ios::beg);
	for (int i=0;i<cantidad_pedidos;i++)
		arregloPedido[i].LeerDesdeBinario(archivo_pedido);
	archivo_pedido.close();
}
}
