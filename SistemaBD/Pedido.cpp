#include <fstream>
#include <cstring>
#include "Pedido.h"
#include "Utils.h"
#include <ctime>


Pedido::Pedido(int a_dniCliente, int a_codigoProducto,float a_pagado,int a_cantidad, int a_categoriaVenta, int a_numeroFactura)
{

  time_t t1 = time(NULL);
  tm *ptm2 = localtime( &t1 );
  dia=ptm2->tm_mday;
  mes=ptm2->tm_mon+1;
  anio=ptm2->tm_year+1900;


  dniCliente=a_dniCliente;
  codigoProducto=a_codigoProducto;
  total=0;
  pagado=a_pagado;
  deuda=0;
  cantidad=a_cantidad;
  categoriaVenta=a_categoriaVenta;
  numeroFactura=a_numeroFactura;
}

int Pedido::VerdniCliente() const {
  return dniCliente;
}
int Pedido::VercodigoProducto() const {
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
int Pedido::VerCantidad() const {
  return cantidad;
}
int Pedido::VercategoriaVenta() const{
  return categoriaVenta;
}
int Pedido::VernumeroFactura() const{
  return numeroFactura;
}

void Pedido::ModificardniCliente(int a_dniCliente){
  dniCliente=a_dniCliente;
}
void Pedido::ModificarcodigoProducto(int a_codigoProducto){
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
void Pedido::ModificarCantidad(int a_cantidad){
  cantidad=a_cantidad;
}
void Pedido::ModificarcategoriaVenta(int a_categoriaVenta){
  categoriaVenta=a_categoriaVenta;
}
void Pedido::ModificarnumeroFactura(int a_numeroFactura){
  numeroFactura=a_numeroFactura;
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
  reg.cantidad=cantidad;
  reg.categoriaVenta=categoriaVenta;
  reg.numeroFactura=numeroFactura;
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
  cantidad=reg.cantidad;
  categoriaVenta=reg.categoriaVenta;
  numeroFactura=reg.numeroFactura;
}


std::string Pedido::ValidarDatos() {
	std::string errores;
  if (pagado<0 || pagado>99999999) errores+="Pagado debe estar entre 0 y 999999999 \n";
  if (dniCliente<0 || dniCliente>99999999) errores+="Dni debe estar entre 0 y 99999999 \n";
  if (codigoProducto	<999 || codigoProducto>9999) errores+="Codigo debe tener  cuatro digitos\n";
  if (categoriaVenta<1 || categoriaVenta>3) errores+="La categoria disponibles son: 1,2,3\n";
  if (numeroFactura<0) errores +="El numero de la factura no puede ser negativo\n";
	return errores;
}
