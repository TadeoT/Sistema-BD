
#ifndef Pedido_H
#define Pedido_H
#include <fstream>


struct registro_Pedido {
	int dniCliente;
  int codigoProducto;
	int numeroFactura;
  float total,pagado,deuda;
  int dia,mes,anio,cantidad,categoriaVenta;

};


class Pedido {

private:

	int dniCliente;
  int codigoProducto;
	int numeroFactura;
  float total,pagado,deuda;
  int dia,mes,anio,cantidad,categoriaVenta;

public:

	Pedido(int a_dniCliente=0, int a_codigoProducto=0, float a_pagado=0,int a_cantidad=0,int a_categoriaVenta=0, int a_numeroFactura=0);

	/// Valida que los datos cargados sean correctos y suficientes
	std::string ValidarDatos();

	// obtener los datos guardados
	int VerdniCliente() const;
	int VercodigoProducto() const;
	float Vertotal() const;
	float Verpagado() const;
	float Verdeuda() const;
	int Verdia () const;
	int Vermes () const;
	int Veranio () const;
	int VerCantidad() const;
	int VercategoriaVenta() const;
	int VernumeroFactura() const;

	// modificar los datos
	void ModificardniCliente(int a_dniCliente);
	void ModificarcodigoProducto(int a_codigoProducto);
	void Modificartotal(float a_total);
	void Modificarpagado(float a_pagado);
	void Modificardeuda(float a_deuda);
	void ModificarFecha(int a_dia, int a_mes, int a_anio);
	void ModificarCantidad(int a_cantidad);
	void ModificarcategoriaVenta(int a_categoriaVenta);
	void ModificarnumeroFactura(int a_numeroFactura);

	/// guarda su registro en un archivo binario
	void GuardarEnBinario(std::ofstream &archivo);
	/// lee su registro desde un archivo binario
	void LeerDesdeBinario(std::ifstream &archivo);

};
#endif
