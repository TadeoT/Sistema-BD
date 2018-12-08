
#include <fstream>
#include <cstring>
#include "Cliente.h"
#include "Utils.h"


Cliente::Cliente(std::string a_nombre, std::string a_apellido, std::string a_telefono,
				 std::string a_direccion, std::string a_localidad, std::string a_email,
				 int a_dni ,float a_saldo)
{

	nombre=a_nombre;
	apellido=a_apellido;
	telefono=a_telefono;
	email=a_email;
	localidad=a_localidad;
	direccion=a_direccion;
	dni = a_dni;
	saldo=a_saldo;
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

int Cliente::VerDni() const {
	return dni;
}

float Cliente::VerSaldo() const {
	return saldo;
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

void Cliente::ModificarDni(int a_dni) {
	dni = a_dni;
}

void Cliente::ModificarSaldo(float a_saldo){
	saldo=a_saldo;
}


void Cliente::GuardarEnBinario(std::ofstream &archivo) {
	registro_Cliente reg;
	strcpy(reg.nombre,nombre.c_str());
	strcpy(reg.apellido,apellido.c_str());
	strcpy(reg.telefono,telefono.c_str());
	strcpy(reg.direccion,direccion.c_str());
	strcpy(reg.localidad,localidad.c_str());
	strcpy(reg.email,email.c_str());
	reg.dni=dni;
	reg.saldo=saldo;
	archivo.write((char*)&reg,sizeof(reg));
}


void Cliente::LeerDesdeBinario(std::ifstream &archivo) {
	registro_Cliente reg;
	archivo.read((char*)&reg,sizeof(reg));
	nombre=reg.nombre;
	apellido=reg.apellido;
	telefono=reg.telefono;
	direccion=reg.direccion;
	localidad=reg.localidad;
	email=reg.email;
	dni = reg.dni;
	saldo=reg.saldo;
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
	if (dni<0 || dni>99999999) errores+="El dni no puede ser negativo, No puede ser mayor a 8 digitos\n";
	return errores;
}

/**
* Devulve true si la combinacion "apellido, nombre" del primer Cliente esta
* antes segun el orden alfabetico que el apellido y nombre del segunda Cliente.
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
* Devulve true si la direccion del primer Cliente esta antes segun el orden
* alfabetico que la direccion del segunda Cliente.
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
* Devulve true si el nro de telefono del primer Cliente esta antes segun el
* orden alfabetico que el numero de telefono del segunda Cliente.
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
* Devulve true si la direccion de correo electronico del primer Cliente esta
* antes segun el orden alfabetico que la direccion de correo electronico del
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
