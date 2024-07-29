#ifndef DESTINO_H_INCLUDED
#define DESTINO_H_INCLUDED

#define CIUDAD 30

typedef struct Destino Destino;

Destino* crearDestino(char ciudad[CIUDAD], float latitud, float longitud);

void mostrarDestino(Destino*);

void destruirDestino(Destino*);

#endif // DESTINO_H_INCLUDED
