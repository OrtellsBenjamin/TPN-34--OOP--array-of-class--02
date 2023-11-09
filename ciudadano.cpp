#include <iostream>
#include "ciudadano.h"

using namespace std;

void MostrarDatos(Cciudadano *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << arreglo[i].getnombre() << endl;
        cout << "Genero: " << arreglo[i].getgenero() << endl;
        cout << "Edad: " << arreglo[i].getedad() << endl;
        cout << "Altura: " << arreglo[i].getaltura() << endl;
        cout << "Nacionalidad: " << arreglo[i].getnacionalidad() << endl;
        cout << "Ciudad de residencia: " << arreglo[i].getciudadresidencia() << endl;
        cout<<endl;
    }
}

void ListarCiudadResidencia (Cciudadano*arreglo, int n, string CiudadResidencia){
	cout<<"Personas con Ciudad de Residencia "<<CiudadResidencia<<": "<<endl;
	for(int i = 0; i<n; i++){
		if(arreglo[i].getciudadresidencia() == CiudadResidencia){
			
			cout<<"-"<<arreglo[i].getnombre()<<endl;
		}
	}
	
 cout<<endl;	
}


void ListarMayores(Cciudadano*arreglo, int n, int EdadMinima){
	cout<<"Personas Mayores de "<<EdadMinima<<" anios:"<<endl;
	for(int i; i<n; i++){
		if(arreglo[i].getedad() > EdadMinima){
			
			cout<<"-"<<arreglo[i].getnombre()<<endl;
		}
	}
 cout<<endl;
}

void ListarNombresTerminanA(Cciudadano*arreglo, int n){
	cout<<"Personas que su nombre termina en A: "<<endl;
	for(int i= 0; i<n; i++){
		string nombre = arreglo[i].getnombre();
		if(nombre[nombre.size() - 1] == 'a'){
			
			cout<<"-"<<nombre<<endl;
		}
	}
 cout<<endl;
}

void ListarMenores(Cciudadano*arreglo, int n, int EdadMaxima){
	cout<<"Personas Menores de "<<EdadMaxima<<" anios:"<<endl;
	for(int i=0;i<n;i++){
		if(arreglo[i].getedad() < EdadMaxima){
			
			cout<<"-"<<arreglo[i].getnombre()<<endl;
		}
	}
  cout<<endl;
}

void ListarTodos(Cciudadano*arreglo, int n){
	cout<<"Todos los Ciudadanos: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"-"<<arreglo[i].getnombre()<<endl;
	}
  cout<<endl;
}


int main() {
    Cciudadano *ciudadanos = new Cciudadano[6];

    ciudadanos[0] = Cciudadano("Rocio", "Femenino", 17, 1.80, "Francia", "Niza");
    ciudadanos[1] = Cciudadano("Luisa", "Femenino", 25, 1.65, "Argentina", "Mar del Plata");
    ciudadanos[2] = Cciudadano("Carlos", "Masculino", 30, 1.75, "Argentina", "Buenos Aires");
    ciudadanos[3] = Cciudadano("Gaston", "Masculino", 22, 1.78, "Argentina", "Cordoba");
    ciudadanos[4] = Cciudadano("Marta", "Femenino", 40, 1.68, "España", "Madrid");
    ciudadanos[5] = Cciudadano("Bautista", "Masculino", 28, 1.85, "Italia", "Roma");

    MostrarDatos(ciudadanos, 6);
    ListarCiudadResidencia(ciudadanos, 6, "Mar del Plata");
    ListarMayores(ciudadanos, 6, 18);
    ListarNombresTerminanA(ciudadanos, 6);
    ListarMenores(ciudadanos, 6, 18);
    ListarTodos(ciudadanos, 6);

    delete[] ciudadanos;

    return 0;
}

