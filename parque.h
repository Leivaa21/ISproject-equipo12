#ifndef PARQUE_H
#define PARQUE_H
#include <string>
#include <list>
#include "sendero.h"
#include "ruta.h"

using namespace std;

class Parque{ //Clase Parque

	private:
		string nombre_, ubicacion_, provincia_, municipio_, fechaDeclaracion_, reconocimiento_;
		int superficie_;
		list<Sendero> senderos_;
		list<Ruta> rutas_;


	public:
		Parque(string nombre, int superficie, string ubicacion, string provincia, string municipio, string fecha, string reconocimiento);

		inline void setNombre(string nombre) {nombre_=nombre;}
		inline string getNombre() {return nombre_;}

		inline void setSuperficie(int superficie) {superficie_=superficie;}
		inline int getSuperficie() {return superficie_;}

		inline void setUbicacion(string ubicacion) {ubicacion_=ubicacion;}
		inline string getUbicacion() {return ubicacion_; }

		inline void setProvincia(string provincia) {provincia_=provincia;}
		inline string getProvincia() {return provincia_;}

		inline void setMunicipio(string municipio) {municipio_=municipio;}
		inline string getMunicipio() {return municipio_;}

		inline void setFecha(string fecha) {fechaDeclaracion_=fecha;}
		inline string getFecha() {return fechaDeclaracion_;}

		inline void setReconocimiento(string reconocimiento) {reconocimiento_=reconocimiento;}
		inline string getReconocimiento() {return reconocimiento_;}

		bool addSendero();
		bool removeSendero();
		inline list<Sendero> getSenderos() {return senderos_;}

		bool addRuta();
		bool removeRuta();
		inline list<Ruta> getRutas() {return rutas_;}
};

#endif
