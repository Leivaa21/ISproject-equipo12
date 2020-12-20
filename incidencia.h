/**
 * @Archivo incidencia.h
 * @Contiene Clase Incidencia
 */
#ifndef __INCIDENCIA__
#define __INCIDENCIA__

#include <string>
using std::string;
#include <list>
using std::list;

class Ruta;


/**
 * Esta clase sirve de contenedor para almacenar incidencias o avisos
 * sobre una ruta en especifico.
 */
class Incidencia{
	private:
		int id_; 					/**< Guarda la id de una incidencia a forma de un identificador numerico */
		string descripcion_; 		/**< Guarda la descripcion o informacion de la incidencia */
		list<Ruta>::iterator ruta_; /**< Guarda un iterador que apunta a la ruta en cuestion en globalRutas*/

	public:
		
		/**
         * @function Incidencia()
         * 
         * @param <int> id 
         * @param <string> desc
         * @param <list<Ruta>::iterator> ruta 
         * 
         * Constructor de clase. Nos pide como parametros todas sus variables
         * y retorna un objeto de dicha clase.
         */
		Incidencia(int id, string desc, list<Ruta>::iterator ruta);

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada id_
         * 
         * @function setID() 
         * @param <int> id
         * Recibe un <int> id y lo asigna a la variable id_.
         * 
         * @function getID() 
         * Nos retorna el valor constante de id_.
         * @return <int> id_
         */
		inline void setID(int id){id_ = id;}
		inline int getID() const {return id_;}

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
		inline void setDescripcion(string descripcion){descripcion_ = descripcion;}
		inline string getDescripcion() const {return descripcion_;}
		
		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada descripcion_
         * 
         * @function setRuta() 
         * @param <list<Ruta>::iterator> ruta
         * Recibe un <list<Ruta>::iterator> ruta y lo asigna a la variable ruta_.
         * 
         * @function getRuta() 
         * Nos retorna el valor constante de ruta_.
         * @return <list<Ruta>::iterator> ruta_
         */
		inline void setRuta(list<Ruta>::iterator ruta){ruta_ = ruta;}
		inline list<Ruta>::iterator getRuta() const {return ruta_;}
};
#endif
