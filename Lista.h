#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdbool.h>

typedef struct Lista Lista;

Lista* crearLista();

int getTamanioLista(Lista*);

void mostrarLista(Lista*, void callback(void*));

void insertarDatoAlInicioEnLaLista(Lista*, void*);
bool insertarDatoEnLaLista(Lista*, int, void*);
void insertarDatoAlFinalDeLaLista(Lista*, void*);
void insertarDatoEnOrdenEnLista(Lista*, void*, bool callback(void*, void*));

void* obtenerDatoInicialDeLaLista(Lista*);
void* obtenerDatoEnLaLista(Lista*, int);
void* obtenerDatoFinalDeLaLista(Lista*);

void* eliminarDatoInicialDeLaLista(Lista*);
void* eliminarDatoDeLaLista(Lista*, int);
void* eliminarDatoFinalDeLaLista(Lista*);

Lista* duplicar(Lista*);
void ordenarLista(Lista*, bool callback(void*, void*));
int buscarDato(Lista*, void*, bool callback(void*, void*));

void destruirLista(Lista*);
void destruirListaYDatos(Lista*, void callback(void*));

#endif // LISTA_H_INCLUDED
