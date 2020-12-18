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
	Sendero sendero = ruta.getSendero();

	if(!sendero.addIncidencia(id,descripcion,ruta))
		std::cout<<"Error: no se pudo añadir la incidencia.\n";
	else
		std::cout<<"Incidencia añadida con exito.\n";
	
}

void Monitor::añadirRuta(int codigo, int longitud, string transporte, float duracion, string publico, int maxPart, string fechaHora, Sendero sendero){

	//Obtenemos el parque para añadir la ruta
	Parque parque = sendero.getParque();


	Ruta x(codigo,longitud,transporte,duracion,publico,maxPart,fechaHora,sendero);
	parque.addRuta(x);

}

void Monitor::eliminarRuta(int codigo, Parque parque){

	//Eliminamos la ruta
	parque.removeRuta(codigo);
}

list<Visitante> Monitor::verParticipantes(int codigo, Parque parque){

	//Obtenemos la ruta
	list<Ruta> rutas = parque.getRutas();

	list<Ruta>::iterator it;

	for(it=rutas.begin(); it!=rutas.end(); ++it){
		if((*it).getCodigo() == codigo){
			return (*it).getParticipantes();
		}
	}

}
