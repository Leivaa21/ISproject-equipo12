#include "administrador.h"

Administrador::Administrador(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha):Persona(nombre, apellido1, apellido2, dni, fecha){
    setCorreo(correo);
    setPassword(password);
}

bool Administrador::addReserva(string id, Visitante visitante, Ruta ruta){

    list<Visitante>::iterator itvisitante;
    for(auto i = globalVisitantes.begin(); i!= globalVisitantes.end(); i++)
        if(visitante.getDni()==i->getDni()) itvisitante = i;
    
    list<Ruta>::iterator itruta;
    for(auto i = globalRutas.begin(); i!= globalRutas.end(); i++)
        if(ruta.getCodigo()==i->getCodigo()) itruta = i;

    if(ruta.addParticipante(visitante)){
        Reserva x(id, itvisitante, itruta);
        globalReservas.push_back(x);
        return true;
    }
    else return false;

};

bool Administrador::removeReserva(Reserva reserva){

    for(auto i=globalReservas.begin(); i!=globalReservas.end(); i++){
        if(reserva.getID()==i->getID()){
            list<Ruta>::iterator r=reserva.getRuta();
            list<Visitante>::iterator itvisitante = reserva.getVisitante();
            if( ! r->removeParticipante( *itvisitante ) ) {
                cout<<"ERROR: No se pudo eliminar la reserva (participante no encontrado).\n";
                return false;
            }
            globalReservas.erase(i);
            return true;
        }
    }
    cout<<"ERROR: No se pudo eliminar la reserva (Reserva no encontrada!)\n";
    return false;
}


bool Administrador::removeReserva(string id){

    for(auto i=globalReservas.begin(); i!=globalReservas.end(); i++){
        if(id==i->getID()){
            list<Ruta>::iterator r=i->getRuta();
            list<Visitante>::iterator itvisitante = i->getVisitante();
            if( ! r->removeParticipante( *itvisitante ) ) {
                cout<<"ERROR: No se pudo eliminar la reserva (participante no encontrado).\n";
                return false;
            }
            globalReservas.erase(i);
            return true;
        }
    }
    cout<<"ERROR: No se pudo eliminar la reserva (Reserva no encontrada!)\n";
    return false;

}

void Administrador::addParque(string nombre, int superficie, string ubicacion, string provincia, string municipio, string fecha, string reconocimiento){
    Parque x(nombre, superficie, ubicacion, provincia, municipio, fecha, reconocimiento);
    globalParques.push_back(x);
}

void Administrador::addMonitor(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha, int telefono, string direccion){
    Monitor x(correo,password,nombre,apellido1,apellido2,dni,fecha,telefono,direccion);
    globalMonitores.push_back(x);
}

list<Visitante> Administrador::getParticipantes(int codigo){
    for(auto i=globalRutas.begin(); i!=globalRutas.end(); i++){
        if(i->getCodigo()==codigo){
            return i->getParticipantes();
        }
    }
    cout<<"No se pudo encontrar ninguna ruta con el codigo introducido.\n";
}

Incidencia Administrador::getIncidencia(Sendero sendero, int id){

    list<Incidencia> incidencias=sendero.getIncidencias();

    for(auto i=incidencias.begin(); i!=incidencias.end(); i++){
        if(i->getID()==id){
            return *i;
        }
    }
    cout<<"No se pudo encontrar ninguna incidencia con el id introducido.\n";
}

bool Administrador::modificarEstadoSendero(string sendero, string disponibilidad){
    for(auto i=globalSenderos.begin(); i!=globalSenderos.end(); i++){
        if(i->getNombre()==sendero){
            if(i->setDisponibilidad(disponibilidad))return true;
        }
    }
    return false;
}
