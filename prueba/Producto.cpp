

#include <fstream>
#include <cstring>
#include "Producto.h"
#include "Utils.h"


Producto::Producto(std::string a_marca, std::string a_nombre, std::string a_descripcion,
    std::string a_clasificacion, std::string a_composicion, std::string a_presentacion,
    long long a_codigo, float a_precio_di, float a_precio_pr, float a_precio_pu, int a_stock)
{

	marca=a_marca;
	nombre=a_nombre;
	descripcion=a_descripcion;
	clasificacion=a_clasificacion;
	composicion=a_composicion;
	presentacion=a_presentacion;
	precio_di=a_precio_di;
	precio_pr=a_precio_pr;
	precio_pu=a_precio_pu;
	codigo=a_codigo;
	stock=a_stock;
}

std::string Producto::VerMarca() const {
	return marca;
}

std::string Producto::VerNombre() const {
	return nombre;
}

std::string Producto::VerDescripcion() const {
	return descripcion;
}

std::string Producto::VerClasificacion() const {
	return clasificacion;
}

std::string Producto::VerComposicion() const {
	return composicion;
}

std::string Producto::VerPresentacion() const {
	return presentacion;
}

float Producto::VerPrecio_di() const {
	return precio_di;
}

float Producto::VerPrecio_pr() const {
	return precio_pr;
}

float Producto::VerPrecio_pu() const {
	return precio_pu;
}

long long Producto::verCodigo() const {
  return codigo;
}

int Producto::VerStock() const {
  return stock;
}

void Producto::ModificarMarca(std::string a_marca) {
	marca=a_marca;
}

void Producto::ModificarNombre(std::string a_nombre) {
	nombre=a_nombre;
}

void Producto::ModificarDescripcion(std::string a_descripcion) {
	descripcion=a_descripcion;
}

void Producto::ModificarClasificacion(std::string a_clasificacion) {
	clasificacion=a_clasificacion;
}

void Producto::ModificarComposicion(std::string a_composicion) {
	composicion=a_composicion;
}

void Producto::ModificarPresentacion(std::string a_presentacion) {
	presentacion=a_presentacion;
}

void Producto::ModificarPrecio(float a_precio_di, float a_precio_pr, float a_precio_pu) {
	precio_di=a_precio_di;
	precio_pr=a_precio_pr;
	precio_pu=a_precio_pu;
}

void Producto::ModificarCodigo(long long a_codigo){
  codigo=a_codigo;
}

void Producto::ModificarStock(int a_stock){
  stock=a_stock;
}


void Producto::GuardarEnBinario(std::ofstream &archivo) {
	registro_Producto reg;
	strcpy(reg.marca,marca.c_str());
	strcpy(reg.nombre,nombre.c_str());
	strcpy(reg.descripcion,descripcion.c_str());
	strcpy(reg.clasificacion,clasificacion.c_str());
	strcpy(reg.composicion,composicion.c_str());
	strcpy(reg.presentacion,presentacion.c_str());
	reg.precio_di=precio_di;
	reg.precio_pr=precio_pr;
	reg.precio_pu=precio_pu;
  reg.codigo=codigo;
  reg.stock=stock;
	archivo.write((char*)&reg,sizeof(reg));
}

void Producto::LeerDesdeBinario(std::ifstream &archivo) {
	registro_Producto reg;
	archivo.read((char*)&reg,sizeof(reg));
	marca=reg.marca;
	nombre=reg.nombre;
  descripcion=reg.descripcion;
  clasificacion=reg.clasificacion;
  composicion=reg.composicion;
  presentacion=reg.presentacion;
  codigo=reg.codigo;
  precio_di=reg.precio_di;
  precio_pr=reg.precio_pr;
  precio_pu=reg.precio_pu;
  stock=reg.stock;
}


std::string Producto::ValidarDatos() {
	std::string errores;
	if (nombre.size()==0) errores+="El nombre no puede estar vacio\n";
	if (nombre.size()>256) errores+="El nombre es demasiado largo\n";
	if (marca.size()==0) errores+="La Marca no puede estar vacio\n";
	if (marca.size()>256) errores+="La Marca es demasiado largo\n";
	if (descripcion.size()>256) errores+="La descripcion es demasiado larga\n";
	if (clasificacion.size()>256) errores+="La clasificacion es demasiado largo\n";
	if (composicion.size()>256) errores+="La composicion es demasiado largo\n";
	if (presentacion.size()>256) errores+="La presentacion es demasiado largo\n";
	if (stock<0 || stock>99999) errores+="stock debe estar entre 0 y 999999 \n";
  if (codigo<0 || codigo>9999) errores+="Codigo debe estar entre 0 y 9999(cuatro digitos)\n";
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
