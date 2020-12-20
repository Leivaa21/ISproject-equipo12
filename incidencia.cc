//incidencia.cc
//Developing Incidencia's methods

#include "incidencia.h"

Incidencia::Incidencia(int id, string desc, list<Ruta>::iterator ruta){
	setID(id);
	setDescripcion(desc);
	setRuta(ruta);
}