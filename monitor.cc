#include <iostream>
#include "monitor.h"

Monitor::Monitor(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha, int telefono, string direccion) : Persona(nombre, apellido1, apellido2, dni, fecha){
    setCorreo(correo);
    setPassword(password);
    setDireccion(direccion);
    setTelefono(telefono);
}

Incidencia Monitor::notificarIncidencia(int id, string descripcion, list<Ruta>::iterator itruta){

	//Obtenemos sendero donde se ha producido la incidencia
	list<Sendero>::iterator sendero = itruta->getSendero();
	
	if(!sendero->addIncidencia(id,descripcion,itruta))
		std::cout<<"Error: no se pudo añadir la incidencia.\n";
	else{
		Incidencia x(id, descripcion, itruta);
		return x;
	}
	
}

Ruta Monitor::addRuta(int codigo, int longitud, string transporte, float duracion, string publico, int maxPart, string fechaHora, list<Sendero>::iterator itsendero){

	//Obtenemos el parque para añadir la ruta
	list<Parque>::iterator parque = itsendero->getParque();

	Ruta x(itsendero,codigo,longitud,transporte,duracion,publico,maxPart,fechaHora);
	
	return x;

}

void Monitor::removeRuta(int codigo, Parque parque){

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
