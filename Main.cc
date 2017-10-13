#include <string>

#include "DaoEstudiante.h"
#include "Estudiante.h"

using namespace std;

int main()
{

  cout << "Creando estudiante" << endl;
  Estudiante est;
  string nombre("Saul");
  string apellidos("Gausin");
  est.setNombre (nombre);
  est.setApellidos (apellidos);
  est.setEdad (25);
  
  cout << "Guardando estudiante" << endl;
  DaoEstudiante dao (est);
  dao.create();
  
  return 0;
}
