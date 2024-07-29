#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Avion.h"
#include "Lista.h"

struct Avion {
    char tipo[TEXTO];
    int matricula;
    int capacidad;

    Lista* pasajeros;
    Lista* destinos;
};

Avion* crearAvion(char tipo[TEXTO], int matricula, int capacidad){
    Avion* a = (Avion*)malloc(sizeof(Avion));

    strcpy(a->tipo, tipo);
    a->matricula = matricula;
    a->capacidad = capacidad;
    a->pasajeros = crearLista();
    a->destinos = crearLista();

    return a;
}

void mostrarAvion(Avion* a){
    printf("Avion: %s, matricula: %d, capacidad: %d\n", a->tipo, a->matricula, a->capacidad);
    printf("\tPasajeros (nombre, dni, ventanilla):\n\t\t");
    int tam = getTamanioLista(a->pasajeros);

    if(tam == 0)
        puts("No hay pasajeros...");

    for(int i=0; i<tam; i++){
        mostrarPasajero((Pasajero*)obtenerDatoEnLaLista(a->pasajeros, i));
        printf("\n\t\t");
    }

    tam = getTamanioLista(a->destinos);
    if(tam != 0)
        printf("\n\tDestinos:");

    for(int i=0; i<tam; i++){
        printf("\n\t\t");
        mostrarDestino((Destino*)obtenerDatoEnLaLista(a->destinos, i));
    }
}

void agregarPasajero(Avion* a, Pasajero* p){

    if(getTamanioLista(a->pasajeros) == a->capacidad){
        printf("No se puede agregar al pasajero: ");
        mostrarPasajero(p);
    } else
        insertarDatoAlFinalDeLaLista(a->pasajeros, (void*)p);

}

void agregarDestino(Avion* a, Destino* d){
    insertarDatoAlFinalDeLaLista(a->destinos, (void*)d);
}

void eliminarPasajerosEnBaseAVentanillaAvion(Avion* a, char v){
    int tam = getTamanioLista(a->pasajeros);
    Lista* temp = crearLista();

    for(int i=0; i<tam; i++){
        void* aux = eliminarDatoInicialDeLaLista(a->pasajeros);

        if(getVentanilla((Pasajero*)aux) != v)
            insertarDatoAlFinalDeLaLista(temp, aux);

    }

    tam = getTamanioLista(temp);
    for(int i=0; i<tam; i++)
        insertarDatoAlFinalDeLaLista(a->pasajeros, eliminarDatoInicialDeLaLista(temp));

}

void destruirAvion(Avion* a){
    free(a);
}
