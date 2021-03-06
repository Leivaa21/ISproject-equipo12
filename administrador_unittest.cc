/**
 * @file administrador_unittest
 * @contiene Tests para la clase Administrador
 * @author Adrian Leiva Rojano
 */
#include <list>
#include <string>
#include "administrador.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Administrador, Constructor){
    Administrador Admin1("example@uco.es", "f3fb3asx", "Manuel", "Leonado", "Lopez", "82930491J", "20/10/95");
    EXPECT_EQ("Manuel",Admin1.getNombre());
    EXPECT_EQ("82930491J",Admin1.getDni());
};
TEST(Administrador, Reservas){
    
    list<Reserva> Reservas_,*Reservas=&Reservas_;
    list<Visitante> Visitantes;
    list<Ruta> Rutas;
    list<Sendero> Senderos;
    Visitante   V1("Juan", "Lopez", "Carballo", "520845", "10/04/10", 984593);
    Visitantes.push_back(V1);

    Sendero S1("Sendero1");
    Senderos.push_back(S1);

    Ruta    R1(Senderos.begin());
    Rutas.push_back(R1);
    Reserva Res3("Reserva3", Visitantes.begin(), Rutas.begin());
    Reserva Res4("Reserva3", Visitantes.begin(), Rutas.begin());
    Reservas->push_back(Res4);
    Administrador A1("example@uco.es", "f3fb3asx", "Manuel", "Leonado", "Lopez", "82930491J", "20/10/95");
    EXPECT_TRUE(A1.addReserva( Reservas, "Reserva1", Visitantes.begin(), Rutas.begin() ) ); 
    EXPECT_TRUE(A1.addReserva( Reservas, "Reserva2", Visitantes.begin(), Rutas.begin() ) );
    EXPECT_FALSE(A1.removeReserva(Reservas, "a65345"));
    EXPECT_TRUE(A1.removeReserva(Reservas, "Reserva1"));
    EXPECT_FALSE(A1.removeReserva(Reservas, Res3));
    EXPECT_TRUE(A1.removeReserva(Reservas, Res4)); 
    
}


TEST(Administrador, modificarEstadoSendero){
    Administrador A1("example@uco.es", "f3fb3asx", "Manuel", "Leonado", "Lopez", "82930491J", "20/10/95");

    list<Sendero> Senderos;
    Sendero S1("Sendero1");
    Senderos.push_back(S1);
    list<Sendero>::iterator itsendero=Senderos.begin();

    EXPECT_TRUE(A1.modificarEstadoSendero(itsendero, "ABIERTO" ));
    EXPECT_FALSE(A1.modificarEstadoSendero(itsendero, "Cerrado" ));
    EXPECT_TRUE(A1.modificarEstadoSendero(itsendero, "no disponible" ));

}