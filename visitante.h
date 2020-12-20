/**
 * @Archivo visitante.h
 * @Contiene Clase Visitante
 */

#ifndef __VISITANTE__
#define __VISITANTE__

#include "persona.h"
#include <list>
using std::list;

/**
 * La clase Visitante sirve como formato para guardar a cada visitante/cliente, 
 * este usuario no interactúa con la aplicación
 * Heredada de Persona
 * @see class Persona 
 */
class Visitante : public Persona {
    private:
        int telefono_;                  /**< Guarda el teléfono de contacto del visitante.*/
        list<string> requerimientos_;   /**< Guarda una lista con los requerimientos especiales, 
                                        * tales como discapacidades, enfermedades, etc.. */
    public:

        /**
         * @function Visitante()
         * 
         * @param <string> nombre, 
         * @param <string> apellido1
         * @param <string> apellido2
         * @param <string> dni
         * @param <string> fecha 
         * @param <int> telefono
         * 
         * Constructor de clase. Nos pide como parametros todas sus variables
         * a excepcion de la lista de requerimientos, ya que se inicializará vacia
         * y retorna un objeto de dicha clase.
         */
        Visitante(string nombre, string apellido1, string apellido2, string dni, string fecha, int telefono);
        
        /**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada telefono_
         * 
         * @function setTelefono() 
         * @param <int> telefono
         * Recibe un <int> telefono y lo asigna a la variable telefono_.
         * 
         * @function getTelefono() 
         * Nos retorna el valor constante de telefono_.
         * @return <int> telefono_
         */
        inline void setTelefono(int telefono){telefono_=telefono;}
        inline int getTelefono()const{return telefono_;}
        
        /** 
         * @function addRequerimiento()
         * @param <string> requerimiento
         * Recibe un <string> requerimiento y lo añade a la lista requerimientos_
         */
        inline void  addRequerimiento(string requerimiento){requerimientos_.push_back(requerimiento);}
        
        /** 
         * @function removeRequerimiento()
         * @param <string> requerimiento
         * Recibe un <string> requerimiento y lo busca en la lista requerimientos_
         * cuando lo encuentra lo elimina y notifica por consola si pudo eliminarlo
         * o si por el contrario falló al encontrarlo.
         */
        void removeRequerimiento(string requerimiento);
        
        /** 
         * @function getRequerimientos() 
         * Nos retorna el valor constante de requerimientos_.
         * @return list<string> requerimientos_
         */

        inline list<string> getRequerimientos()const{return requerimientos_;}
};

#endif