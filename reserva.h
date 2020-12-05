//reserva.h
//Reserva's prototype

#ifndef __RES__
#define __RES__
#include "visitante.h"
#include "ruta.h"

class Reserva{
	private:
		Visitante visitante_;
		Ruta ruta_;

	public:
		Reserva(Visitante v, Ruta r);
		inline void setVisitante(Visitante visitante){visitante_ = visitante;}
		inline Visitante getVisitante() const {return visitante_;}
		inline void setRuta(Ruta ruta){ruta_ = ruta;}
		inline Ruta getRuta() const {return ruta_;}

};
#endif