#include <iostream>
#include <string>
#include "Lista.h"
#include "Lista.cpp"
#include "Candidato.h"

using namespace std;

int main() {
    Lista<Candidato> candidatos;
    int cantidadCandidatos;

    cout << "Creacion de candidatos" << endl;
    cout << "Ingrese la cantidad de candidatos a registrar: ";
    cin >> cantidadCandidatos;
    cin.ignore(); // Para limpiar el buffer

    // Crear candidatos
    for (int i = 0; i < cantidadCandidatos; i++) {
        string cedula, nombre, apellido;
        int idPartido;

        cout << "\nRegistro del candidato " << i + 1 << endl;
        cout << "Ingrese la cedula: ";
        getline(cin, cedula);

        cout << "Ingrese el nombre: ";
        getline(cin, nombre);

        cout << "Ingrese el apellido: ";
        getline(cin, apellido);

        cout << "Ingrese el ID del partido (1-5): ";
        cin >> idPartido;
        cin.ignore(); // Para limpiar el buffer

        // Crear un objeto Candidato y agregarlo a la lista
        Candidato candidato(cedula, nombre, apellido, idPartido);
        candidatos.InsComienzo(candidato);
    }

    // Mostrar reporte de candidatos
    cout << "\nReporte de candidatos registrados:" << endl;
    nodo<Candidato>* p = candidatos.ObtPrimero();
    for (int i = 0; i < candidatos.Contar(); i++) {
        candidatos.ObtInfo(p).mostrarInformacion();
        cout << endl;
        p = candidatos.ObtProx(p);
    }

    candidatos.~Lista();
    system("pause");
    return 0;
}
