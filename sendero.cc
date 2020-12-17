#include "sendero.h"
#include <string>

Sendero::Sendero(string nombre, string descripcion, string dificultad, string disponibilidad)   //Constructor de la clase Senedero
{
	setNombre(nombre);
	setDescripcion(descripcion);
	setDificultad(dificultad);
	setDisponibilidad(disponibilidad);
}

bool Sendero::addIncidencia()
{
	list<Incidencia>::iterator i;

	int codigo;
	string descripcion;
	Ruta ruta;

	cout << "Introduce el codigo de la incidencia: ";
	cin >> codigo;

	cout << "\nIntroduce una descripcion: ";
	cin >> descripcion;

	cout << "\nIntroduce la ruta en la que se ha producido: ";
	cin >> ruta;

	for(i=incidencias_.begin(); i!=incidencias_.end(); i++)
	{
		if((*i).getID()==codigo)
		{
			cout << "ERROR: La incidencia ya esta resgistrada\n";
			return false;
		}
	}

	incidencias_.push_back(Incidencia(codigo, descripcion, ruta));

	cout << "Incidencia añadida con exito\n";

	return true;
}

bool Sendero::removeIncidencia()
{
	list<Incidencia>::iterator i;
	list<Incidencia> aux;

	string codigo;

	if(incidencias_.size()==0)
	{
		cout << "ERROR: La lista esta vacia";
		return false;
	}

	cout << "Introduce el codigo de la incidencia que desea eliminar: ";
	cin >> codigo;
	cout << "\n";

	for(i=incidencias_.begin(); i!=incidencias_.end(); i++)
	{
		if((*i).getID()==codigo)
		{
			i=incidencias_.erase(i);
		}
	}

	if(aux.size()==incidencias_.size())
	{
		cout << "ERROR: La ruta no pudo eliminarse\n";
		return false;
	}
	else
	{
		cout << "Ruta eliminado con exito\n";
		return true;
	}
}

void Sendero::setParque()
{
	string nombre, ubicacion, provincia, municipio, fechaDeclaracion, reconocimiento;
	int superficie;

	Parque(nombre, superficie, ubicacion, provincia, municipio, fechaDeclaracion, reconocimiento);
}
