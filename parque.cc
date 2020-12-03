#include "parque.h"
#include <string>

Parque::Parque(string nombre, string ubicacion, string provincia, string municipio, string fecha, string reconocimiento){ //Constructor de la clase Parque

	setNombre(nombre);
	setUbicacion(ubicacion);
	setProvincia(provincia);
	setMunicipio(municipio);
	setFecha(fecha);
	setReconocimiento(reconocimiento);
}
