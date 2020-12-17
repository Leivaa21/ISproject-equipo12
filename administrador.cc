#include "administrador.h"

Administrador::Administrador(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha):Persona(nombre, apellido1, apellido2, dni, fecha){
    setCorreo(correo);
    setPassword(password);
}

bool addReserva(string id, Visitante visitante, Ruta ruta){

    if(ruta.addParticipante(visitante)){
        Reserva x(id, visitante, ruta);
        globalReservas.push_back(x);
        return true;
    }
    else return false;

};

bool removeReserva(Reserva reserva){

    for(auto i=globalReservas.begin(); i!=globalReservas.end(); i++){
        if(reserva.getID()==i->getID()){
            Ruta r=reserva.getRuta();
            if( ! r.removeParticipante( reserva.getVisitante() ) ) {
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


bool removeReserva(string id){

    for(auto i=globalReservas.begin(); i!=globalReservas.end(); i++){
        if(id==i->getID()){
            Ruta r=i->getRuta();
            if( ! r.removeParticipante( i->getVisitante() ) ) {
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