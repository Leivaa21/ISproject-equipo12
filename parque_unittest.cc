//parque_unittest.cc: Miguel Angel Contreras
// A sample program demonstrating using Google C++ testing framework.


#include "parque.h"
#include "gtest/gtest.h"

TEST(Parque, AñadeEliminaSendero) {
	Parque p;
	Sendero s1("Nacional");
 	Sendero s2("Himalaya");
  	string s3 = "Nacional";
  	string s4 = "Himalaya";
  	string s5 ="Control";

	EXPECT_EQ(false, p.removeSendero(s3));
  	EXPECT_EQ(true, p.addSendero(s1));
 	EXPECT_EQ(true, p.addSendero(s2));
  	EXPECT_EQ(false, p.addSendero(s2));
  	EXPECT_EQ(false, p.addSendero(s1));
  	EXPECT_EQ(false, p.removeSendero(s5));
  	EXPECT_EQ(true, p.removeSendero(s3));
  	EXPECT_EQ(false, p.removeSendero(s3));
  	EXPECT_EQ(true, p.removeSendero(s4));
  	EXPECT_EQ(false, p.removeSendero(s4));
}
 
TEST(Parque, AñadeEliminaRuta) {
  	Parque p;
  	Ruta r1(1);
  	Ruta r2(2);
  	int r3 = 1;
  	int r4 = 2;
  	int r5 = 35;

	EXPECT_EQ(false, p.removeRuta(r3));
	EXPECT_EQ(true, p.addRuta(r1));
 	EXPECT_EQ(true, p.addRuta(r2));
  	EXPECT_EQ(false, p.addRuta(r2));
  	EXPECT_EQ(false, p.addRuta(r1));
  	EXPECT_EQ(false, p.removeRuta(r5));
  	EXPECT_EQ(true, p.removeRuta(r3));
  	EXPECT_EQ(false, p.removeRuta(r3));
  	EXPECT_EQ(true, p.removeRuta(r4));
  	EXPECT_EQ(false, p.removeRuta(r4));
}

