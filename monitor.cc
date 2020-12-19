#include <iostream>
#include "monitor.h"

Monitor::Monitor(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha, int telefono, string direccion) : Persona(nombre, apellido1, apellido2, dni, fecha){
    setCorreo(correo);
    setPassword(password);
    setDireccion(direccion);
    setTelefono(telefono);
}

void Monitor::notificarIncidencia(int id, string descripcion, Ruta ruta){

	//Obtenemos sendero donde se ha producido la incidencia
	list<Sendero>::iterator sendero = ruta.getSendero();
	list<Ruta>::iterator itruta;
	for(auto i = globalRutas.begin(); i!=globalRutas.end(); i++){
		if(ruta.getCodigo()==i->getCodigo()) itruta=i;
	}
	if(!sendero->addIncidencia(id,descripcion,itruta))
		std::cout<<"Error: no se pudo añadir la incidencia.\n";
	else
		std::cout<<"Incidencia añadida con exito.\n";
	
}

void Monitor::añadirRuta(int codigo, int longitud, string transporte, float duracion, string publico, int maxPart, string fechaHora, Sendero sendero){

	//Obtenemos el parque para añadir la ruta
	list<Parque>::iterator parque = sendero.getParque();
	list<Sendero>::iterator itsendero;

	for(auto i = globalSenderos.begin(); i!=globalSenderos.end(); i++){
		if (sendero.getNombre()==i->getNombre()) itsendero=i;
	}
	Ruta x(itsendero,codigo,longitud,transporte,duracion,publico,maxPart,fechaHora);
	

	parque->addRuta(&x);

}

void Monitor::eliminarRuta(int codigo, Parque parque){

	//Eliminamos la ruta
	parque.removeRuta(codigo);
}

list<Visitante> Monitor::verParticipantes(int codigo, Parque parque){

	//Obtenemos la ruta
	list<Ruta> rutas = parque.getRutas();


	for(auto i=rutas.begin(); i!=rutas.end(); ++i){
		if(i->getCodigo() == codigo){
			return i->getParticipantes();
		}
	}

}
