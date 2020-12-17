#ifndef SENDERO_H
#define SENDERO_H
#include <string>
#include "incidencia.h"
#include "parque.h"
#include "ruta.h"

using namespace std;

class Sendero{ //Clase Senedero

	private:
		string nombre_, descripcion_, dificultad_, disponibilidad_;
		list<Incidencia> incidencias_;
		Parque parque_;

	public:
		Sendero(string nombre, string descripcion, string dificultad, string disponibilidad);

		inline void setNombre(string nombre) {nombre_=nombre;}
		inline string getNombre() {return nombre_;}

		inline void setDescripcion(string descripcion) {descripcion_=descripcion;}
		inline string getDescripcion() {return descripcion_;}

		inline void setDificultad(string dificultad) {dificultad_=dificultad;}
		inline string getDificultad() {return dificultad_;}

		inline void setDisponibilidad(string disponibilidad) {disponibilidad_=disponibilidad;}
		inline string getDisponibilidad() {return disponibilidad_;}

		bool addIncidencia();
		bool removeIncidencia();
		inline list<Incidencia> getIncidencias() {return incidencias_;}

		void setParque();
		Parque getParque() {return parque_;}
};

#endif
