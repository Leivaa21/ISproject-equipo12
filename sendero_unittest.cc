//sendero_unittest.cc: Miguel Angel Contreras
// A sample program demonstrating using Google C++ testing framework.


#include "sendero.h"
#include "gtest/gtest.h"

TEST(Sendero, setDisponibilidad) {
	Sendero s;
	string a = "Abierto";
	string b = "En mantenimiento";
	string c = "No disponible";
	string d = "Prueba1";
	string e = "Prueba2";

	EXPECT_EQ(true, s.setDisponibilidad(a));
	EXPECT_EQ(false, s.setDisponibilidad(d));
	EXPECT_EQ(true, s.setDisponibilidad(c));
	EXPECT_EQ(false, s.setDisponibilidad(e));
	EXPECT_EQ(true, s.setDisponibilidad(b));
}

TEST(Sendero, AñadirEliminarIncidencia) {
	Sendero s;

	list<Ruta>::iterator ruta;

	int i1 = 1;
	int i2 = 2;
	int i3 = 43;

	EXPECT_EQ(false, s.removeIncidencia(i1));
	EXPECT_EQ(true, s.addIncidencia(1, "Incidencia 1", ruta));
	EXPECT_EQ(true, s.addIncidencia(2, "Incidencia 2", ruta));
	EXPECT_EQ(true, s.removeIncidencia(i1));
	EXPECT_EQ(false, s.removeIncidencia(i3));
	EXPECT_EQ(true, s.removeIncidencia(i2));
	EXPECT_EQ(false, s.removeIncidencia(i1));
	EXPECT_EQ(false, s.removeIncidencia(i2));

}