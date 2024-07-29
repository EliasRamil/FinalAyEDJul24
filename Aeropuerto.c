#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Aeropuerto.h"
#include "Lista.h"

struct Aeropuerto {
    char nombre[TEXTO];
    char direccion[TEXTO];
    char telefono[TEXTO];

    Lista* aviones;
};

Aeropuerto* crearAeropuerto(char nombre[TEXTO], char direccion[TEXTO], char telefono[TEXTO]){
    Aeropuerto* a = (Aeropuerto*)malloc(sizeof(Aeropuerto));

    strcpy(a->nombre, nombre);
    strcpy(a->direccion, direccion);
    strcpy(a->telefono, telefono);
    a->aviones = crearLista();

    return a;
}

void mostrarAeropuerto(Aeropuerto* a){
    printf("---Aeropuerto: %s, %s, %s---\n\n", a->nombre, a->direccion, a->telefono);

    int tam = getTamanioLista(a->aviones);
    for(int i=0; i<tam; i++){
        mostrarAvion((Avion*)obtenerDatoEnLaLista(a->aviones, i));
        puts("");
    }
}

void agregarAvion(Aeropuerto* a, Avion* av){
    insertarDatoAlFinalDeLaLista(a->aviones, (void*)av);
}

void eliminarTodosLosPasajerosEnBaseAVentanillasDeLosAviones(Aeropuerto* a, char v){
    int tam = getTamanioLista(a->aviones);

    for(int i=0; i<tam; i++)
        eliminarPasajerosEnBaseAVentanillaAvion((Avion*)obtenerDatoEnLaLista(a->aviones, i), v);

}
