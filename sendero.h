#include <string>

using namespace std;

class Sendero{

	private:
		string nombre_, descripcion_, dificultad_, disponibilidad_;

	public:
		inline void setNombre(string nombre) {nombre_=nombre;}
		inline string getNombre() {return nombre_;}

		inline void setDescripcion(string descripcion) {descripcion_=descripcion;}
		inline string getDescripcion() {return descripcion_;}

		inline void setDificultad(string dificultad) {dificultad_=dificultad;}
		inline string getDificultad() {return dificultad_;}

		inline void setDisponibilidad(string disponibilidad) {disponibilidad_=disponibilidad;}
		inline string getDisponibilidad() {return disponibilidad_;}
};
