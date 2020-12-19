#include "sendero.h"

Sendero::Sendero(string nombre, string descripcion, string dificultad, string disponibilidad)   //Constructor de la clase Senedero
{
	setNombre(nombre);
	setDescripcion(descripcion);
	setDificultad(dificultad);
	setDisponibilidad(disponibilidad);
	globalSenderos.push_back(*this);
}

bool Sendero::setDisponibilidad(string disponibilidad){
	string a="ABIERTO", b="EN MANTENIMIENTO", c="NO DISPONIBLE";
	
	for(auto i = disponibilidad.begin(); i!=disponibilidad.end(); i++) *i = std::toupper(*i);
    
	if(a.compare(disponibilidad)==0){
		disponibilidad_="Abierto";
		return true;
	}
	if(b.compare(disponibilidad)==0){
		disponibilidad_="En mantenimiento";
		return true;
	}
	if(c.compare(disponibilidad)==0){
		disponibilidad_="No disponible";
		return true;
	}
	return false;
}

bool Sendero::addIncidencia(int id, string descripcion, list<Ruta>::iterator ruta){
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
