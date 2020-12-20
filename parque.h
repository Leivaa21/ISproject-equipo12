/**
 * @Archivo parque.h
 * @Contiene Clase Parque
 */

#ifndef __PARQUE__
#define __PARQUE__

#include "ruta.h"
#include "sendero.h"

class Parque;

/**
 * La clase Parque gestiona los datos y dependecias del parque.
 */

class Parque{ //Clase Parque

	private:
		string nombre_, ubicacion_, provincia_, municipio_, fechaDeclaracion_, reconocimiento_; /**< Guardan datos del parque */
		int superficie_; /**< Guarda la superficie que ocupa el parque */
		list<Sendero> senderos_; /**< Guarda una lista con los sendero que pasan por el parque el parque */
		list<Ruta> rutas_; /**< Guarda una lista con las rutas que hay en el parque */


	public:

		/**
         * @function Parque()
         * 
         * @param <string> nombre, 
         * @param <int> superficie
         * @param <string> ubicacion
         * @param <string> provincia
         * @param <string> municipio
		 * @param <string> fecha
         * @param <string> reconocimiento
		 * 
         * Constructor de clase. Nos pide como parametros todas sus variables
         * y retorna un objeto de dicha clase.
         */
		Parque(string nombre="\0", int superficie=0, string ubicacion="\0", string provincia="\0", string municipio="\0", string fecha="\0", string reconocimiento="\0");

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
         * el valor de la variable privada superficie_
         * 
         * @function setSuperficie() 
         * @param <int> superficie
         * Recibe un <int> superficie y lo asigna a la variable superficie_.
         * 
         * @function getSuperficie() 
         * Nos retorna el valor constante de superficie_.
         * @return <int> superficie_
         */
		inline void setSuperficie(int superficie) {superficie_=superficie;}
		inline int getSuperficie() const {return superficie_;}

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada ubicacion_
         * 
         * @function setUbicacion() 
         * @param <string> ubicacion
         * Recibe un <string> ubicacion y lo asigna a la variable ubicacion_.
         * 
         * @function getUbicacion() 
         * Nos retorna el valor constante de ubicacion_.
         * @return <string> ubicacion_
         */
		inline void setUbicacion(string ubicacion) {ubicacion_=ubicacion;}
		inline string getUbicacion() const {return ubicacion_; }

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada provincia_
         * 
         * @function setprovincia() 
         * @param <string> provincia
         * Recibe un <string> provincia y lo asigna a la variable provincia_.
         * 
         * @function getProvincia() 
         * Nos retorna el valor constante de provincia_.
         * @return <string> provincia_
         */
		inline void setProvincia(string provincia) {provincia_=provincia;}
		inline string getProvincia() const {return provincia_;}

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada municipio_
         * 
         * @function setMunicio() 
         * @param <string> municipio
         * Recibe un <string> municipio y lo asigna a la variable municipio_.
         * 
         * @function getMunicipio() 
         * Nos retorna el valor constante de municipio_.
         * @return <string> municipio_
         */
		inline void setMunicipio(string municipio) {municipio_=municipio;}
		inline string getMunicipio() const {return municipio_;}

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
		inline void setFecha(string fecha) {fechaDeclaracion_=fecha;}
		inline string getFecha() const {return fechaDeclaracion_;}

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada reconocimiento_
         * 
         * @function setReconocimiento() 
         * @param <string> reconocimiento
         * Recibe un <string> reconocimiento y lo asigna a la variable reconocimiento_.
         * 
         * @function getReconocimiento() 
         * Nos retorna el valor constante de reconocimiento_.
         * @return <string> reconocimiento_
         */
		inline void setReconocimiento(string reconocimiento) {reconocimiento_=reconocimiento;}
		inline string getReconocimiento() const {return reconocimiento_;}

		/**
         * La siguiente funcion recibe un objeto de la clase Sendero y lo añade a la lista
         * de senderos del parque
         *
         * @function addSendero() 
         * @param <Sendero> *sendero
         *
         * Añade un objeto a la lista de senderos del parque
         */
		bool addSendero(Sendero *sendero);

		/**
         * La siguiente funcion recibe el nombre de un sendero y lo elimina de la lista
         * de senderos del parque
         *
         * @function removeSendero() 
         * @param <string> nombre
         *
         * Elimina un sendero de la lista de senderos del parque
         */
		bool removeSendero(string nombre);

		/**
         * Devuelve la lista de los sendero del parque
         * 
         * @function getSenderos() 
         * Nos retorna la lista constante senderos_.
         * @return <list<Sendero>> senderos_
         */
		inline list<Sendero> getSenderos() const {return senderos_;}

		/**
         * La siguiente funcion recibe un objeto de la clase Ruta y lo añade a la lista
         * de rutas del parque
         *
         * @function addRuta() 
         * @param <Ruta> *ruta
         *
         * Añade un objeto a la lista de rutas del parque
         */
		bool addRuta(Ruta *ruta);

		/**
         * La siguiente funcion recibe el codigo de una ruta y la elimina de la lista
         * de rutas del parque
         *
         * @function removeRuta() 
         * @param <int> codigo
         *
         * Elimina una ruta de la lista de rutas del parque
         */
		bool removeRuta(int codigo);

		/**
         * Devuelve la lista de las rutas del parque
         * 
         * @function getRutas() 
         * Nos retorna la lista constante rutas_.
         * @return <list<Ruta>> rutas_
         */
		inline list<Ruta> getRutas() const {return rutas_;}
};

#endif
