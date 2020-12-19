//incidencia.h
//Incidencia's prototype

#ifndef __INCIDENCIA__
#define __INCIDENCIA__

#include <string>
using std::string;
#include <list>
using std::list;

class Ruta;

class Incidencia{
	private:
		int id_;
		string descripcion_;
		list<Ruta>::iterator ruta_;

	public:
		Incidencia(int id, string desc, list<Ruta>::iterator ruta);
		inline void setId(int id){id_ = id;}
		inline int getID() const {return id_;}
		inline void setDescripcion(string descripcion){descripcion_ = descripcion;}
		inline string getDescripcion() const {return descripcion_;}
		inline void setRuta(list<Ruta>::iterator ruta){ruta_ = ruta;}
		inline list<Ruta>::iterator getRuta() const {return ruta_;}
};
#endif
