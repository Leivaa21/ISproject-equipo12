//ruta.h
//Ruta's prototype

#ifndef __RUT__
#define __RUT__
#include <string>
#include <list>
#include "visitante.h"
#include "sendero.h"

list<Ruta> globalRutas;


class Ruta{
	private:
		int codigo_,longitud_,maxParticipantes_;
		string transporte_,publico_,fechaHora_;
		float duracion_;
		list<Visitante> participantes_;
		bool aforoCompleto_;
		Sendero sendero_; //Sendero al que pertenece

	public:
		Ruta(int codigo, int longitud, string transporte, float duracion, string publico, int maxPart, string fechaHora, Sendero sendero);
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
		inline void setSendero(Sendero sendero){sendero_ = sendero;}
		inline Sendero getSendero() const {return sendero_;}

};
#endif