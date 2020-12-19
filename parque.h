#ifndef __PARQUE__
#define __PARQUE__

#include "ruta.h"
#include "sendero.h"

class Parque;
list<Parque> globalParques;

class Parque{ //Clase Parque

	private:
		string nombre_, ubicacion_, provincia_, municipio_, fechaDeclaracion_, reconocimiento_;
		int superficie_;
		list<Sendero> senderos_;
		list<Ruta> rutas_;


	public:
		Parque(string nombre="\0", int superficie=0, string ubicacion="\0", string provincia="\0", string municipio="\0", string fecha="\0", string reconocimiento="\0");

		inline void setNombre(string nombre) {nombre_=nombre;}
		inline string getNombre() const {return nombre_;}

		inline void setSuperficie(int superficie) {superficie_=superficie;}
		inline int getSuperficie() const {return superficie_;}

		inline void setUbicacion(string ubicacion) {ubicacion_=ubicacion;}
		inline string getUbicacion() const {return ubicacion_; }

		inline void setProvincia(string provincia) {provincia_=provincia;}
		inline string getProvincia() const {return provincia_;}

		inline void setMunicipio(string municipio) {municipio_=municipio;}
		inline string getMunicipio() const {return municipio_;}

		inline void setFecha(string fecha) {fechaDeclaracion_=fecha;}
		inline string getFecha() const {return fechaDeclaracion_;}

		inline void setReconocimiento(string reconocimiento) {reconocimiento_=reconocimiento;}
		inline string getReconocimiento() const {return reconocimiento_;}

		bool addSendero(Sendero *sendero);
		bool removeSendero(string nombre);
		inline list<Sendero> getSenderos() const {return senderos_;}

		bool addRuta(Ruta *ruta);
		bool removeRuta(int codigo);
		inline list<Ruta> getRutas() const {return rutas_;}
};

#endif
