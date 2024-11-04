#ifndef CANDIDATO_H
#define CANDIDATO_H

#include <iostream>
#include <string>
#include "Lista.h"

using namespace std;

class Candidato {
   private:
    string cedula, nombre, apellido, partido;
    int idPartido, votos;
    Lista<string> pilaEstatus;
    string nombresPartidos[5] = {"Partido A", "Partido B", "Partido C", "Partido D", "Partido E"};
      
   public:
      Candidato();
      Candidato(const string& ced, const string& nom, const string& apel, int partidoId);

    void setCedula(string ced);
    string getCedula() const;
    
    void setNombre(string n);
    string getNombre() const;
    
    void setApellido(string apel);
    string getApellido() const;
    
    void setIdPartido(int idprd);
    int getIdPartido() const;
    
    void setVotos(int vot);
    int getVotos() const;
    
    // Métodos para modificar información del candidato
    void agregarVoto() { votos++; }

    // Métodos para pila estatus
    void setEstatusInicial();
    string getEstatus();
    void modificarEstatus(string);

    // Método para obtener el nombre del partido según el ID
    string getNombrePartido() const;

    void mostrarInformacion();
};

#endif // CANDIDATO_H
