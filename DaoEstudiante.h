/**
 * @file   DaoEstudiante.h
 * @Author Saul Gausin
 * @date   October, 2017
 * @brief  Header de la implementacion del patrón de diseño DAO para la clase Estudiante.
 *
 * Header de la implementacion del patrón de diseño DAO para la clase Estudiante. Para la 
 * creación, lectura, edición y eliminación de un objeto de la clase Estudiante.
 */

#ifndef DAOESTUDIANTE_H
#define DAOESTUDIANTE_H

// Libreria para la conexion a la base de datos
#include "mysql_connection.h"

// Interface de Dao
#include "Dao.h"

// Clase Estudiante
#include "Estudiante.h"

// Se hace una implementacion de la interfaz Dao
class DaoEstudiante: public Dao {
public:
  // Constructor recibe como parametro un objeto de la clase Estudiante
  DaoEstudiante(Estudiante est);

  // crea un registro en la tabla Estudiante, a partir del contenido de un objeto de la clase Estudiante
  void create();
  void read();
  void update();
  void deleted();
private:
  // objeto conexion de la Clase Connection  
  sql::Connection *con;
  // objeto est de la clase Estudiante
  Estudiante est;
};
#endif
