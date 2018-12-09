#include<iostream>
#include "BD.h"
using namespace std;

int main (int argc, char *argv[]) {
	BD baseDatos ("datosClientes.dat","datosProductos.dat","datosPedidos.dat");
	/*cout<<baseDatos.CantidadDatos_cliente()<<endl;*/
	cout<<"-------------CLIENTES---------------------"<<endl;    
	for(int i=0;i<baseDatos.CantidadDatos_cliente();i++){
		Cliente &p = baseDatos.VerCliente(i);
		cout<<i<<" "<<p.VerApellido()<<", "<<p.VerNombre()<<" Email: "<<p.VerEmail()<<" DNI: "<<p.VerDni()<<" Saldo: "<<p.VerSaldo()<<endl;
	}
//	cout<<baseDatos.CantidadDatos_producto()<<endl;
	cout<<"--------------PRODUCTOS------------------"<<endl;
	for(int i=0;i<baseDatos.CantidadDatos_producto();i++){
		Producto &p = baseDatos.VerProducto(i);
		cout<<i<<" "<<p.VerMarca()<<", "<<p.VerNombre()<<" CODIGO: "<<p.VerCodigo()<<" STOCK: "<<p.VerStock()<<endl;
	}
	cout<<"--------------PEDIDOS--------------------"<<endl;
	for(int i=baseDatos.CantidadDatos_pedido()-1;i>=0;i--){
		Pedido &p = baseDatos.VerPedido(i);
		cout<<i<<" "<<"DNI CLIENTE: "<<p.VerdniCliente()<<" TOTAL: "<<p.Vertotal()<<" Deuda adquirir: "<<p.Verdeuda()<<" Cantidad: "<<p.VerCantidad()<<" Fecha: "<<p.Verdia()<<"/"<<p.Vermes()<<"/"<<p.Veranio()<<endl;
	}
	//string 	nombre="Carlos",apellido="Bilador",telefono="34255546609",email="bilardo@gmail.com",localidad="Bs AS",direccion="Pse Ganar";
	//int dni=37571463;
	//float saldo=-165.5;
	//Cliente c(nombre,apellido,telefono,email,localidad,direccion,dni,saldo);
	//baseDatos.AgregarCliente(c);
	//baseDatos.Guardar_cliente();
//	baseDatos.EliminarProducto(3);
//	baseDatos.Guardar_producto();
	
//	
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

