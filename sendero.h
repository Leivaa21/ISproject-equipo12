#ifndef __SENDERO__
#define __SENDERO__

#include "incidencia.h"

class Ruta;
class Parque;
list<Sendero> globalSenderos;

class Sendero{ //Clase Sendero

	private:
		string nombre_, descripcion_, dificultad_, disponibilidad_;
		list<Incidencia> incidencias_;
		list<Parque>::iterator parque_;

	public:
		Sendero(string nombre="\0", string descripcion="\0", string dificultad="\0", string disponibilidad="NO DISPONIBLE");

		inline void setNombre(string nombre) {nombre_=nombre;}
		inline string getNombre() const {return nombre_;}

		inline void setDescripcion(string descripcion) {descripcion_=descripcion;}
		inline string getDescripcion() const {return descripcion_;}

		inline void setDificultad(string dificultad) {dificultad_=dificultad;}
		inline string getDificultad() const {return dificultad_;}

		bool setDisponibilidad(string disponibilidad);
		inline string getDisponibilidad() const {return disponibilidad_;}

		inline void setParque(list<Parque>::iterator parque) {parque_=parque;}
		inline list<Parque>::iterator getParque() const {return parque_;}
		
		bool addIncidencia(int id, string descripcion, list<Ruta>::iterator ruta);
		bool removeIncidencia(int id);

		inline void setIncidencias(list<Incidencia> incidencias) {incidencias_=incidencias;}
		inline list<Incidencia> getIncidencias() const {return incidencias_;}
};

#endif
