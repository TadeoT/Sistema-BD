#include<iostream>
#include "BD.h"
using namespace std;

int main (int argc, char *argv[]) {
	BD baseDatos ("datosClientes.dat","datosProductos.dat","datosPedidos.dat");
	/*cout<<baseDatos.CantidadDatos_cliente()<<endl;*/
	cout<<"-------------CLIENTES---------------------"<<endl;    
	for(int i=0;i<baseDatos.CantidadDatos_cliente();i++){
		Cliente &p = baseDatos.VerCliente(i);
		cout<<i<<" "<<p.VerApellido()<<", "<<p.VerNombre()<<" Email: "<<p.VerDireccion()<<" DNI: "<<p.VerDni()<<" Saldo: "<<p.VerSaldo()<<endl;
	}
//	cout<<baseDatos.CantidadDatos_producto()<<endl;
	cout<<"--------------PRODUCTOS------------------"<<endl;
	for(int i=0;i<baseDatos.CantidadDatos_producto();i++){
		Producto &p = baseDatos.VerProducto(i);
		cout<<i<<" "<<p.VerMarca()<<", "<<p.VerNombre()<<" CODIGO: "<<p.VerCodigo()<<" STOCK: "<<p.VerStock()<<" Precio Publico: "<<p.VerPrecio_pu()<<endl;
	}
	cout<<"--------------PEDIDOS--------------------"<<endl;
	for(int i=baseDatos.CantidadDatos_pedido()-1;i>=0;i--){
		Pedido &p = baseDatos.VerPedido(i);
		cout<<i<<" "<<"DNI CLIENTE: "<<p.VerdniCliente()<<" TOTAL: "<<p.Vertotal()<<" Deuda adquirir: "<<p.Verdeuda()<<" Cantidad: "<<p.VerCantidad()<<" Fecha: "<<p.Verdia()<<"/"<<p.Vermes()<<"/"<<p.Veranio()<<endl;
	}
	
//	baseDatos.OrdenarProducto(ORDEN_MARCA);
//	for(int i=0;i<baseDatos.CantidadDatos_producto();i++){
//		Producto &p = baseDatos.VerProducto(i);
//		cout<<i<<" "<<p.VerMarca()<<", "<<p.VerNombre()<<" CODIGO: "<<p.VerCodigo()<<" STOCK: "<<p.VerStock()<<" Precio Publico: "<<p.VerPrecio_pu()<<endl;
//	}
	

	
//	string 	nombre="Frank",apellido="Lampard",telefono="34255546609",email="lampard@gmail.com",localidad="Londres",direccion="Jeremy street";
//	int dni=37571462;
//	float saldo=0;
//	Cliente c(nombre,apellido,telefono,direccion,localidad,email,dni,saldo);
	/*baseDatos.EliminarCliente(1);*/
//	cout<<baseDatos.AgregarCliente(c)<<endl;
//	baseDatos.Guardar_cliente();
//	baseDatos.EliminarProducto(3);
//	baseDatos.Guardar_producto();
	
//	string marca="Zink",nombre="Emulsion",clasificacion="Facial",presentacion="200ml",descripcion,composicion;
//	long long codigo=1004;
//	float precio_di=110,precio_pr=150,precio_pu=240;
//	int stock=7;
//	
//	Producto producto1(marca,nombre,descripcion="",clasificacion,composicion="",presentacion,codigo,precio_di,precio_pr,precio_pu,stock);
//	cout<<baseDatos.AgregarProducto(producto1)<<endl;
//	baseDatos.Guardar_producto();

//	int dniCliente=32648214,cantidad=3;
//	long long codigoP=1001;
//	float pagado=50;
//	Pedido p1(dniCliente,codigoP,pagado,cantidad,1);
//	cout<<baseDatos.AgregarPedido(p1)<<endl;;
//	baseDatos.Guardar_pedido();
//	baseDatos.Guardar_cliente();
//	baseDatos.Guardar_producto();
	
	
	return 0;
}

