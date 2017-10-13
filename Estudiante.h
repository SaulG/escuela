/**
 * @file   DaoEstudiante.h
 * @Author Saul Gausin
 * @date   October, 2017
 * @brief  Header de la clase Estudiante.
 *
 * Header de la clase Estudiante con atributos nombre, apellidos y
 * edad; y setter y getters de cada atributo.
 */

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

// Libreria de la clase string
#include <string>

// usa el espacio std
using namespace std;

// clase Estudiante
class Estudiante {
// atributos de la clase: nombre, apellidos y edad
private:
  string nombre;
  string apellidos;
  int edad;

// metodos de la clase
public:
  // Asigna al atributo nombre el nuevo valor recibido
  void setNombre(string);
  // Asigna al atributo apellidos el nuevo valor recibido  
  void setApellidos(string);
  // Asigna al atributo edad el nuevo valor recibido    
  void setEdad(int);
  // Obtiene el atributo nombre
  string getNombre();
  // Obtiene el atributo apellidos 
  string getApellidos();
  // Obtiene el atributo edad    
  int getEdad();
};

#endif //ESTUDIANTE_H
