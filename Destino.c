#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Destino.h"

struct Destino {
    char ciudad[CIUDAD];
    float latitud;
    float longitud;
};

Destino* crearDestino(char ciudad[CIUDAD], float latitud, float longitud){
    Destino* d = (Destino*)malloc(sizeof(Destino));

    strcpy(d->ciudad, ciudad);
    d->latitud = latitud;
    d->longitud = longitud;

    return d;
}

void mostrarDestino(Destino* d){
    printf("Ciudad: %s, latitud %f, longitud %f", d->ciudad, d->latitud, d->longitud);
}

void destruirDestino(Destino* d){
    free(d);
}
