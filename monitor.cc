#include "monitor.h"

Monitor::Monitor(string correo, string password, string nombre, string apellido1, string apellido2, string dni, string fecha, int telefono, string direccion) : Persona(nombre, apellido1, apellido2, dni, fecha){
    setCorreo(correo);
    setPassword(password);
    setDireccion(direccion);
    setTelefono(telefono);
}