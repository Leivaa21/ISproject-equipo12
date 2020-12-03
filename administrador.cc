#include "administrador.h"

Administrador::Administrador(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha):Persona(nombre, apellido1, apellido2, dni, fecha){
    setCorreo(correo);
    setPassword(password);
}