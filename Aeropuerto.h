#ifndef AEROPUERTO_H_INCLUDED
#define AEROPUERTO_H_INCLUDED

#include "Avion.h"

typedef struct Aeropuerto Aeropuerto;

Aeropuerto* crearAeropuerto(char nombre[TEXTO], char direccion[TEXTO], char telefono[TEXTO]);

void mostrarAeropuerto(Aeropuerto*);

void agregarAvion(Aeropuerto*, Avion*);

void eliminarTodosLosPasajerosEnBaseAVentanillasDeLosAviones(Aeropuerto*, char);

#endif // AEROPUERTO_H_INCLUDED
