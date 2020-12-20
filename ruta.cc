//ruta.cc
//Developing Ruta's methods

#include <iostream>
#include "ruta.h"

Ruta::Ruta(list<Sendero>::iterator sendero,int codigo, int longitud, string transporte, float duracion, string publico, int maxPart, string fechaHora){
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
	//Comprobamos que no se ha llegado al limite de participantes
	if(getMaxParticipantes() > (int)participantes_.size()){ 
	
		//Comprobamos si el participante se encuentra ya en la ruta
		for(it=participantes_.begin(); it!=participantes_.end(); ++it){
			if((*it).getDni() == v.getDni()){
				std::cout<<"Error: el visitante ya se encuentra inscrito en la ruta.\n";
				return false;
			}
		}
		participantes_.push_back(v); //Añadimos al visitante
		return true;
	}
	else {
		std::cout<<"Error: No fue posible añadir un nuevo participante (Limite de participantes alcanzado)\n";
		return false;
	}
}

bool Ruta::removeParticipante(Visitante v){

	list<Visitante>::iterator it;

	//Comprobamos si el participante se encuentra en la ruta
	for(it=participantes_.begin(); it!=participantes_.end(); ++it){
		if((*it).getDni() == v.getDni()){
			it = participantes_.erase(it); //Borramos participante
			return true; //Retornamos true ya que se pudo encontrar y borrar el participante.
		}
	}
	return false; // Retornanos false ya que se recorrió la lista y no se encontro el participante
}

void Ruta::abreRuta(){
	if(aforoCompleto_==true)
		aforoCompleto_=false;
	else
		std::cout<<"Esta ruta ya se encuentra abierta.\n";
}

void Ruta::cierraRuta(){
	if(aforoCompleto_==false)
		aforoCompleto_=true;
	else
		std::cout<<"Esta ruta ya se encuentra cerrada.\n";
}
