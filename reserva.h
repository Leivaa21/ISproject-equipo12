//reserva.h
//Reserva's prototype

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
list<Reserva> globalReservas;

class Reserva{
	private:
		string id_;
		list<Visitante>::iterator visitante_;
		list<Ruta>::iterator ruta_;

	public:
		Reserva(string id, list<Visitante>::iterator v, list<Ruta>::iterator r);
		inline void setID(string id){id_=id;}
		inline string getID()const {return id_;}
		inline void setVisitante(list<Visitante>::iterator visitante){visitante_ = visitante;}
		inline list<Visitante>::iterator getVisitante() const {return visitante_;}
		inline void setRuta(list<Ruta>::iterator ruta){ruta_ = ruta;}
		inline list<Ruta>::iterator getRuta() const {return ruta_;}

};
#endif