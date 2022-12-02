// Battle Royale
//Daniel Callejas Rayón
// Programa que simule un battle Royale

#include <iostream>
#include <time.h>
#include<stdio.h>
#include <Windows.h>
#include <stdlib.h>
    
    class alumno
    {
        int ataque = 0;
        std::string nombre{};
        double vida{};
        int critico{};
        int suerte{};
        int power{};
        int turno{};
    };



int main()
{
    alumno* jugador[20];
    srand(time(NULL));
    //Personajes


    /*Arnolfo = new alumno();
    JuanFer = new alumno();
    Enrique = new alumno();
    Daniel = new alumno();
    Betsa = new alumno();
    Emma = new alumno();
    Rafa = new alumno();
    Julio = new alumno();
    Yessica = new alumno();
    Paul = new alumno();
    Pepe = new alumno();
    Cat = new alumno();
    Roberto = new alumno();
    Ximena = new alumno();
    Mariana = new alumno();
    Cesar = new alumno();
    Sebastian = new alumno();*/


    jugador[0] = new alumno();
    jugador[0].nombre = "Iker";
    jugador[0]-> = rand() % 51;
    jugador[0].vida = 100;
    Iker.critico = rand() % 51;
    Iker.suerte = rand() % 51;
    Iker.power = rand() % 51;

    alumno Tadeo;
    Tadeo = new alumno();
    Tadeo.ataque = rand() % 51;
    Tadeo.nombre = "Tadeo";
    Tadeo.vida = 100;
    Tadeo.critico = rand() % 51;
    Tadeo.suerte = rand() % 51;
    Tadeo.power = rand() % 51;
    Tadeo = new alumno();

    alumno Fer;
    Fer = new alumno();
    Fer.ataque = rand() % 51;
    Fer.nombre = "Fer";
    Fer.vida = 100;
    Fer.critico = rand() % 51;
    Fer.suerte = rand() % 51;
    Fer.power = rand() % 51;

    alumno Arnolfo;
    Arnolfo.ataque = rand() % 51;
    Arnolfo.nombre = "Arnolfo";
    Arnolfo.vida = 100;
    Arnolfo.critico = rand() % 51;
    Arnolfo.suerte = rand() % 51;
    Arnolfo.power = rand() % 51;

    alumno JuanFer;
    JuanFer.ataque = rand() % 51;
    JuanFer.nombre = "JuanFer";
    JuanFer.vida = 100;
    JuanFer.critico = rand() % 51;
    JuanFer.suerte = rand() % 51;
    JuanFer.power = rand() % 51;

    alumno Enrique;
    Enrique.ataque = rand() % 51;
    Enrique.nombre = "Enrique";
    Enrique.critico = rand() % 51;
    Enrique.vida = 100;
    Enrique.suerte = rand() % 51;

    alumno Daniel;
    Daniel.ataque = rand() % 51;
    Daniel.nombre = "Daniel";
    Daniel.vida = 100;
    Daniel.critico = rand() % 51;
    Daniel.suerte = rand() % 51;
    Daniel.power = rand() % 51;

    alumno Betsa;
    Betsa.ataque = rand() % 51;
    Betsa.nombre = "Betsa";
    Betsa.vida = 100;
    Betsa.critico = rand() % 51;
    Betsa.suerte = rand() % 51;
    Betsa.power = rand() % 51;

    alumno Emma;
    Emma.ataque = rand() % 51;
    Emma.nombre = "Emma";
    Emma.vida = 100;
    Emma.critico = rand() % 51;
    Emma.suerte = rand() % 51;
    Emma.power = rand() % 51;

    alumno Rafa;
    Rafa.ataque = rand() % 51;
    Rafa.nombre = "Rafa";
    Rafa.vida = 100;
    Rafa.critico = rand() % 51;
    Rafa.suerte = rand() % 51;
    Rafa.power = rand() % 51;

    alumno Julio;
    Julio.ataque = rand() % 51;
    Julio.nombre = "Julio";
    Julio.vida = 100;
    Julio.critico = rand() % 51;
    Julio.suerte = rand() % 51;
    Julio.power = rand() % 51;

    alumno Yessica;
    Yessica.ataque = rand() % 51;
    Yessica.nombre = "Yessica";
    Yessica.vida = 100;
    Yessica.critico = rand() % 51;
    Yessica.suerte = rand() % 51;
    Yessica.power = rand() % 51;

    alumno Paul;
    Paul.ataque = rand() % 51;
    Paul.nombre = "Paul";
    Paul.vida = 100;
    Paul.critico = rand() % 51;
    Paul.suerte = rand() % 51;
    Paul.power = rand() % 51;

    alumno Pepe;
    Pepe.ataque = rand() % 51;
    Pepe.nombre = "Pepe";
    Pepe.vida = 100;
    Pepe.critico = rand() % 51;
    Pepe.suerte = rand() % 51;
    Pepe.power = rand() % 51;

    alumno Cat;
    Cat.ataque = rand() % 51;
    Cat.nombre = "Cat";
    Cat.vida = 100;
    Cat.critico = rand() % 51;
    Cat.suerte = rand() % 51;
    Cat.power = rand() % 51;

    alumno Roberto;
    Roberto.ataque = rand() % 51;
    Roberto.nombre = "Roberto";
    Roberto.vida = 100;
    Roberto.critico = rand() % 51;
    Roberto.suerte = rand() % 51;
    Roberto.power = rand() % 51;

    alumno Ximena;
    Ximena.ataque = rand() % 51;
    Ximena.nombre = "Ximena";
    Ximena.vida = 100;
    Ximena.critico = rand() % 51;
    Ximena.suerte = rand() % 51;
    Ximena.power = rand() % 51;

    alumno Mariana;
    Mariana.ataque = rand() % 51;
    Mariana.nombre = "Mariana";
    Mariana.vida = 100;
    Mariana.critico = rand() % 51;
    Mariana.suerte = rand() % 51;
    Mariana.power = rand() % 51;

    alumno Cesar;
    Cesar.ataque = rand() % 51;
    Cesar.nombre = "Cesar";
    Cesar.vida = 100;
    Cesar.critico = rand() % 51;
    Cesar.suerte = rand() % 51;
    Cesar.power = rand() % 51;

    alumno Sebastian;
    Sebastian.ataque = rand() % 51;
    Sebastian.nombre = "Sebastian";
    Sebastian.vida = 100;
    Sebastian.critico = rand() % 51;
    Sebastian.suerte = rand() % 51;
    Sebastian.power = rand() % 51;
    int n;

    std::cout << alumno->nombre;
}
