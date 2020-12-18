#ifndef SENDERO_H
#define SENDERO_H
#include <string>
#include "incidencia.h"
#include "parque.h"
#include "ruta.h"

using namespace std;

list<Sendero> globalSenderos;

class Sendero{ //Clase Sendero

	private:
		string nombre_, descripcion_, dificultad_, disponibilidad_;
		list<Incidencia> incidencias_;
		Parque parque_;

	public:
		Sendero(string nombre, string descripcion, string dificultad, string disponibilidad, Parque parque);

		inline void setNombre(string nombre) {nombre_=nombre;}
		inline string getNombre() {return nombre_;}

		inline void setDescripcion(string descripcion) {descripcion_=descripcion;}
		inline string getDescripcion() {return descripcion_;}

		inline void setDificultad(string dificultad) {dificultad_=dificultad;}
		inline string getDificultad() {return dificultad_;}

		bool setDisponibilidad(string disponibilidad);
		inline string getDisponibilidad() {return disponibilidad_;}

		inline void setParque(Parque parque) {parque_=parque;}
		inline Parque getParque() {return parque_;}
		
		bool addIncidencia(int id, string descripcion, Ruta ruta);
		bool removeIncidencia(int id);

		inline list<Incidencia> getIncidencias() {return incidencias_;}
};

#endif
