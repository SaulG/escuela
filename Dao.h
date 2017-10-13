/**
 * @file   Dao.h
 * @Author Saul Gausin
 * @date   October, 2017
 * @brief  Interfaz del patrón de diseño del objeto de acceso de datos (DAO por sus siglas en inglés).
 *
 * Interfaz del patrón de diseño del objeto de acceso de datos (DAO
 * por sus siglas en inglés). Se definen las funciones create, read,
 * update y deleted (delete es una palabra reservada); donde se hace
 * creación, lectura, edición y eliminación de un objeto.
 */

#ifndef DAO_H
#define DAO_H

class Dao {
 public:
  /**
   * Crea un objeto
   */
  virtual void create() = 0;

  /**
   * Lee un objeto
   */  
  virtual void read() = 0;

  /**
   * Edita un objeto
   */    
  virtual void update() = 0;

  /**
   * Elimina un objeto
   */      
  virtual void deleted() = 0;
};
#endif
