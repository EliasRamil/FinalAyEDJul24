#ifndef AVIONES_H_INCLUDED
#define AVIONES_H_INCLUDED

#include "Pasajero.h"
#include "Destino.h"

typedef struct Avion Avion;

Avion* crearAvion(char tipo[TEXTO], int matricula, int capacidad);

void mostrarAvion(Avion*);

void agregarPasajero(Avion*, Pasajero*);
void agregarDestino(Avion*, Destino*);

void eliminarPasajerosEnBaseAVentanillaAvion(Avion*, char);

void destruirAvion(Avion*);

#endif // AVIONES_H_INCLUDED
