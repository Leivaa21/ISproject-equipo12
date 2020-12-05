//incidencia.h
//Incidencia's prototype

#ifndef __INC__
#define __INC__
#include "ruta.h"

class Incidencia{
	private:
		int id_;
		string descripcion_;
		Ruta ruta_;

	public:
		Incidencia(int id, string desc, Ruta ruta);
		inline void setId(int id){id_ = id;}
		inline int getID() const (return id_;)
		inline void setDescripcion(string descripcion){descripcion_ = descripcion;}
		inline string getDescripcion() const {return descripcion_;}
		inline void setRuta(Ruta ruta){ruta_ = ruta;}
		inline Ruta getRuta() const {return ruta_;}
};
#endif
