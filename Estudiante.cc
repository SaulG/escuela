/**
 * @file   DaoEstudiante.cc
 * @Author Saul Gausin
 * @date   October, 2017
 * @brief  Implementacion de las funciones de la clase Estudiante.
 *
 * Implementacion de las funciones de la clase Estudiante.
 */

// importa cabecera Estudiante
#include "Estudiante.h"
// importa clase string
#include <string>

// usa el espacio std
using namespace std;

// Asigna al atributo nombre el nuevo valor recibido
void Estudiante::setNombre(string nombre) {
  this->nombre = nombre;
}

// Asigna al atributo apellidos el nuevo valor recibido  
void Estudiante::setApellidos(string apellidos) {
  this->apellidos = apellidos;
}

// Asigna al atributo edad el nuevo valor recibido    
void Estudiante::setEdad(int edad) {
  this->edad = edad;
}

// Obtiene el atributo nombre
string Estudiante::getNombre() {
  return nombre;
}

// Obtiene el atributo apellidos 
string Estudiante::getApellidos() {
  return apellidos;
}

// Obtiene el atributo edad    
int Estudiante::getEdad() {
  return edad;
}
