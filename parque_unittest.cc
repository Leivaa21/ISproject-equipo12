//parque_unittest.cc: Miguel Angel Contreras
// A sample program demonstrating using Google C++ testing framework.


#include "parque.h"
#include "gtest/gtest.h"

TEST(Parque, addremoveSendero) {
	Parque p;
	Sendero s1("Nacional");
 	Sendero s2("Himalaya");
  	string s3 = "Nacional";
  	string s4 = "Himalaya";
  	string s5 ="Control";

	EXPECT_EQ(false, p.removeSendero(s3));
  	EXPECT_EQ(true, p.addSendero(&s1));
 	EXPECT_EQ(true, p.addSendero(&s2));
  	EXPECT_EQ(false, p.addSendero(&s2));
  	EXPECT_EQ(false, p.addSendero(&s1));
  	EXPECT_EQ(false, p.removeSendero(s5));
  	EXPECT_EQ(true, p.removeSendero(s3));
  	EXPECT_EQ(false, p.removeSendero(s3));
  	EXPECT_EQ(true, p.removeSendero(s4));
  	EXPECT_EQ(false, p.removeSendero(s4));
}
 
TEST(Parque, AddRemoveRuta) {
  	Parque p;
	list<Sendero> Senderos;
	Sendero S1("Sendero1");
    Senderos.push_back(S1);

    Ruta r1(Senderos.begin(),1);
  	Ruta r2(Senderos.begin(),2);

	EXPECT_EQ(false, p.removeRuta(1));
	EXPECT_EQ(true, p.addRuta(&r1));
 	EXPECT_EQ(true, p.addRuta(&r2));
  	EXPECT_EQ(false, p.addRuta(&r2));
  	EXPECT_EQ(false, p.addRuta(&r1));
  	EXPECT_EQ(false, p.removeRuta(35));
  	EXPECT_EQ(true, p.removeRuta(1));
  	EXPECT_EQ(false, p.removeRuta(1));
  	EXPECT_EQ(true, p.removeRuta(2));
  	EXPECT_EQ(false, p.removeRuta(2));
}

