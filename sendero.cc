#include "sendero.h"
#include <string>

Sendero::Sendero(string nombre, string descripcion, string dificultad, string disponibilidad){ //Constructor de la clase Senedero

	setNombre(nombre);
	setDescripcion(descripcion);
	setDificultad(dificultad);
	setDisponibilidad(disponibilidad);
}
