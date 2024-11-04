#include "Candidato.h"
#include <iostream>
using namespace std;

// Constructor por defecto
Candidato::Candidato() {
}

// Constructor con parámetros
Candidato::Candidato(const string& ced, const string& nom, const string& apel, int partidoId)
    : cedula(ced), nombre(nom), apellido(apel), idPartido(partidoId), votos(0) {
        pilaEstatus.InsComienzo("Activo");
    }

// Setters y Getters
void Candidato::setCedula(string ced) {
    cedula = ced;
}

string Candidato::getCedula() const {
    return cedula;
}

void Candidato::setNombre(string nomb) {
    nombre = nomb;
}

string Candidato::getNombre() const {
    return nombre;
}

void Candidato::setApellido(string apel) {
    apellido = apel;
}

string Candidato::getApellido() const {
    return apellido;
}

void Candidato::setIdPartido(int idprd) {
    idPartido = idprd;
}

int Candidato::getIdPartido() const {
    return idPartido;
}

int Candidato::getVotos() const {
    return votos;
}

void Candidato::setVotos(int vot) {
    votos = vot;
}

string Candidato::getNombrePartido() const {
    return nombresPartidos[idPartido - 1];
}

string Candidato::getEstatus() {
    string est;
    pilaEstatus.EliComienzo(est);
    pilaEstatus.InsComienzo(est);
    return est;
}

void Candidato::modificarEstatus(string nuevoEstatus) {
    string est;

    if (!pilaEstatus.Vacia()) {
        pilaEstatus.EliComienzo(est);
    }

    pilaEstatus.InsComienzo(nuevoEstatus);
}

void Candidato::setEstatusInicial() {
    pilaEstatus.InsComienzo("Activo");
}

// Método para mostrar información del candidato
void Candidato::mostrarInformacion() {
    cout << "Candidato: " << nombre << " " << apellido << endl;
    cout << "Cedula: " << cedula << endl;
    cout << "Partido: " << getNombrePartido() << endl;
    cout << "Votos: " << votos << endl;
    cout << "Estatus actual: " << getEstatus() << endl;
}
