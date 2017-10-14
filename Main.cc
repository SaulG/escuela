// libreria de la clase string
#include <string>

// importa clase DaoEstudiante
#include "DaoEstudiante.h"

// importa clase Estudiante
#include "Estudiante.h"

// usa el espacio std
using namespace std;

int main()
{

  cout << "Creando estudiante" << endl;

  // crea objeto de la clase Estudiante
  Estudiante est;

  // asigna nombre al objeto est
  est.setNombre ("Saul");
  // asigna apellidos al objeto est
  est.setApellidos ("Gausin");
  // asigna edad al objeto edad
  est.setEdad (25);

  // guarda el registro estudiante en la base de datos
  cout << "Guardando estudiante" << endl;
  DaoEstudiante dao (est);
  dao.create();
  
  return 0;
}
