#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Pasajero.h"

struct Pasajero {
    char apellido[TEXTO];
    int dni;
    char ventanilla;
};

Pasajero* crearPasajero(char apellido[TEXTO], int dni, char ventanilla){
    Pasajero* p = (Pasajero*)malloc(sizeof(Pasajero));

    strcpy(p->apellido, apellido);
    p->dni = dni;
    p->ventanilla = ventanilla;

    return p;
}

void mostrarPasajero(Pasajero* p){
    printf("%s, %d, %c", p->apellido, p->dni, p->ventanilla);
}

char getVentanilla(Pasajero* p){
    return p->ventanilla;
}

void destruirPasajero(Pasajero* p){
    free(p);
}
