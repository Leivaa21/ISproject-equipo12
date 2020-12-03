#include "visitante.h"

Visitante::Visitante(string nombre, string apellido1, string apellido2, string dni, string fecha, int telefono):Persona(nombre, apellido1, apellido2, dni, fecha){
    setTelefono(telefono);
}

void Visitante::removeRequerimiento(string requerimiento){
    bool finded=false;
    for (auto i=requerimientos_.begin(); i!=requerimientos_.end()&&finded==false; i++)
        if (*i==requerimiento) {
            requerimientos_.erase(i);
            finded=true;
        }
    if(!finded) std::cout<<"[ERROR] Requerimiento especial :"<<requerimiento<<" no encontrado"<<std::endl;
    else std::cout<<"Requerimiento eliminado correctamente"<<std::endl;
}