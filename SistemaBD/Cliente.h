
#ifndef Cliente_H
#define Cliente_H
#include <string>
#include <fstream>


struct registro_Cliente {
	char nombre[256];
	char apellido[256];
	char telefono[256];
	char direccion[256];
	char localidad[256];
	char email[256];
	int dni;
	float saldo;
};


class Cliente {

private:

	// datos de un Cliente
	std::string nombre; ///< nombres del Cliente
	std::string apellido; ///< apellido del Cliente
	std::string telefono; ///< telefono del Cliente
	std::string direccion; ///< direccion del Cliente
	std::string localidad; ///< localidad donde vive el Cliente
	std::string email; ///< direccion de correo electronico del Cliente
	int dni;
	float saldo;

public:

	// construir un obejto con los datos
	/// Inicializa los datos de el Cliente
	Cliente(std::string a_nombre="", std::string a_apellido="", std::string a_telefono="",
			std::string a_direccion="", std::string a_localidad="", std::string a_email="",
			int a_dni=0, float a_saldo=0);

	/// Valida que los datos cargados sean correctos y suficientes
	std::string ValidarDatos();

	// obtener los datos guardados
	std::string VerNombre() const; ///< devuelve el nombre del Cliente
	std::string VerApellido() const; ///< devuelve el apellido del Cliente
	std::string VerDireccion() const; ///< devuelve la direccion del Cliente
	std::string VerLocalidad() const; ///< devuelve la localidad del Cliente
	std::string VerTelefono() const; ///< devuelve el telefono del Cliente
	std::string VerEmail() const; ///< devuelve la direccion de correo electronico del Cliente
	int VerDni() const; // devuelve el dni
	float VerSaldo() const; // Vemos el Saldo

	// modificar los datos
	void ModificarNombre(std::string a_nombre); ///< actualiza el nombre de la Cliente
	void ModificarApellido(std::string a_apellido); ///< actualiza el apellido del Cliente
	void ModificarDireccion(std::string a_direccion); ///< actualiza la direccion del Cliente
	void ModificarLocalidad(std::string a_localidad); ///< actualiza la localidad del Cliente
	void ModificarTelefono(std::string a_telefono); ///< actualiza el telefono del Cliente
	void ModificarEmail(std::string a_email); ///< actualiza la direccion de correo electronico del Cliente
	void ModificarDni(int a_dni); ///< actualiza el dni del Cliente
	void ModificarSaldo (float a_saldo); // Actualiza el Saldo

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
