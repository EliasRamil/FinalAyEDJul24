#include <stdio.h>
#include <stdlib.h>

#include "Aeropuerto.h"

int main(void)
{
    printf("------Ramil Elias - 42.396.413------\n");

    //1
    Aeropuerto* ap1 = crearAeropuerto("Ministro Pistarini", "Riccheri 33", "11-5480-61111");

    //2
    Avion* a1 = crearAvion("Boeing 737",1111,10);
    Avion* a2 = crearAvion("Airbus A320", 2222, 5);
    Avion* a3 = crearAvion("Embraer E190",3333, 5);

    agregarAvion(ap1, a1);
    agregarAvion(ap1, a2);
    agregarAvion(ap1, a3);

    //3
    Pasajero* p1 = crearPasajero("Apellido1", 1, 'S');
    Pasajero* p2 = crearPasajero("Apellido2", 2, 'S');
    Pasajero* p3 = crearPasajero("Apellido3", 3, 'N');
    Pasajero* p4 = crearPasajero("Apellido4", 4, 'S');
    Pasajero* p5 = crearPasajero("Apellido5", 5, 'N');
    Pasajero* p6 = crearPasajero("Apellido6", 6, 'S');

    agregarPasajero(a1, p1);
    agregarPasajero(a1, p2);
    agregarPasajero(a1, p3);

    agregarPasajero(a2, p4);
    agregarPasajero(a2, p5);
    agregarPasajero(a2, p6);

    //4
    puts("\n------------Punto 4----------------");
    mostrarAeropuerto(ap1);

    //5
    puts("\n------------Punto 5----------------");
    agregarPasajero(a3, p1);
    agregarPasajero(a3, p2);
    agregarPasajero(a3, p3);
    agregarPasajero(a3, p4);
    agregarPasajero(a3, p5);
    agregarPasajero(a3, p6);

    puts("\n");
    mostrarAeropuerto(ap1);

    //6
    puts("\n------------Punto 6----------------");
    eliminarTodosLosPasajerosEnBaseAVentanillasDeLosAviones(ap1, 'S');
    mostrarAeropuerto(ap1);

    //7
    Destino* d1 = crearDestino("Bs As", -34.6037, -58.3816);
    Destino* d2 = crearDestino("Asuncion", -25.2637, -57.5759);
    Destino* d3 = crearDestino("La Paz", -16.5000,  -68.1500);

    agregarDestino(a3, d1);
    agregarDestino(a3, d2);
    agregarDestino(a3, d3);

    puts("\n------------Punto 7----------------");
    mostrarAeropuerto(ap1);

    return 0;
}
