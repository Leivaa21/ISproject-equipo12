/**
 * @Archivo persona.h
 * @Contiene Clase persona (CLASE MADRE)
 */

#ifndef __PERSONA__
#define __PERSONA__

#include <iostream>
#include <string>


using std::string;
/**
 * La clase Persona sirve para dar forma a las clases Administrador, 
 * Monitor y Visitante
 */
class Persona{
    private:
        string nombre_, /**< Guarda el nombre de la persona.*/
        apellido1_,     /**< Guarda el primer apellido de la persona.*/
        apellido2_,     /**< Guarda el segundo apellido de la persona.*/
        dni_,           /**< Guarda el DNI de la persona.*/
        fecha_;         /**< Guarda la fecha de nacimiento de la persona.*/
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
        Persona(string nombre, string apellido1, string apellido2, string dni, string fecha);
       
        /**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada nombre_
         * 
         * @function setNombre() 
         * @param <string> nombre
         * Recibe un <string> nombre y lo asigna a la variable nombre_.
         * 
         * @function getNombre() 
         * Nos retorna el valor constante de nombre_.
         * @return <string> nombre_
         */
        inline void setNombre(string nombre){nombre_=nombre;}
        inline string getNombre()const{return nombre_;}
       
        /**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada apellido1_
         * 
         * @function setApellido1() 
         * @param <string> ap1
         * Recibe un <string> ap1 y lo asigna a la variable apellido1_.
         * 
         * @function getApellido1() 
         * Nos retorna el valor constante de apellido1_.
         * @return <string> apellido1_
         */
        inline void setApellido1(string ap1){apellido1_=ap1;}
        inline string getApellido1()const{return apellido1_;}
        
        /**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada apellido2_
         * 
         * @function setApellido2() 
         * @param <string> ap2
         * Recibe un <string> ap2 y lo asigna a la variable apellido2_.
         * 
         * @function getApellido2() 
         * Nos retorna el valor constante de apellido2_.
         * @return <string> apellido2_
         */
        inline void setApellido2(string ap2){apellido2_=ap2;}
        inline string getApellido2()const{return apellido2_;}
        
        /**
         * Las siguientes dos f unciones están dedicadas a definir y de devolver
         * el valor de la variable privada dni_
         * 
         * @function setDni() 
         * @param <string> dni
         * Recibe un <string> dni y lo asigna a la variable dni_.
         * 
         * @function getDni() 
         * Nos retorna el valor constante de dni_.
         * @return <string> dni_
         */
        inline void setDni(string dni){dni_=dni;}
        inline string getDni()const{return dni_;}
        
        /**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada fecha_
         * 
         * @function setFecha() 
         * @param <string> fecha
         * Recibe un <string> fecha y lo asigna a la variable fecha_.
         * 
         * @function getFecha() 
         * Nos retorna el valor constante de fecha_.
         * @return <string> fecha_
         */
        inline void setFecha(string fecha){fecha_=fecha;}
        inline string getFecha()const{return fecha_;}
};

#endif