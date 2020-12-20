/**
 * @Archivo administrador.h
 * @Contiene Clase Administrador
 */

#ifndef __ADMINISTRADOR__
#define __ADMINISTRADOR__

#include "persona.h"
#include "reserva.h"
#include "monitor.h"
#include "incidencia.h"

using std::cout;
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

        /**
         * @function addReserva()
         * @param <list<Reserva>> *Reservas
         * @param <string> id
         * @param <list<Visitante>::iterator> itvisitante 
         * @param <list<Ruta>::iterator> itruta
         * 
         * Recibe un puntero a la lista de reservas, un id, un iterador de lista visitante y un iterador de la lista de rutas y 
         * crea una reserva y añade al participante a la ruta correspondiente y la añade a la lista Reservas. Si pudo hacerlo
         * retornara true.
         * Si no se pudo crear la reserva dara un mensaje de error por consola  y retornara false.
         * 
         * @return <bool> true|false
         */
        bool addReserva(list<Reserva> *Reservas, string id, list<Visitante>::iterator itvisitante, list<Ruta>::iterator itruta);

        /**
         * @function removeReserva()
         * @param <list<Reserva>> *Reservas
         * @param <Reserva> reserva
         * 
         * Recibe un puntero a la lista de reservas y una reserva y la borra utilizando 
         * los iteradores, si pudo eliminar la reserva retornara true, si no pudo borrar 
         * el participante retornara false y enviara un mensaje de error por consola, 
         * al igual que si no pudo elimirar la reserva por completo.
         * 
         * @return <bool> true|false
         */
        bool removeReserva(list<Reserva> *Reservas, Reserva reserva);

        /**
         * @function removeReserva()
         * @param <list<Reserva>> *Reservas
         * @param <string> id 
         * 
         * Recibe un puntero a la lista de reservas y un id de una reserva y la borra 
         * utilizando los iteradores, si pudo eliminar la reserva retornara true, si no pudo 
         * borrar el participante retornara false y enviara un mensaje de error por consola, 
         * al igual que si no pudo elimirar la reserva por completo.
         * 
         * @return <bool> true|false
         */
        bool removeReserva(list<Reserva> *Reservas, string id);
        
        /**
         * @function addParque();
         * @param <string> nombre
         * @param <int> superficie
         * @param <string> ubicacion
         * @param <string> provincia
         * @param <string> municipio
         * @param <string> fecha
         * @param <string> reconocimiento
         * 
         * Recibe los parametros necesarios para iniciar un objeto de clase 
         * Parque y lo retorna
         */
        Parque addParque(string nombre, int superficie, string ubicacion, string provincia, string municipio, string fecha, string reconocimiento);
        
        /**
         * @function addMonitor();
         * @param <string> correo
         * @param <string> password
         * @param <string> nombre
         * @param <string> apellido1
         * @param <string> apellido2
         * @param <string> dni
         * @param <string> fecha
         * @param <int> telefono
         * @param <string> direccion
         * 
         * Recibe los parametros necesarios para iniciar un objeto de clase 
         * monitor y lo retorna
         */        
        Monitor addMonitor(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha, int telefono, string direccion);
        

        /**
         * @function getParticipantes();
         * @param <list<Ruta>::iterator> itruta
         * 
         * Recibe un iterador de la lista de ruta y retorna su lista de participantes
         * Si no pudo encontrarla manda un mensaje de error por la consola
         * 
         * @return  list<Visitante> 
         */
        list<Visitante> getParticipantes(list<Ruta>::iterator itruta);

        /**
         * @function getIncidencia();
         * @param <Sendero> sendero
         * @param <int> id
         * 
         * Recibe un sendero y la id de una incidencia y retorna dicha incidencia
         * 
         * @return <Incidencia>
         */
        Incidencia getIncidencia(Sendero sendero, int id);


        /**
         * @function modificarEstadoSendero()
         * @param <list<Sendero>::iterator> sendero
         * @param <stringf> disponibilidad
         * 
         * Recibe un iterador a sendero y la disponibilidad que deberia de tener y lo 
         * actualiza , si pudo modificarlo retorna true y si no pudo 
         * retornara false con un mensaje de error
         * 
         * @return <bool> true|false
         */
        bool modificarEstadoSendero(list<Sendero>::iterator itsendero, string disponibilidad);

        /**
         * @function listParques()
         * @param <list<Parque>> Parques
         * 
         * Lista el nombre de todos los parques incluidos en la lista Parques
         */
        void listParques(list<Parque> Parques);
        };

#endif