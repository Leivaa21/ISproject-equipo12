/**
 * @Archivo ruta.h
 * @Contiene Clase Ruta
 */


#ifndef __RUTA__
#define __RUTA__
#include "visitante.h"

class Sendero;
class Ruta;


/**
 * La clase ruta da forma a una ruta cualquiera de un determinado parque.
 * Utiliza iteradores de las listas globales globalVisitantes y globalRutas.
 */

class Ruta{
	private:
		int codigo_,longitud_,maxParticipantes_; /**< Guarda el codigo identificador, la longitud y los máximos participantes de la ruta*/
		string transporte_,publico_,fechaHora_; /**< Guarda el tipo de transporte, el público hacia el que va dirigido y la fecha y hora de la ruta*/
		float duracion_; /**< Guarda la duración (en minutos) de la ruta*/
		list<Visitante> participantes_; /**< Participantes que participan en la ruta*/
		bool aforoCompleto_; /**< Indica si el aforo está completo o no*/
		list<Sendero>::iterator sendero_; /**< Guarda el iterador qeu apunta al sendero en la lista globalSenderos*/

	public:

		/**
         * @function Ruta()
         * 
         * @param <list<Sendero>::iterator> sendero
         * @param <int> codigo
         * @param <int> longitud
         * @param <string> transporte
         * @param <float> duracion
         * @param <string> publico
         * @param <int> maxPart
         * @param <string> fechaHora
		 * 
         * Constructor de clase. Nos pide como parametros todas sus variables
         * y retorna un objeto de dicha clase.
         */
		Ruta(list<Sendero>::iterator sendero ,int codigo=0, int longitud=0, string transporte="\0", float duracion=0, string publico="\0", int maxPart=0, string fechaHora="\0");
		
		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada codigo_
         * 
         * @function setCodigo() 
         * @param <int> codigo
         * Recibe un <int> codigo y lo asigna a la variable codigo_.
         * 
         * @function getCodigo() 
         * Nos retorna el valor constante de codigo_.
         * @return <int> codigo_
       	 */
		inline void setCodigo(int codigo){codigo_ = codigo;}
		inline int getCodigo() const {return codigo_;}
		
		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada longitud_
         * 
         * @function setLongitud() 
         * @param <int> longitud
         * Recibe un <int> longitud y lo asigna a la variable longitud_.
         * 
         * @function getLongitud() 
         * Nos retorna el valor constante de longitud_.
         * @return <int> longitud_
         */
		inline void setLongitud(int longitud){longitud_ = longitud;}
		inline int getLongitud() const {return longitud_;}
		
		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada transporte_
         * 
         * @function setTransporte() 
         * @param <string> transporte
         * Recibe un <string> transporte y lo asigna a la variable transporte_.
         * 
         * @function getTransporte() 
         * Nos retorna el valor constante de transporte_.
         * @return <string> transporte_
         */
		inline void setTransporte(string transporte){transporte_ = transporte;}
		inline string getTransporte() const {return transporte_;}
		
		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada duracion_
         * 
         * @function setDuracion() 
         * @param <float> duracion
         * Recibe un <float> duracion y lo asigna a la variable duracion_.
         * 
         * @function getDuracion() 
         * Nos retorna el valor constante de duracion_.
         * @return <float> duracion_
         */
		inline void setDuracion(float duracion){duracion_ = duracion;}
		inline float getDuracion() const {return duracion_;}
		
		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada publico_
         * 
         * @function setPublico() 
         * @param <string> publico
         * Recibe un <string> transporte y lo asigna a la variable publico_.
         * 
         * @function getPublico() 
         * Nos retorna el valor constante de publico_.
         * @return <string> publico_
         */
		inline void setPublico(string publico){publico_ = publico;}
		inline string getPublico() const {return publico_;}
		
		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada maxParticipantes_
         * 
         * @function setMaxParticipantes() 
         * @param <int> max
         * Recibe un <int> codigo y lo asigna a la variable maxParticipantes_
         * 
         * @function getMaxParticipantes() 
         * Nos retorna el valor constante de maxParticipantes_
         * @return <int> maxParticipantes_
       	 */
		inline void setMaxParticipantes(int max){maxParticipantes_ = max;}
		inline int getMaxParticipantes() const {return maxParticipantes_;}
		
		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la variable privada fechaHora_
         * 
         * @function setFH() 
         * @param <string> fechaHora
         * Recibe un <string> transporte y lo asigna a la variable fechaHora_
         * 
         * @function getFH() 
         * Nos retorna el valor constante de fechaHora_
         * @return <string> fechaHora_
         */
		inline void setFH(string fechaHora){fechaHora_ = fechaHora;}
		inline string getFH() const {return fechaHora_;}
		
		/**
         * Las siguientes dos funciones están dedicadas a añadir y borra
         * un participante de la lista de participantes asignados a esa ruta
         *
         * @function addParticipante() 
         * @param <Visitante> v
         * Recibe un <Visitante> v y lo añade a la lista de participantes_ siempre
         * que no se supere el numero máximo de participantes y no esté ya registrado
         * en la lista ese visitante
         * 
         * @function removeParticipante() 
         * Recibe un <Visitante> v y lo elimina de la lista participantes_ siempre
         * que se encuentre registrado en la lista
         */
		bool addParticipante(Visitante v);
		bool removeParticipante(Visitante v);

		/**
		 * La siguiente función devuelve el valor de la variable privada participantes_
		 *
		 * @function getParticipantes()
		 * Nos retorna el valor constante de participantes_
		 * @return <list<Visitante>> participantes_
		 */
		inline list<Visitante> getParticipantes() const {return participantes_;}
		
		/**
         * Las siguientes tres funciones están dedicadas a definir y de devolver
         * el valor de la variable privada aforoCompleto_
         * 
         * @function abreRuta() 
         * Si la ruta se encuentra cerrada la abre poniendo aforoCompleto_=false,
         * y si ya se encontraba abierta muestra un mensaje de error
         * 
         * @function cierraRuta() 
         * Si la ruta se encuentra abierta la cierra poniendo aforoCompleto_=true,
         * y si ya se encontraba cerrada muestra un mensaje de error
         *
         * @function getCompleto() 
         * Nos retorna el valor constante de aforoCompleto_
         * @return <bool> aforoCompleto_
         */
		void abreRuta();
		void cierraRuta();
		inline bool getCompleto() const {return aforoCompleto_;}
		
		/**
         * Las siguientes dos funciones están dedicadas a definir y de devolver
         * el valor de la lista privada sendero_
         * 
         * @function setSendero() 
         * @param <list<Sendero>::iterator> sendero
         * Recibe un <list<Sendero>::iterator> sendero y lo asigna a la variable sendero_
         * 
         * @function getSendero() 
         * Nos retorna la lista constante sendero_
         * @return <list<Sendero>::iterator> sendero_
         */
		inline void setSendero(list<Sendero>::iterator sendero){sendero_ = sendero;}
		inline list<Sendero>::iterator getSendero() const {return sendero_;}

};
#endif
