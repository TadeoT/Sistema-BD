#ifndef Pago_H
#define Pago_H
#include <fstream>


struct registro_Pago {
	int dniCliente;
  float total;
  int dia,mes,anio;

};


class Pago {

private:

	int dniCliente;
  float total;
  int dia,mes,anio;

public:

	Pago(int a_dniCliente=0, float a_total=0);

	/// Valida que los datos cargados sean correctos y suficientes
	std::string ValidarDatos();

	// obtener los datos guardados
	int VerdniCliente() const;
	float Vertotal() const;
	int Verdia () const;
	int Vermes () const;
	int Veranio () const;

	// modificar los datos
	void ModificardniCliente(int a_dniCliente);
	void Modificartotal(float a_total);
	void ModificarFecha(int a_dia, int a_mes, int a_anio);

	/// guarda su registro en un archivo binario
	void GuardarEnBinario(std::ofstream &archivo);
	/// lee su registro desde un archivo binario
	void LeerDesdeBinario(std::ifstream &archivo);

};
#endif
