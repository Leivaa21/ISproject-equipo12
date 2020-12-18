#include "parque.h"
#include <string>

using namespace std;

Parque::Parque(string nombre, int superficie, string ubicacion, string provincia, string municipio, string fecha, string reconocimiento)   //Constructor de la clase Parque
{
	setNombre(nombre);
	setSuperficie(superficie);
	setUbicacion(ubicacion);
	setProvincia(provincia);
	setMunicipio(municipio);
	setFecha(fecha);
	setReconocimiento(reconocimiento);
}

bool Parque::addSendero()
{
	list<Sendero>::iterator i;

	string nombre, descripcion, dificultad, disponibilidad;
	Parque parque;

	cout << "Introduce el nombre del sendero: ";
	cin >> nombre;

	cout << "\nIntroduce su descripcion: ";
	cin >> descripcion;

	cout << "\nIntroduce su dificultad: ";
	cin >> dificultad;

	cout << "\nIntroduce su disponibilidad: ";
	cin >> disponibilidad;
	
	cout<< "\nIntroduce el parque al que pertenece: ";
	cin >> parque;

	for(i=senderos_.begin(); i!=senderos_.end(); i++)
	{
		if((*i).getNombre()==nombre)
		{
			cout << "ERROR: El sendero ya esta resgistrado\n";
			return false;
		}
	}

	senderos_.push_back(Sendero(nombre, descripcion, dificultad, disponibilidad));

	cout << "Sendero añadido con exito\n";

	return true;

}

bool Parque::removeSendero()
{
	list<Sendero>::iterator i;
	list<Sendero> aux;

	string nombre;

	if(senderos_.size()==0)
	{
		cout << "ERROR: La lista esta vacia";
		return false;
	}

	cout << "Introduce el nombre del sendero que desea eliminar: ";
	cin >> nombre;
	cout << "\n";

	for(i=senderos_.begin(); i!=senderos_.end(); i++)
	{
		if((*i).getNombre()==nombre)
		{
			i=senderos_.erase(i);
		}
	}

	if(aux.size()==senderos_.size())
	{
		cout << "ERROR: El sendero no pudo eliminarse\n";
		return false;
	}
	else
	{
		cout << "Sendero eliminado con exito\n";
		return true;
	}

}

bool Parque::addRuta()
{
	list<Ruta>::iterator i;

	int codigo, longitud, maxParticipantes;
	string transporte, publico, fechaHora;
	float duracion;

	cout << "Introduce el codigo de la ruta: ";
	cin >> codigo;

	cout << "\nIntroduce su longitud: ";
	cin >> longitud;

	cout << "\nIntroduce el numero maximo de participantes: ";
	cin >> maxParticipantes;

	cout << "\nIntroduce el transporte en el que se realiza: ";
	cin >> transporte;

	cout << "\nIntroduce a que publico esta destinada:";
	cin >> publico;

	cout << "\nIntroduce la fecha y hora a la que se realizara: ";
	cin >> fechaHora;

	cout << "\nIntroduce su duracion:";
	cin >> duracion;

	for(i=rutas_.begin(); i!=rutas_.end(); i++)
	{
		if((*i).getCodigo()==codigo)
		{
			cout << "ERROR: La ruta ya esta resgistrada\n";
			return false;
		}
	}

	rutas_.push_back(Ruta(codigo, longitud, transporte, duracion, publico, maxParticipantes, fechaHora));

	cout << "Ruta añadida con exito\n";

	return true;

}

bool Parque::removeRuta()
{
	list<Ruta>::iterator i;
	list<Ruta> aux;

	string codigo;

	if(rutas_.size()==0)
	{
		cout << "ERROR: La lista esta vacia";
		return false;
	}

	cout << "Introduce el codigo de la ruta que desea eliminar: ";
	cin >> codigo;
	cout << "\n";

	for(i=rutas_.begin(); i!=rutas_.end(); i++)
	{
		if((*i).getCodigo()==codigo)
		{
			i=rutas_.erase(i);
		}
	}

	if(aux.size()==rutas_.size())
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
