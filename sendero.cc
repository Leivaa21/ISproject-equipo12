#include "sendero.h"
#include <string>

Sendero::Sendero(string nombre, string descripcion, string dificultad, string disponibilidad, Parque parque)   //Constructor de la clase Senedero
{
	setNombre(nombre);
	setDescripcion(descripcion);
	setDificultad(dificultad);
	setDisponibilidad(disponibilidad);
	setParque(parque);
	globalSenderos.push_back(this);
}

bool Sendero::addIncidencia(int id, string descripcion, Ruta ruta){
	Incidencia x(id, descripcion, ruta);
	incidencias_.push_back(x);
}

bool Sendero::removeIncidencia(int id){
	for(auto i=incidencias_.begin(); i!=incidencias_.end();i++){
		if(i->getID()==id){
			incidencias_.erase(i);
			return true;
		}
	}
	return false;
}
