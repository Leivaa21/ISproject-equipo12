/**
 * @Archivo sendero.h
 * @Contiene Clase Sendero
 */

#ifndef __SENDERO__
#define __SENDERO__

#include "incidencia.h"

class Ruta;
class Parque;
list<Sendero> globalSenderos;

/**
 * La clase Sednero gestiona los datos y problemas en los senderos del parque.
 */

class Sendero{ //Clase Sendero

	private:
		string nombre_, descripcion_, dificultad_, disponibilidad_; /**< Guardan datos del sendero */
		list<Incidencia> incidencias_; /**< Guarda la lista de las incidencia en los senderos */
		list<Parque>::iterator parque_; /**< Interador para las listas de tipo Parque */

	public:

		/**
         * @function Parque()
         * 
         * @param <string> nombre, 
         * @param <string> descripcion
         * @param <string> dificultad
         * @param <string> disponibilidad
		 * 
         * Constructor de clase. Nos pide como parametros todas sus variables
         * y retorna un objeto de dicha clase.
         */
		Sendero(string nombre="\0", string descripcion="\0", string dificultad="\0", string disponibilidad="NO DISPONIBLE");

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
		inline void setNombre(string nombre) {nombre_=nombre;}
		inline string getNombre() const {return nombre_;}

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada descripcion_
         * 
         * @function setDescripcion() 
         * @param <string> descripcion
         * Recibe un <string> descripcion y lo asigna a la variable descripcion_.
         * 
         * @function getDescripcion() 
         * Nos retorna el valor constante de descripcion_.
         * @return <string> descripcion_
         */
		inline void setDescripcion(string descripcion) {descripcion_=descripcion;}
		inline string getDescripcion() const {return descripcion_;}

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada deficultad_
         * 
         * @function setDificultad() 
         * @param <string> dificultad
         * Recibe un <string> dificultad y lo asigna a la variable dificultad_.
         * 
         * @function getDificultad() 
         * Nos retorna el valor constante de dificultad_.
         * @return <string> dificultad_
         */
		inline void setDificultad(string dificultad) {dificultad_=dificultad;}
		inline string getDificultad() const {return dificultad_;}

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada disponibilidad_
         * 
         * @function setDisponibilidad() 
         * @param <string> disponibilidad
         * Recibe un <string> disponibilidad y lo asigna a la variable disponibilidad_.
         * 
         * @function getDisponibilidad() 
         * Nos retorna el valor constante de disponibilidad_.
         * @return <string> disponibilidad_
         */
		bool setDisponibilidad(string disponibilidad);
		inline string getDisponibilidad() const {return disponibilidad_;}

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la lista privada parque_
         * 
         * @function setParque() 
         * @param <list<Parque>::iterator> parque
         * Recibe un <list<Parque>::iterator> parque y lo asigna a la variable parque_.
         * 
         * @function getParque() 
         * Nos retorna la lista constante parque_.
         * @return <list<Parque>::iterator> parque_
         */
		inline void setParque(list<Parque>::iterator parque) {parque_=parque;}
		inline list<Parque>::iterator getParque() const {return parque_;}
		
		/**
         * La siguiente funcion recibe los parámetros propios de la clase ‘Incidencia’ y añade un objeto a la lista
         * de incidencias del parque
         *
         * @function addIncidencia() 
         * @param <int> id
         * @param <string> descripcion
		 * @param <list<Ruta>::iterator> ruta
         *
         * Añade un objeto a la lista de incidencias del parque
         */
		bool addIncidencia(int id, string descripcion, list<Ruta>::iterator ruta);

		/**
         * La siguiente funcion recibe el identificador de una incidencia (Su variable id_) y elimina ese objeto de la lista de incidencias de ese parque
         * @function removeIncidencia() 
         * @param <int> id
         * Recibe el id de la incidencia y la elimina de la lista
        */
		bool removeIncidencia(int id);

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la lsita privada incidencias_
         * 
         * @function setIncidencias() 
         * @param <list<Incidencia>> incidencias
         * Recibe un <list<Incidencia>> incidencias y lo asigna a la variable incidencias_.
         * 
         * @function getIncidencias() 
         * Nos retorna la lista constante incidencias_.
         * @return <list<Incidencia>> incidencias_
         */
		inline void setIncidencias(list<Incidencia> incidencias) {incidencias_=incidencias;}
		inline list<Incidencia> getIncidencias() const {return incidencias_;}
};

#endif
