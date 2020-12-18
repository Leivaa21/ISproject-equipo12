/**
 * @Archivo monitor.h
 * @Contiene Clase Monitor
 */

#ifndef __MONITOR__
#define __MONITOR__

#include <list>
#include "persona.h"


std::list<Monitor> globalMonitores;


/**
 * La clase Monitor da forma al rol de Monitor, la persona  con dicho rol 
 * debe de poder gestionar algunos aspectos de la aplicación tales como rutas 
 * y ver los participantes de cada ruta.
 */
class Monitor : public Persona{
    private:
        int telefono_;      /**< Guarda el teléfono de contacto del visitante.*/
        string direccion_,  /**< Guarda la dirección del monitor.*/
        correo_,            /**< Guarda el correo electrónico del administrador */
        password_;          /**< Guarda la contraseña del administrador */
    public:
    
        /**
         * @function Persona()
         * 
         * @param <string> nombre, 
         * @param <string> apellido1
         * @param <string> apellido2
         * @param <string> dni
         * @param <string> fecha 
         * 
         * Constructor de clase. Nos pide como parametros todas sus variables
         * y retorna un objeto de dicha clase.
         */
        Monitor(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha, int telefono, string direccion);
        
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
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada direccion_
         * 
         * @function setDireccion() 
         * @param <string> direccion
         * Recibe un <string> direccion y lo asigna a la variable direccion_.
         * 
         * @function getDireccion() 
         * Nos retorna el valor constante de direccion_.
         * @return <string> direccion_
         */
        inline void setDireccion(string direccion){direccion_=direccion;}
        inline string getDireccion()const{return direccion_;}
        
        /**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada correo_
         * 
         * @function setCorreo() 
         * @param <string> correo
         * Recibe un <string> correo y lo asigna a la variable correo_.
         * 
         * @function getCorreo() 
         * Nos retorna el valor constante de correo_.
         * @return <string> correo_
         */
        inline void setCorreo(string correo){correo_=correo;}
        inline string getCorreo()const{return correo_;}
        
        /**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada password_
         * 
         * @function setPassword() 
         * @param <string> password
         * Recibe un <string> password y lo asigna a la variable password_.
         * 
         * @function getPassword() 
         * Nos retorna el valor constante de password_.
         * @return <string> password_
         */
        inline void setPassword(string password){password_=password;}
        inline string getPassword()const{return password_;}
};

#endif