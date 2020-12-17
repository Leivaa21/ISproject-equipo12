//reserva.h
//Reserva's prototype

#ifndef __RES__
#define __RES__
#include "visitante.h"
#include "ruta.h"

list<Reserva> globalReservas;

class Reserva{
	private:
		string id_;
		Visitante visitante_;
		Ruta ruta_;

	public:
		Reserva(Visitante v, Ruta r);
		inline void setID(string id){id_=id;}
		inline string getID()const {return id_;}
		inline void setVisitante(Visitante visitante){visitante_ = visitante;}
		inline Visitante getVisitante() const {return visitante_;}
		inline void setRuta(Ruta ruta){ruta_ = ruta;}
		inline Ruta getRuta() const {return ruta_;}

};
#endif