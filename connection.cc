// Debemos incluir las siguientes cabeceras
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/resultset.h>
 
#include <cppconn/statement.h>
#include <cppconn/exception.h>
         
int main()
{
    sql::Driver *driver;
    sql::Connection *connection;
    sql::Statement *statement;
    sql::ResultSet *resultset;
 
    // Nos conectamos a nuestro servidor MySQL
    driver = get_driver_instance();
    connection = driver->connect("tcp://127.0.0.1:3306", "root", "password");
 
    // Elegimos una base datos que ya tengamos creada ("prueba")
    connection->setSchema("escuela");
 
    // Hacemos nuestra primera consulta
    statement = connection->createStatement();
    resultset = statement->executeQuery("SELECT nombre, apellidos, edad FROM estudiante");
 
    // Pintamos el resultado
    while (resultset->next()) {
        std::cout << " Nombre: " << resultset->getString(1);
        std::cout << "\n Apellido: " << resultset->getString(2);
        std::cout << "\n Edad: " << resultset->getInt(3);	
        std::cout << std::endl;
    }
 
    // Eliminamos los objetos
    delete resultset;
    delete statement;
    delete connection;
}
