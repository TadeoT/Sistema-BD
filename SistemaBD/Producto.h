
#ifndef Producto_H
#define Producto_H
#include <string>
#include <fstream>


struct registro_Producto {
	char marca[256];
	char nombre[256];
	char descripcion[256];
	char clasificacion[256];
	char composicion[256];
	char presentacion[256];
	long long codigo;
	float precio_di, precio_pr, precio_pu;
	int stock;
};


class Producto {

private:

	// datos de un Producto
	std::string marca;///< nombres del Producto
	std::string nombre; ///< apellido del Producto
	std::string descripcion; ///< telefono del Producto
	std::string clasificacion; ///< direccion del Producto
	std::string composicion; ///< localidad donde vive el Producto
	std::string presentacion; ///< direccion de correo electronico del Producto
  long long codigo;
	float precio_di; ///< dia de la fecha de naciemiento
	float precio_pr; ///< mes de la fecha de naciemiento
	float precio_pu; ///< anio de la fecha de naciemiento
	int stock; // STOCK del producto

public:

	// construir un obejto con los datos
	/// Inicializa los datos de el Producto
	Producto(std::string a_marca="", std::string a_nombre="", std::string a_descripcion="",
			std::string a_clasificacion="", std::string a_composicion="", std::string a_presentacion="",
      long long a_codigo=0, float a_precio_di=0, float a_precio_pr=0, float a_precio_pu=0, int a_stock=0);

	/// Valida que los datos cargados sean correctos y suficientes
	std::string ValidarDatos();

	// obtener los datos guardados
	std::string VerMarca() const; ///< devuelve el nombre del Producto
	std::string VerNombre() const; ///< devuelve el apellido del Producto
	std::string VerDescripcion() const; ///< devuelve la direccion del Producto
	std::string VerClasificacion() const; ///< devuelve la localidad del Producto
	std::string VerComposicion() const; ///< devuelve el telefono del Producto
	std::string VerPresentacion() const; ///< devuelve la direccion de correo electronico del Producto
	long long verCodigo() const;
	float VerPrecio_di () const; ///< devuelve precio distribuidora
	float VerPrecio_pr () const; ///< devuelve precio profesional
	float VerPrecio_pu () const; ///< devuelve precio publico
	int VerStock() const;

	// modificar los datos
	void ModificarMarca(std::string a_marca); ///< actualiza TODO
	void ModificarNombre(std::string a_nombre); ///<
	void ModificarDescripcion(std::string a_descripcion); ///<
	void ModificarClasificacion(std::string a_clasificacion); ///<
	void ModificarComposicion(std::string a_composicion); ///<
	void ModificarPresentacion(std::string a_presentacion); ///<
	void ModificarPrecio(float a_precio_di, float a_precio_pr, float a_precio_pu); ///<
	void ModificarCodigo(long long a_codigo);
	void ModificarStock(int a_stock);


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
