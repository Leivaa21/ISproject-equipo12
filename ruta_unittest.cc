//ruta_unittest.cc
//A program that tests some Ruta's methods

#include <list>
#include <string>
#include "ruta.h"
#include "sendero.h"
#include "parque.h"
#include "gtest/gtest.h"


using namespace std;

TEST(Ruta, addParticipante){

	Parque Cordoba = Parque("Cordoba",5000,"Cordoba","Cordoba","Cordoba","07-10-95","");
	Sendero Nevado = Sendero("Nevado", "Clima nevado", "Media", "ABIERTO");
	
	list<Sendero> Senderos;

	Sendero x;
	Senderos.push_back(x);
	Ruta rut(Senderos.begin());

	Visitante v1 = Visitante("Antonio","Fernandez","Fernandez","52819202G","12-02-01",681280132);
	
	EXPECT_TRUE(rut.addParticipante(v1));
	EXPECT_EQ(1,rut.getParticipantes().size());
	EXPECT_EQ("52819202G", rut.getParticipantes().begin()->getDni());
	EXPECT_EQ(681280132, rut.getParticipantes().begin()->getTelefono());

}
