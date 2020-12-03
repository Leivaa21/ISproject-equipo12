/**
 * @Archivo administrador.h
 * @Contiene Clase Administrador
 */

#ifndef __ADMINISTRADOR__
#define __ADMINISTRADOR__

#include "persona.h"
/**
 * La clase Administrador da forma al rol de Administrador, la persona  con 
 * dicho rol debe de poder gestionar la aplicación y los datos de la misma.
 */
class Administrador : public Persona {
    private:
        string correo_, /**< Guarda el correo electrónico del administrador */
        password_;      /**< Guarda la contraseña del administrador */
    public:

        /**
         * @function Administrador()
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
        Administrador(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha);
        
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