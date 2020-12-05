//ruta.cc
//Developing Ruta's methods

#include <iostream>
#include "ruta.h"
using namespace std;

Ruta::Ruta(int codigo, int longitud, string transporte, float duracion, string publico, int maxPart, string fechaHora, Sendero sendero){
	setCodigo(codigo);
	setLongitud(longitud);
	setTransporte(transporte);
	setDuracion(duracion);
	setPublico(publico);
	setMaxParticipantes(maxPart);
	setFH(fechaHora);
	setSendero(sendero);
	aforoCompleto_ = false; //La ruta empieza sin participantes al crearla
}


bool Ruta::addParticipante(Visitante v){

	list<Visitante>::iterator it; //Creamos iterador

	//Comprobamos si el participante se encuentra ya en la ruta
	for(it=participantes_.begin(); it!=participantes_.end(); ++it){
		if((*it).getDni() == v.getDni()){
			cout<<"Error: el visitante ya se encuentra inscrito en la ruta.\n";
			return false;
		}
	}

	participantes_.pushback(v); //Añadimos al visitante
	return true;
}

bool Ruta::removeParticipante(Visitante v){

	int encontrado=0;
	list<Visitante>::iterator it;

	//Comprobamos si el participante se encuentra en la ruta
	for(it=participantes_.begin(); it!=participantes_.end(); ++it){
		if((*it).getDni() == v.getDni()){
			encontrado = 1;
			it = participantes_.erase(it); //Borramos participante
		}
	}

	if(encontrado==0)
		return false;
	else
		return true;
}

void Ruta::abreRuta(){
	if(aforoCompleto_==true)
		aforoCompleto_=false;
	else
		cout<<"Esta ruta ya se encuentra abierta.\n";
}

void Ruta::cierraRuta(){
	if(aforoCompleto_==false)
		aforoCompleto_=true;
	else
		cout<<"Esta ruta ya se encuentra cerrada.\n";
}
