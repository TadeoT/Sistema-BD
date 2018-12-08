/**
* @file BD.cpp
* @brief Declaraciones de todo lo necesario para trabajar con la clase BD
**/
#include <fstream>
#include <algorithm>
#include "BD.h"
#include "Utils.h"

BD::BD(std::string a_nombre_archivo) {
	nombre_archivo = a_nombre_archivo;
	std::ifstream archivo(nombre_archivo.c_str(),std::ios::binary|std::ios::ate);
	if (archivo.is_open()) {
		int tamanio_archivo = archivo.tellg();
		int cantidad_clientes = tamanio_archivo/sizeof(registro_Cliente);
		arregloClientes.resize(cantidad_clientes);
		archivo.seekg(0,std::ios::beg);
		for (int i=0;i<cantidad_clientes;i++)
			arregloClientes[i].LeerDesdeBinario(archivo);
		archivo.close();
	}
}

bool BD::Guardar() {
	std::ofstream archivo(nombre_archivo.c_str(),std::ios::binary|std::ios::trunc);
	if (!archivo.is_open()) return false;
	int cantidad_Clientes = CantidadDatos();
	for (int i=0;i<cantidad_Clientes;i++)
		arregloClientes[i].GuardarEnBinario(archivo);
	archivo.close();
	return true;
}

Cliente &BD::operator[](int i) {
	return arregloClientes[i];
}

Cliente &BD::VerCliente(int i) {
	return arregloClientes[i];
}

int BD::CantidadDatos() {
	return arregloClientes.size();
}

void BD::AgregarCliente(const Cliente &p) {
	arregloClientes.push_back(p);
}

// compara nombre y apellido, sin diferenciar may�sculas y min�sculas
int BD::BuscarApellidoYNombre(std::string parte, int pos_desde) {
	pasar_a_minusculas(parte);
	int cant = CantidadDatos();
	for (int i=pos_desde;i<cant;i++) {
		Cliente &p = arregloClientes[i];
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
		sort(arregloClientes.begin(),arregloClientes.end(),criterio_comparacion_apellido_y_nombre);
		break;
	case ORDEN_TELEFONO:
		sort(arregloClientes.begin(),arregloClientes.end(),criterio_comparacion_telefono);
		break;
	case ORDEN_DIRECCION:
		sort(arregloClientes.begin(),arregloClientes.end(),criterio_comparacion_direccion);
		break;
	case ORDEN_EMAIL:
		sort(arregloClientes.begin(),arregloClientes.end(),criterio_comparacion_email);
		break;
	};
}

void BD::EliminarCliente(int i) {
	arregloClientes.erase(arregloClientes.begin()+i);
}
