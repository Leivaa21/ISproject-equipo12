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

	globalParques.push_back(*this);
}

bool Parque::addSendero(Sendero *sendero)
{
	list<Sendero>::iterator i;

	for(i=senderos_.begin(); i!=senderos_.end(); i++)
	{
		if((*i).getNombre()==sendero->getNombre())
		{
			cout << "ERROR: El sendero ya esta resgistrado\n";
			return false;
		}
	}

	senderos_.push_back(*sendero);

	cout << "Sendero incluido con exito\n";

	return true;

}

bool Parque::removeSendero(string nombre)
{
	list<Sendero>::iterator i;
	list<Sendero> aux;

	if(senderos_.size()==0)
	{
		cout << "ERROR: La lista esta vacia";
		return false;
	}

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

bool Parque::addRuta(Ruta *ruta)
{
	list<Ruta>::iterator i;

	for(i=rutas_.begin(); i!=rutas_.end(); i++)
	{
		if((*i).getCodigo()==ruta->getCodigo())
		{
			cout << "ERROR: La ruta ya esta resgistrada\n";
			return false;
		}
	}

	rutas_.push_back(*ruta);

	cout << "Ruta incluida con exito\n";

	return true;

}

bool Parque::removeRuta(int codigo)
{
	list<Ruta>::iterator i;
	list<Ruta> aux;

	if(rutas_.size()==0)
	{
		cout << "ERROR: La lista esta vacia";
		return false;
	}

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
