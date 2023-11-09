#ifndef ciudadano_h
#define ciudadano_h
#include <string>
using namespace std;

class Cciudadano {
public:
    Cciudadano(string nom, string gen, int e, float alt, string nac, string cr);
    Cciudadano();

    string getnombre();
    string getgenero();
    int getedad();
    float getaltura();
    string getnacionalidad();
    string getciudadresidencia();

private:
    string nombre;
    string genero;
    int edad;
    float altura;
    string nacionalidad;
    string ciudadresidencia;
};

Cciudadano::Cciudadano() {
}

Cciudadano::Cciudadano(string nom, string gen, int e, float alt, string nac, string cr) {
    nombre = nom;
    genero = gen;
    edad = e;
    altura = alt; 
    nacionalidad = nac;
    ciudadresidencia = cr;
}

string Cciudadano::getnombre() {
    return nombre;
}

string Cciudadano::getgenero() {
    return genero;
}

int Cciudadano::getedad() {
    return edad;
}

float Cciudadano::getaltura() {
    return altura;
}

string Cciudadano::getnacionalidad() {
    return nacionalidad;
}

string Cciudadano::getciudadresidencia() {
    return ciudadresidencia;
}

#endif 

