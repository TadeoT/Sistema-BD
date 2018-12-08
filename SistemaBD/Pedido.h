#ifndef Pedido_H
#define Pedido_H
#include <fstream>


struct registro_Pedido {
	int dniCliente;
  long long codigoProducto;
  float total,pagado,deuda;
  int dia,mes,anio;
};


class Pedido {

private:

	int dniCliente;
  long long codigoProducto;
  float total,pagado,deuda;
  int dia,mes,anio;

public:

	Pedido(int a_dniCliente=0, long long a_codigoProducto=0, float a_total=0, float a_pagado=0,
  float a_deuda=0, int a_dia=0,int a_mes=0, int a_anio=0);

	/// Valida que los datos cargados sean correctos y suficientes
	std::string ValidarDatos();

	// obtener los datos guardados
	int VerdniCliente() const;
	long long VercodigoProducto() const;
	float Vertotal() const;
	float Verpagado() const;
	float Verdeuda() const;
	int Verdia () const;
	int Vermes () const;
	int Veranio () const;

	// modificar los datos
	void ModificardniCliente(int a_dniCliente);
	void ModificarcodigoProducto(long long a_codigoProducto);
	void Modificartotal(float a_total);
	void Modificarpagado(float a_pagado);
	void Modificardeuda(float a_deuda);
	void ModificarFecha(int a_dia, int a_mes, int a_anio);


	/// guarda su registro en un archivo binario
	void GuardarEnBinario(std::ofstream &archivo);
	/// lee su registro desde un archivo binario
	void LeerDesdeBinario(std::ifstream &archivo);

};

// crirerios para comparar dos Productos

/// @brief Funcion para comparar dos Productos por nombre y apellido
//bool criterio_comparacion_apellido_y_nombre(const Producto &p1, const Producto &p2);
/// @brief Funcion para comparar Productos por direccion
//bool criterio_comparacion_direccion(const Producto &p1, const Producto &p2);
/// @brief Funcion para comparar dos Productos por telefono
//bool criterio_comparacion_telefono(const Producto &p1, const Producto &p2);
/// @brief Funcion para comparar dos Productos por email
//bool criterio_comparacion_email(const Producto &p1, const Producto &p2);

#endif
