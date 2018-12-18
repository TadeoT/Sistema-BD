#include <fstream>
#include <cstring>
#include "Pago.h"
#include "Utils.h"
#include <ctime>


Pago::Pago(int a_dniCliente, float a_total)
{

  time_t t1 = time(NULL);
  tm *ptm2 = localtime( &t1 );
  dia=ptm2->tm_mday;
  mes=ptm2->tm_mon+1;
  anio=ptm2->tm_year+1900;


  dniCliente=a_dniCliente;
  total=a_total;
}

int Pago::VerdniCliente() const {
  return dniCliente;
}
float Pago::Vertotal() const {
  return total;
}

int Pago::Verdia () const {
  return dia;
}
int Pago::Vermes () const {
  return mes;
}
int Pago::Veranio () const {
  return anio;
}


void Pago::ModificardniCliente(int a_dniCliente){
  dniCliente=a_dniCliente;
}

void Pago::Modificartotal(float a_total){
  total=a_total;
}


void Pago::GuardarEnBinario(std::ofstream &archivo) {
	registro_Pago reg;
	reg.dniCliente=dniCliente;
	reg.total=total;
  reg.dia=dia;
  reg.mes=mes;
  reg.anio=anio;
	archivo.write((char*)&reg,sizeof(reg));
}

void Pago::LeerDesdeBinario(std::ifstream &archivo) {
	registro_Pago reg;
	archivo.read((char*)&reg,sizeof(reg));
  dniCliente=reg.dniCliente;
	total=reg.total;
  dia=reg.dia;
  mes=reg.mes;
  anio=reg.anio;
}


std::string Pago::ValidarDatos() {
	std::string errores;
  if (dniCliente<0 || dniCliente>99999999) errores+="Dni debe estar entre 0 y 99999999 \n";
	return errores;
}
