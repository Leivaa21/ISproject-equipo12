//ruta.h
//Ruta's prototype

#ifndef __RUTA__
#define __RUTA__
#include "visitante.h"

class Sendero;
class Ruta;

list<Ruta> globalRutas;

class Ruta{
	private:
		int codigo_,longitud_,maxParticipantes_;
		string transporte_,publico_,fechaHora_;
		float duracion_;
		list<Visitante> participantes_;
		bool aforoCompleto_;
		list<Sendero>::iterator sendero_; //Sendero al que pertenece

	public:
		Ruta(list<Sendero>::iterator sendero ,int codigo=0, int longitud=0, string transporte="\0", float duracion=0, string publico="\0", int maxPart=0, string fechaHora="\0");
		inline void setCodigo(int codigo){codigo_ = codigo;}
		inline int getCodigo() const {return codigo_;}
		inline void setLongitud(int longitud){longitud_ = longitud;}
		inline int getLongitud() const {return longitud_;}
		inline void setTransporte(string transporte){transporte_ = transporte;}
		inline string getTransporte() const {return transporte_;}
		inline void setDuracion(float duracion){duracion_ = duracion;}
		inline float getDuracion() const {return duracion_;}
		inline void setPublico(string publico){publico_ = publico;}
		inline string getPublico() const {return publico_;}
		inline void setMaxParticipantes(int max){maxParticipantes_ = max;}
		inline int getMaxParticipantes() const {return maxParticipantes_;}
		inline void setFH(string fechaHora){fechaHora_ = fechaHora;}
		inline string getFH() const {return fechaHora_;}
		bool addParticipante(Visitante v);
		bool removeParticipante(Visitante v);
		inline list<Visitante> getParticipantes() const {return participantes_;}
		void abreRuta();
		void cierraRuta();
		inline bool getCompleto() const {return aforoCompleto_;}
		inline void setSendero(list<Sendero>::iterator sendero){sendero_ = sendero;}
		inline list<Sendero>::iterator getSendero() const {return sendero_;}

};
#endif