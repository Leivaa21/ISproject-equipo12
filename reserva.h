/**
 * @Archivo reserva.h
 * @Contiene Clase Reserva
 */

#ifndef __RESERVA__
#define __RESERVA__

#include <iostream>
#include <list>
#include <string>

using std::list;
using std::string;

class Visitante;
class Ruta;

class Reserva;

/**
 * La clase reserva da forma a una reserva cualquiera de un visitante en una ruta.
 * Utiliza iteradores de las listas globales globalVisitantes y globalRutas.
 */

class Reserva{
	private:
		string id_; 							/**< Guarda el identificador de la reserva en un codigo alfanumerico*/
		list<Visitante>::iterator visitante_;	/**< Guarda el iterador que apunta al visitante en la lista globalVisitantes*/
		list<Ruta>::iterator ruta_;				/**< Guarda el iterador que apunta a la ruta en la lista globalRutas*/

	public:

		/**
         * @function Reserva()
         * 
         * @param <string> id 
         * @param <list<Visitante>::iterator> v 
         * @param <list<Ruta>::iterator> r
         * 
         * Constructor de clase. Nos pide como parametros todas sus variables
         * y retorna un objeto de dicha clase.
         */
		Reserva(string id, list<Visitante>::iterator v, list<Ruta>::iterator r);

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
		inline void setID(string id){id_=id;}
		inline string getID()const {return id_;}

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada visitante_
         * 
         * @function setVisitante() 
         * @param <list<Visitante>::iterator> visitante
         * Recibe un <list<Visitante>::iterator> visitante y lo asigna a la variable visitante_.
         * 
         * @function getVisitante() 
         * Nos retorna el valor constante de visitante_.
         * @return <list<Visitante>::iterator> visitante_
         */
		inline void setVisitante(list<Visitante>::iterator visitante){visitante_ = visitante;}
		inline list<Visitante>::iterator getVisitante() const {return visitante_;}

		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada ruta_
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
