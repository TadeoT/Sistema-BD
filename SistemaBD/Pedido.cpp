#include <fstream>
#include <cstring>
#include "Pedido.h"
#include "Utils.h"


Pedido::Pedido(int a_dniCliente, long long a_codigoProducto, float a_total, float a_pagado,
float a_deuda, int a_dia,int a_mes, int a_anio)
{
  dniCliente=a_dniCliente;
  codigoProducto=a_codigoProducto;
  total=a_total;
  pagado=a_pagado;
  deuda=a_deuda;
  dia=a_dia;
  mes=a_mes;
  anio=a_anio;
}

int Pedido::VerdniCliente() const {
  return dniCliente;
}
long long Pedido::VercodigoProducto() const {
  return codigoProducto;
}
float Pedido::Vertotal() const {
  return total;
}
float Pedido::Verpagado() const {
  return pagado;
}
float Pedido::Verdeuda() const {
  return deuda;
}
int Pedido::Verdia () const {
  return dia;
}
int Pedido::Vermes () const {
  return mes;
}
int Pedido::Veranio () const {
  return anio;
}

void Pedido::ModificardniCliente(int a_dniCliente){
  dniCliente=a_dniCliente;
}
void Pedido::ModificarcodigoProducto(long long a_codigoProducto){
  codigoProducto=a_codigoProducto;
}
void Pedido::Modificartotal(float a_total){
  total=a_total;
}
void Pedido::Modificarpagado(float a_pagado){
  pagado=a_pagado;
}
void Pedido::Modificardeuda(float a_deuda){
  deuda=a_deuda;
}
void Pedido::ModificarFecha(int a_dia, int a_mes, int a_anio){
  dia=a_dia;
  mes=a_mes;
  anio=a_anio;
}


void Pedido::GuardarEnBinario(std::ofstream &archivo) {
	registro_Pedido reg;
	reg.dniCliente=dniCliente;
	reg.codigoProducto=codigoProducto;
	reg.total=total;
  reg.pagado=pagado;
  reg.deuda=deuda;
  reg.dia=dia;
  reg.mes=mes;
  reg.anio=anio;
	archivo.write((char*)&reg,sizeof(reg));
}

void Pedido::LeerDesdeBinario(std::ifstream &archivo) {
	registro_Pedido reg;
	archivo.read((char*)&reg,sizeof(reg));
  dniCliente=reg.dniCliente;
	codigoProducto=reg.codigoProducto;
	total=reg.total;
  pagado=reg.pagado;
  deuda=reg.deuda;
  dia=reg.dia;
  mes=reg.mes;
  anio=reg.anio;
}


std::string Pedido::ValidarDatos() {
	std::string errores;
  if (deuda<0 || deuda>99999999) errores+="la deuda debe estar entre 0 y 999999999 \n";
  if (pagado<0 || pagado>99999999) errores+="pagado debe estar entre 0 y 999999999 \n";
  if (total<0 || total>99999999) errores+="total debe estar entre 0 y 999999999 \n";
  if (dniCliente<0 || dniCliente>99999999) errores+="dni debe estar entre 0 y 999999999 \n";
  if (codigoProducto	<0 || codigoProducto>9999) errores+="Codigo debe estar entre 0 y 9999(cuatro digitos)\n";
  if (dia<0 || dia>31) errores+="El dia debe estar entre 1 y 31, o vacio\n";
  if (mes<0 || mes>12) errores+="El mes debe estar entre 1 y 12, o vacio\n";
  if (anio!=0 && anio<=1900) errores+="El a�oo no puede ser menor a 1900\n";
	return errores;
}

/**
* Devulve true si la combinacion "apellido, nombre" del primer Producto esta
* antes segun el orden alfabetico que el apellido y nombre del segunda Producto.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
//bool criterio_comparacion_apellido_y_nombre(const Producto &p1, const Producto &p2) {
//	std::string s2 = p2.VerApellido()+", "+p2.VerNombre();
//	std::string s1 = p1.VerApellido()+", "+p1.VerNombre();
//	pasar_a_minusculas(s1);
//	pasar_a_minusculas(s2);
//	return s1<s2;
//}

/**
* Devulve true si la direccion del primer Producto esta antes segun el orden
* alfabetico que la direccion del segunda Producto.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
//bool criterio_comparacion_direccion(const Producto &p1, const Producto &p2) {
//	std::string s1 = p1.VerDireccion();
//	std::string s2 = p2.VerDireccion();
//	pasar_a_minusculas(s1);
//	pasar_a_minusculas(s2);
//	return s1<s2;
//}

/**
* Devulve true si el nro de telefono del primer Producto esta antes segun el
* orden alfabetico que el numero de telefono del segunda Producto.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
//bool criterio_comparacion_telefono(const Producto &p1, const Producto &p2) {
//	std::string s1 = p1.VerTelefono();
	//std::string s2 = p2.VerTelefono();
	//pasar_a_minusculas(s1);
	//pasar_a_minusculas(s2);
	//return s1<s2;
//}

/**
* Devulve true si la direccion de correo electronico del primer Producto esta
* antes segun el orden alfabetico que la direccion de correo electronico del
* segunda Producto.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
//bool criterio_comparacion_email(const Producto &p1, const Producto &p2) {
	//std::string s1 = p1.VerEmail();
	//std::string s2 = p2.VerEmail();
	//pasar_a_minusculas(s1);
	//pasar_a_minusculas(s2);
	//return s1<s2;
//}
