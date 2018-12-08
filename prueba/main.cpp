#include<iostream>
#include "BD.h"
using namespace std;

int main (int argc, char *argv[]) {
	BD baseDatos ("datosClientes.dat","datosProductos.dat","datosPedidos.dat");
	cout<<baseDatos.CantidadDatos_cliente()<<endl;
	for(int i=0;i<baseDatos.CantidadDatos_cliente();i++){
		Cliente &p = baseDatos.VerCliente(i);
		cout<<i<<" "<<p.VerApellido()<<", "<<p.VerNombre()<<endl;
	}
	cout<<baseDatos.CantidadDatos_producto()<<endl;
	for(int i=0;i<baseDatos.CantidadDatos_producto();i++){
		Producto &p = baseDatos.VerProducto(i);
		cout<<i<<" "<<p.VerMarca()<<", "<<p.VerNombre()<<" CODIGO: "<<p.verCodigo()<<endl;
	}
	cout<<"ESTE "<<baseDatos.CantidadDatos_pedido()<<endl;
	for(int i=0;i<baseDatos.CantidadDatos_pedido();i++){
		Pedido &p = baseDatos.VerPedido(i);
		cout<<i<<" "<<p.VerdniCliente()<<", "<<p.Vertotal()<<endl;
	}
	
	int DNI,dia,mes,anio;
	float total,pagado,deuda;
	long long codigoP;
	cout<< "-DNI -CODIGOP -TOTAL -PAGADO -DEUDA -DIA -MES -AÑO "<<endl;
	cin>>DNI;
	cin>>codigoP
		;
	cin>>total;
	cin>>pagado;
	cin>>deuda;
	cin>>dia;
	cin>>mes;
	cin>>anio;
	Pedido pe1(DNI,codigoP,total,pagado,deuda,dia,mes,anio);
	baseDatos.AgregarPedido(pe1);
	baseDatos.Guardar_pedido();
	
	string marca,nombre,descripcion,clasificacion,composicion,presentacion;
	long long codigo;
	float precio_di,precio_pu;
	int stock;
	cout<<"-Marca -nombre -descripcion -clasificacion -composicion - presentacion -codigo -preciodistribuidora -precio publico -stock"<<endl;
	getline(cin,marca);
	getline(cin,nombre);
	getline(cin,descripcion);
	getline(cin,clasificacion);
	getline(cin,composicion);
	getline(cin,presentacion);
	cin>>codigo;
	cin>>precio_di;
	cin>>precio_pu;
	cin>>stock;
	Producto p1(marca,nombre,descripcion,clasificacion,composicion,presentacion,codigo,precio_di,0,precio_pu,stock);
	
	if(p1.ValidarDatos()!=""){
	baseDatos.AgregarProducto(p1);
	baseDatos.Guardar_producto();
	}
	
	
	return 0;
}

