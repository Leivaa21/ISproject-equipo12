//reserva.cc
//Developing Reserva's methods

#include "reserva.h"

Reserva::Reserva(string id, list<Visitante>::iterator v, list<Ruta>::iterator r){
	setID(id);
	setVisitante(v);
	setRuta(r);
}