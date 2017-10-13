/**
 * @file   DaoEstudiante.cc
 * @Author Saul Gausin
 * @date   October, 2017
 * @brief  Implementacion del patrón de diseño DAO para la clase Estudiante.
 *
 * Implementacion del patrón de diseño DAO para la clase Estudiante. Para la 
 * creación, lectura, edición y eliminación de un objeto de la clase Estudiante.
 */

// importacion de clase Connection
#include "mysql_connection.h"
// importacion de la clase Driver
#include <cppconn/driver.h>
// importacion de la clase PreparedStatement
#include <cppconn/prepared_statement.h>
// importacion de la clase Exception
#include <cppconn/exception.h>

// importacion de la clase Escuela
#include "Estudiante.h"
// importacion de la clase DaoEstudiante
#include "DaoEstudiante.h"

// Constructor recibe como parametro un objeto de la clase Estudiante
DaoEstudiante::DaoEstudiante(Estudiante est) {
    this->est = est;
}

// crea un registro en la tabla Estudiante, a partir del contenido de un objeto de la clase Estudiante
void DaoEstudiante::create() {

  // objeto de la clase Driver
  sql::Driver *driver;
  // objeto de la clase PreparedStatement
  sql::PreparedStatement *prep_statement;

  // obtiene una instancia del driver
  driver = get_driver_instance();

  // realiza una conexion a la base de datos con host 127.0.0.1 y puerto 3306
  // utilizando como usuario root y contraseña password
  this->con = driver->connect("tcp://127.0.0.1:3306", "root", "password");

  // utiliza la base de datos 'escuela'
  this->con->setSchema("escuela");
  
  try {

    // prepara el enunciado de la consulta
    prep_statement = this->con->prepareStatement("INSERT estudiante (nombre, apellidos, edad) VALUES (?, ?, ?)");

    // asigna el primer parametro del enunciado, nombre
    prep_statement->setString(1, this->est.getNombre());
    // asigna el segundo parametro del enunciado, apellidos    
    prep_statement->setString(2, this->est.getApellidos());
    // asigna el tercer parametro del enunciado, edad        
    prep_statement->setInt(3, this->est.getEdad());

    // ejecuta el query y regresa el numero de filas afectadas
    int result = prep_statement->executeUpdate();

    // si el numero de filas afectadas es igual uno entonces se
    // realizo una insercion correcta, en otro caso, no lo hizo
    if (result == 1) {
      std::cout << "La insercion del estudiante, se hizo correctamente." << std::endl;
    } else {
      std::cout << "No se hizo la insercion del estudiante" << std::endl;
    }
  } catch (sql::SQLException &e) {
    // imprime la excepcion capturada de las lineas de codigo dentro
    // del try
    std::cerr << "SQLException: " << e.what() << '\n';
  }

}

void DaoEstudiante::read() {}
void DaoEstudiante::update() {}
void DaoEstudiante::deleted() {}
