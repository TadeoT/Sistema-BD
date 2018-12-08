/**
* @file Cliente.h
* @brief Declaraciones de todo lo necesario para trabajar con la clase Cliente
*
* Este archivo define la clase Cliente, las funciones auxiliares para compararlas
* y el struct que hace de intermediario para guardar y leer en archivo binarios.
**/
#ifndef Cliente_H
#define Cliente_H
#include <string>
#include <fstream>

/**
* @brief Estructura auxiliar para usar con archivos binarios
*
* En los binarios no se debe guardar ni escribir objetos string porque al ser
* dinamicos contienen punteros y lo que en realidad se guardaria seria el
* puntero y no la informacion a la que apunta. Esta estructura sirve de
* intermediaria para guardar y escribir los datos de una Cliente.
**/
struct registro_Cliente {
	char nombre[256];
	char apellido[256];
	char telefono[256];
	char direccion[256];
	char localidad[256];
	char email[256];
	int dia_nac, mes_nac, anio_nac;
};


/**
* @brief Clase que representa a una Cliente.
*
* Contiene los atributos que se guardan de cada Cliente, metodos para definirlos
* y modificarlos, para validar los datos, y para guardar o escribir en archivos
* binarios.
**/
class Cliente {

private:

	// datos de una Cliente
	std::string nombre; ///< nombres de la Cliente
	std::string apellido; ///< apellido de la Cliente
	std::string telefono; ///< telefono de la Cliente
	std::string direccion; ///< direccion de la Cliente
	std::string localidad; ///< localidad donde vive la Cliente
	std::string email; ///< direccion de correo electronico de la Cliente
	int dia_nac; ///< dia de la fecha de naciemiento
	int mes_nac; ///< mes de la fecha de naciemiento
	int anio_nac; ///< a�o de la fecha de naciemiento

public:

	// construir un obejto con los datos
	/// Inicializa los datos de una Cliente
	Cliente(std::string a_nombre="", std::string a_apellido="", std::string a_telefono="",
			std::string a_direccion="", std::string a_localidad="", std::string a_email="",
			int a_dia=0, int a_mes=0, int a_anio=0);

	/// Valida que los datos cargados sean correctos y suficientes
	std::string ValidarDatos();

	// obtener los datos guardados
	std::string VerNombre() const; ///< devuelve el nombre de la Cliente
	std::string VerApellido() const; ///< devuelve el apellido de la Cliente
	std::string VerDireccion() const; ///< devuelve la direccion de la Cliente
	std::string VerLocalidad() const; ///< devuelve la localidad de la Cliente
	std::string VerTelefono() const; ///< devuelve el telefono de la Cliente
	std::string VerEmail() const; ///< devuelve la direccion de correo electronico de la Cliente
	int VerDiaNac() const; ///< devuelve el dia de nacimiento de la Cliente
	int VerMesNac() const; ///< devuelve el mes de nacimiento de la Cliente
	int VerAnioNac() const; ///< devuelve el anio de nacimiento de la Cliente

	// modificar los datos
	void ModificarNombre(std::string a_nombre); ///< actualiza el nombre de la Cliente
	void ModificarApellido(std::string a_apellido); ///< actualiza el apellido de la Cliente
	void ModificarDireccion(std::string a_direccion); ///< actualiza la direccion de la Cliente
	void ModificarLocalidad(std::string a_localidad); ///< actualiza la localidad de la Cliente
	void ModificarTelefono(std::string a_telefono); ///< actualiza el telefono de la Cliente
	void ModificarEmail(std::string a_email); ///< actualiza la direccion de correo electronico de la Cliente
	void ModificarFechaNac(int a_dia, int a_mes, int a_anio); ///< actualiza la fecha de nacimiento de la Cliente


	/// guarda su registro en un archivo binario
	void GuardarEnBinario(std::ofstream &archivo);
	/// lee su registro desde un archivo binario
	void LeerDesdeBinario(std::ifstream &archivo);

};

// crirerios para comparar dos Clientes

/// @brief Funcion para comparar dos Clientes por nombre y apellido
bool criterio_comparacion_apellido_y_nombre(const Cliente &p1, const Cliente &p2);
/// @brief Funcion para comparar Clientes por direccion
bool criterio_comparacion_direccion(const Cliente &p1, const Cliente &p2);
/// @brief Funcion para comparar dos Clientes por telefono
bool criterio_comparacion_telefono(const Cliente &p1, const Cliente &p2);
/// @brief Funcion para comparar dos Clientes por email
bool criterio_comparacion_email(const Cliente &p1, const Cliente &p2);

#endif
