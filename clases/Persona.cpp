/**
* @file Cliente.cpp
* @brief Implementaciones de todo lo necesario para trabajar con la clase Cliente
**/

#include <fstream>
#include <cstring>
#include "Cliente.h"
#include "Utils.h"


Cliente::Cliente(std::string a_nombre, std::string a_apellido, std::string a_telefono,
				 std::string a_direccion, std::string a_localidad, std::string a_email,
				 int a_dia, int a_mes, int a_anio)
{

	nombre=a_nombre;
	apellido=a_apellido;
	telefono=a_telefono;
	email=a_email;
	localidad=a_localidad;
	direccion=a_direccion;
	dia_nac=a_dia;
	mes_nac=a_mes;
	anio_nac=a_anio;
}

std::string Cliente::VerNombre() const {
	return nombre;
}

std::string Cliente::VerApellido() const {
	return apellido;
}

std::string Cliente::VerDireccion() const {
	return direccion;
}

std::string Cliente::VerLocalidad() const {
	return localidad;
}

std::string Cliente::VerTelefono() const {
	return telefono;
}

std::string Cliente::VerEmail() const {
	return email;
}

int Cliente::VerDiaNac() const {
	return dia_nac;
}

int Cliente::VerMesNac() const {
	return mes_nac;
}

int Cliente::VerAnioNac() const {
	return anio_nac;
}

void Cliente::ModificarNombre(std::string a_nombre) {
	nombre=a_nombre;
}

void Cliente::ModificarApellido(std::string a_apellido) {
	apellido=a_apellido;
}

void Cliente::ModificarDireccion(std::string a_direccion) {
	direccion=a_direccion;
}

void Cliente::ModificarLocalidad(std::string a_localidad) {
	localidad=a_localidad;
}

void Cliente::ModificarTelefono(std::string a_telefono) {
	telefono=a_telefono;
}

void Cliente::ModificarEmail(std::string a_email) {
	email=a_email;
}

void Cliente::ModificarFechaNac(int a_dia, int a_mes, int a_anio) {
	anio_nac=a_anio;
	mes_nac=a_mes;
	dia_nac=a_dia;
}

/**
* Guarda todos los datos de una Cliente en un archivo binario. El formato dentro
* del archivo binario es el del struct registro_Cliente. El archivo debe estar
* abierto y posicionado en el lugar donde guardar.
* @param archivo un archivo abierto en modo binario y para escritura
**/
void Cliente::GuardarEnBinario(std::ofstream &archivo) {
	registro_Cliente reg;
	strcpy(reg.nombre,nombre.c_str());
	strcpy(reg.apellido,apellido.c_str());
	strcpy(reg.telefono,telefono.c_str());
	strcpy(reg.direccion,direccion.c_str());
	strcpy(reg.localidad,localidad.c_str());
	strcpy(reg.email,email.c_str());
	reg.anio_nac=anio_nac;
	reg.mes_nac=mes_nac;
	reg.dia_nac=dia_nac;
	archivo.write((char*)&reg,sizeof(reg));
}

/**
* Lee todos los datos de una Cliente desde un archivo binario. El formato dentro
* del archivo binario es el del struct registro_Cliente. El archivo debe estar
* abierto y posicionado en el lugar donde leer.
* @param archivo un archivo abierto en modo binario y para lectura
**/
void Cliente::LeerDesdeBinario(std::ifstream &archivo) {
	registro_Cliente reg;
	archivo.read((char*)&reg,sizeof(reg));
	nombre=reg.nombre;
	apellido=reg.apellido;
	telefono=reg.telefono;
	direccion=reg.direccion;
	localidad=reg.localidad;
	email=reg.email;
	anio_nac=reg.anio_nac;
	mes_nac=reg.mes_nac;
	dia_nac=reg.dia_nac;
}

/**
* Verifica que el nombre y el apellido no esten vacios, que las cadenas
* no se pasen del tama�o para el binario, y que los numeros de la fecha
* esten dentro de los rangos razonables, o vacio (0)
* @return Una cadena vacia si no hay errores, o con los mensajes de error
**/
std::string Cliente::ValidarDatos() {
	std::string errores;
	if (nombre.size()==0) errores+="El nombre no puede estar vacio\n";
	if (nombre.size()>256) errores+="El nombre es demasiado largo\n";
	if (apellido.size()==0) errores+="El apellido no puede estar vacio\n";
	if (apellido.size()>256) errores+="El apellido es demasiado largo\n";
	if (telefono.size()>256) errores+="El telefono es demasiado largo\n";
	if (direccion.size()>256) errores+="La direccion es demasiado largo\n";
	if (localidad.size()>256) errores+="La localidad es demasiado largo\n";
	if (email.size()>256) errores+="El e-mail es demasiado largo\n";
	if (dia_nac<0 || dia_nac>31) errores+="El dia de nacimiento debe estar entre 1 y 31, o vacio\n";
	if (mes_nac<0 || mes_nac>12) errores+="El mes de nacimiento debe estar entre 1 y 12, o vacio\n";
	if (anio_nac!=0 && anio_nac<=1900) errores+="El a�o de nacimiento no puede ser menor a 1900\n";
	return errores;
}

/**
* Devulve true si la combinacion "apellido, nombre" de la primer Cliente esta
* antes segun el orden alfabetico que el apellido y nombre de la segunda Cliente.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool criterio_comparacion_apellido_y_nombre(const Cliente &p1, const Cliente &p2) {
	std::string s2 = p2.VerApellido()+", "+p2.VerNombre();
	std::string s1 = p1.VerApellido()+", "+p1.VerNombre();
	pasar_a_minusculas(s1);
	pasar_a_minusculas(s2);
	return s1<s2;
}

/**
* Devulve true si la direccion de la primer Cliente esta antes segun el orden
* alfabetico que la direccion de la segunda Cliente.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool criterio_comparacion_direccion(const Cliente &p1, const Cliente &p2) {
	std::string s1 = p1.VerDireccion();
	std::string s2 = p2.VerDireccion();
	pasar_a_minusculas(s1);
	pasar_a_minusculas(s2);
	return s1<s2;
}

/**
* Devulve true si el nro de telefono de la primer Cliente esta antes segun el
* orden alfabetico que el numero de telefono de la segunda Cliente.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool criterio_comparacion_telefono(const Cliente &p1, const Cliente &p2) {
	std::string s1 = p1.VerTelefono();
	std::string s2 = p2.VerTelefono();
	pasar_a_minusculas(s1);
	pasar_a_minusculas(s2);
	return s1<s2;
}

/**
* Devulve true si la direccion de correo electronico de la primer Cliente esta
* antes segun el orden alfabetico que la direccion de correo electronico de la
* segunda Cliente.
* Se usa como argumento para la funcion sort para ordenar toda la lista.
**/
bool criterio_comparacion_email(const Cliente &p1, const Cliente &p2) {
	std::string s1 = p1.VerEmail();
	std::string s2 = p2.VerEmail();
	pasar_a_minusculas(s1);
	pasar_a_minusculas(s2);
	return s1<s2;
}
