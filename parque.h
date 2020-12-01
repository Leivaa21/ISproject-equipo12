#include <string>

using namespace std;

class Parque{

	private:
		string nombre_, ubicacion_, provincia_, municipio_, fechaDeclaracion_, reconocimiento_;
		int superficie_;

	public:
		Parque();
		inline void setNombre(string nombre) {nombre_=nombre;}
		inline string getNombre() {return nombre_;}

		inline void setSuperficie(int superficie) {superficie_=superficie;}
		inline int getSuperficie() {return superficie_;}

		inline void setUbicacion(string ubicacion) {ubicacion_=ubicacion;}
		inline string getUbicacion() {return ubicacion_; }

		inline void setProvincia(string provincia) {provincia_=provincia;}
		inline string getProvincia() {return provincia_;}

		inline void setMunicipio(string municipio) {municipio_=municipio;}
		inline string getMunicipio() {return municipio_;}

		inline void setFecha(string fecha) {fechaDeclaracion_=fecha;}
		inline string getFecha() {return fechaDeclaracion_;}

		inline void setReconocimiento(string reconocimiento) {reconocimiento_=reconocimiento;}
		inline string getReconocimiento() {return reconocimiento_;}
};
