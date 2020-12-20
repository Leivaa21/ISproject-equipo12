#include "administrador.h"

Administrador::Administrador(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha):Persona(nombre, apellido1, apellido2, dni, fecha){
    setCorreo(correo);
    setPassword(password);
}

Reserva Administrador::addReserva(string id, list<Visitante>::iterator itvisitante, list<Ruta>::iterator itruta){

    if(itruta->addParticipante(*itvisitante)){
        Reserva x(id, itvisitante, itruta);
        return x;
    }
    cout<<"ERROR: No se pudo crear la reserva\n";
};

bool Administrador::removeReserva(list<Reserva> *Reservas,Reserva reserva){

    for(auto i=Reservas->begin(); i!=Reservas->end(); i++){
        if(reserva.getID()==i->getID()){
            list<Ruta>::iterator r=reserva.getRuta();
            list<Visitante>::iterator itvisitante = reserva.getVisitante();
            if( ! r->removeParticipante( *itvisitante ) ) {
                cout<<"ERROR: No se pudo eliminar la reserva (participante no encontrado).\n";
                return false;
            }
            Reservas->erase(i);
            return true;
        }
    }
    cout<<"ERROR: No se pudo eliminar la reserva (Reserva no encontrada!)\n";
    return false;
}


bool Administrador::removeReserva(list<Reserva> *Reservas, string id){

    for(auto i=Reservas->begin(); i!=Reservas->end(); i++){
        if(id==i->getID()){
            list<Ruta>::iterator r=i->getRuta();
            list<Visitante>::iterator itvisitante = i->getVisitante();
            if( ! r->removeParticipante( *itvisitante ) ) {
                cout<<"ERROR: No se pudo eliminar la reserva (participante no encontrado).\n";
                return false;
            }
            Reservas->erase(i);
            return true;
        }
    }
    cout<<"ERROR: No se pudo eliminar la reserva (Reserva no encontrada!)\n";
    return false;

}

Parque Administrador::addParque(string nombre, int superficie, string ubicacion, string provincia, string municipio, string fecha, string reconocimiento){
    Parque x(nombre, superficie, ubicacion, provincia, municipio, fecha, reconocimiento);
    return x;
}

Monitor Administrador::addMonitor(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha, int telefono, string direccion){
    Monitor x(correo,password,nombre,apellido1,apellido2,dni,fecha,telefono,direccion);
    return x;
}

list<Visitante> Administrador::getParticipantes(list<Ruta>::iterator itruta){
    return itruta->getParticipantes();
    cout<<"ERROR: No se pudo encontrar ninguna ruta con el codigo introducido.\n";
}

Incidencia Administrador::getIncidencia(Sendero sendero, int id){

    list<Incidencia> incidencias=sendero.getIncidencias();

    for(auto i=incidencias.begin(); i!=incidencias.end(); i++){
        if(i->getID()==id){
            return *i;
        }
    }
    cout<<"ERROR: No se pudo encontrar ninguna incidencia con el id introducido.\n";
}

bool Administrador::modificarEstadoSendero(list<Sendero>::iterator itsendero, string disponibilidad){

    if(itsendero->setDisponibilidad(disponibilidad))return true;
    cout<<"ERROR: No se pudo modificar el esado del sendero\n";
    return false;
}

void Administrador::listParques(list<Parque> Parques){
    cout<<"Parques: \n";
    for(auto i=Parques.begin(); i!=Parques.end(); i++)
        cout<<i->getNombre()<<"\n";
}