/**
* @file BD.cpp
* @brief Declaraciones de todo lo necesario para trabajar con la clase BD
**/
#include <fstream>
#include <algorithm>
#include "BD.h"
#include "Utils.h"

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

void BD::AgregarCliente(const Cliente &p) {
	arregloCliente.push_back(p);
}
void BD::AgregarProducto(const Producto &p){
	arregloProducto.push_back(p);
}
void BD::AgregarPedido(const Pedido &p){
	arregloPedido.push_back(p);
}

// compara nombre y apellido, sin diferenciar may�sculas y min�sculas
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

void BD::Ordenar(CriterioOrden criterio) {
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

void BD::EliminarCliente(int i) {
	arregloCliente.erase(arregloCliente.begin()+i);
}
void BD::EliminarProducto(int i){
	arregloProducto.erase(arregloProducto.begin()+i);
}
void BD::EliminarPedido(int i){
	arregloPedido.erase(arregloPedido.begin()+i);
}
