#ifndef PASAJEROS_H_INCLUDED
#define PASAJEROS_H_INCLUDED

#define TEXTO 100

typedef struct Pasajero Pasajero;

Pasajero* crearPasajero(char apellido[TEXTO], int dni, char ventanilla);

void mostrarPasajero(Pasajero*);

char getVentanilla(Pasajero*);

void destruirPasajero(Pasajero*);

#endif // PASAJEROS_H_INCLUDED
