
#ifndef BD_H
#define BD_H

#include <vector>
#include "Cliente.h"
#include "Producto.h"
#include "Pedido.h"
#include "Pago.h"

#define NO_SE_ENCUENTRA -1

enum CriterioOrdenCliente { ORDEN_APELLIDO_Y_NOMBRE, ORDEN_TELEFONO, ORDEN_DIRECCION, ORDEN_EMAIL };
enum CriterioOrdenProducto {ORDEN_MARCA, ORDEN_CODIGO};

class BD {
private:

	
	std::string nombre_archivo_cliente;
	std::string nombre_archivo_producto;
	std::string nombre_archivo_pedido;
	std::string nombre_archivo_pago;


	std::vector<Cliente> arregloCliente;
	std::vector<Producto> arregloProducto;
	std::vector<Pedido> arregloPedido;
	std::vector<Pago> arregloPago;

public:

	BD(std::string nombre_archivo_cliente,std::string nombre_archivo_producto,std::string nombre_archivo_pedido,std::string nombre_archivo_pago);

	bool Guardar_cliente();
	bool Guardar_producto();
	bool Guardar_pedido();
	bool Guardar_pago();


	int CantidadDatos_cliente();
	int CantidadDatos_producto();
	int CantidadDatos_pedido();
	int CantidadDatos_pago();
	int NumeroFacturaAnterior();

	std::string AgregarCliente(const Cliente &p);
	std::string AgregarProducto(const Producto &p);
	std::string AgregarPedido(Pedido &p);
	std::string AgregarPago(const Pago &p);



	Cliente &VerCliente(int i);
	Producto &VerProducto(int i);
	Pedido &VerPedido(int i);
	Pago &VerPago(int i);


	//Cosas de Facturas pero las q no se comen :(
	Pedido VerFactura(int i);
	int CantidadPedidosPorFactura(int f);
	int ComienzoPedido(int f);

	//Aumenta por porcentaje todos los PRODUCTOS
	void AumentarPorPorcentajeProductos(float a_porcentaje);


	std::string EliminarCliente(int i);
	void EliminarProducto(int i);
	void EliminarPedido(int i);
	void EliminarPago(int i);

	
	void OrdenarCliente(CriterioOrdenCliente criterio);
	void OrdenarProducto(CriterioOrdenProducto criterio);

	void RecargarVectores();


	// funciones para busquedas

	int BuscarNombre(std::string parte_nombre, int pos_desde);
	
	int BuscarApellido(std::string parte_apellido, int pos_desde);

	int BuscarApellidoYNombre(std::string parte_apellido, int pos_desde);
	int BuscarMarcaYNombre(std::string parte, int pos_desde);


};

#endif
