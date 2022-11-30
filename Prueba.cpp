// Battle Royale
//Daniel Callejas Rayón
// Programa que simule un battle Royale

#include <iostream>
#include <time.h>
#include<stdio.h>
#include <Windows.h>
#include <stdlib.h>

class nodo
{
public:
    int ataque{};
    std::string nombre {};
    double vida {};
    int critico{};
    int suerte{};
    int power{};
    nodo* next{};
    nodo* before{};
};
 
void imprimir(nodo* n)
{
    //Algoritmo de batalla
    do
    {
        if (n->next->vida <= 0) {
            n->next == n->next;
        }
        if (n->vida < 0) {
            n = n->next;
            n->before->vida;
        }
        if (n->suerte > n->next->suerte) {
                n->power = rand() % 51;
                if (n->power < 11) {
                    std::cout << n->nombre << " Ha encontrado un artefacto magico, ahora su ataque se duplica\n";
                    n->ataque * 2;
                }
                n->next->vida = n->next->vida - n->ataque * (n->next->critico * .10);
                std::cout << n->nombre << " ataca a " << n->next->nombre << std::endl;
                std::cout << "La vida de " << n->next->nombre << " es de " << n->next->vida << std::endl;
                if (n->next->vida <= 0) {
                    std::cout << n->next->nombre << " ha sido eliminad@\n";
                    n->next = n->next->next;
                }
                else {
                    n->vida = n->vida - n->next->ataque * (n->critico * .10);
                    std::cout << n->next->nombre << " ataca a " << n->nombre << std::endl;
                    std::cout << "La vida de " << n->nombre << " es de " << n->vida << std::endl;
                    if (n->vida <= 0) {
                        std::cout << n->nombre << " ha sido eliminad@\n";
                        n->before->before->next = n->before->before->next->next;
                    }
                }
                if (n->nombre == n->next->nombre || n->nombre == n->before->nombre) {
                    std::cout << n->nombre << " ha ganado";
                    break;
                }
        }
        n = n->next;
    } while (n->vida != 0);
    if (n->nombre == n->next->nombre || n->nombre == n->before->nombre) {
        std::cout << n->nombre << " ha ganado";
        
    }
    }


int main()
{
    srand(time(NULL));
    //Personajes
    nodo* Iker = NULL;
    nodo* Tadeo = NULL;
    nodo* Fer = NULL;
    nodo* Arnolfo = NULL;
    nodo* JuanFer = NULL;
    nodo* Enrique = NULL;
    nodo* Daniel = NULL;
    nodo* Betsa = NULL;
    nodo* Emma = NULL;
    nodo* Rafa = NULL;
    nodo* Julio = NULL;
    nodo* Yessica = NULL;
    nodo* Paul = NULL;
    nodo* Pepe = NULL;
    nodo* Cat = NULL;
    nodo* Roberto = NULL;
    nodo* Ximena = NULL;
    nodo* Mariana = NULL;
    nodo* Cesar = NULL;
    nodo* Sebastian = NULL;

    Iker = new nodo();
    Tadeo = new nodo();
    Fer = new nodo();
    Arnolfo = new nodo();
    JuanFer = new nodo();
    Enrique = new nodo();
    Daniel = new nodo();
    Betsa = new nodo();
    Emma = new nodo();
    Rafa = new nodo();
    Julio = new nodo();
    Yessica = new nodo();
    Paul = new nodo();
    Pepe = new nodo();
    Cat = new nodo();
    Roberto = new nodo();
    Ximena = new nodo();
    Mariana = new nodo();
    Cesar = new nodo();
    Sebastian = new nodo();

    Iker->ataque = 1 + rand() % (51 - 1) ;
    Iker->nombre = "Iker";
    Iker->vida = 100;
    Iker->critico = rand() % 51;
    Iker->suerte = rand() % 51 ;
    Iker->power = rand() % 51;
    Iker->next = Tadeo;
    Iker->before = Sebastian;

    Tadeo->ataque =rand() % 51 ;
    Tadeo->nombre = "Tadeo";
    Tadeo->vida = 100;
    Tadeo->critico = rand() % 51 ;
    Tadeo->suerte = rand() % 51 ;
    Tadeo->power = rand() % 51;
    Tadeo->next = Fer;
    Tadeo->before = Iker;

    Fer->ataque = 1 + rand() % (51 - 1);
    Fer->nombre = "Fer";
    Fer->vida = 100;
    Fer->critico = rand() % 51 ;
    Fer->suerte = rand() % 51 ;
    Fer->power = rand() % 51;
    Fer->next = Arnolfo;
    Fer->before = Tadeo;

    Arnolfo->ataque = 1 + rand() % (51 - 1) ;
    Arnolfo->nombre = "Arnolfo";
    Arnolfo->vida = 100;
    Arnolfo->critico = rand() % 51 ;
    Arnolfo->suerte = rand() % 51 ;
    Arnolfo->power = rand() % 51;
    Arnolfo->next = JuanFer;
    Arnolfo->before = Fer;

    JuanFer->ataque = 1 + rand() % (51 - 1) ;
    JuanFer->nombre = "JuanFer";
    JuanFer->vida = 100;
    JuanFer->critico = rand() % 51 ;
    JuanFer->suerte = rand() % 51 ;
    JuanFer->power = rand() % 51;
    JuanFer->next = Enrique;
    JuanFer->before = Arnolfo;

    Enrique->ataque = 1 + rand() % (51 - 1);
    Enrique->nombre = "Enrique";
    Enrique->critico = rand() % 51 ;
    Enrique->vida = 100;
    Enrique->suerte = rand() % 51 ;
    Enrique->next = Daniel;
    Enrique->before = JuanFer;

    Daniel->ataque = 1 + rand() % (51 - 1) ;
    Daniel->nombre = "Daniel";
    Daniel->vida = 100;
    Daniel->critico = rand() % 51 ;
    Daniel->suerte = rand() % 51 ;
    Daniel->power = rand() % 51;
    Daniel->next = Betsa;
    Daniel->before = Enrique;

    Betsa->ataque = 1 + rand() % (51 - 1) ;
    Betsa->nombre = "Betsa";
    Betsa->vida = 100;
    Betsa->critico = rand() % 51 ;
    Betsa->suerte = rand() % 51 ;
    Betsa->power = rand() % 51;
    Betsa->next = Emma;
    Betsa->before = Daniel;

    Emma->ataque = 1 + rand() % (51 - 1);
    Emma->nombre = "Emma";
    Emma->vida = 100;
    Emma->critico = rand() % 51 ;
    Emma->suerte = rand() % 51 ;
    Emma->power = rand() % 51;
    Emma->next = Rafa;
    Emma->before = Betsa;

    Rafa->ataque = 1 + rand() % (51 - 1) ;
    Rafa->nombre = "Rafa";
    Rafa->vida = 100;
    Rafa->critico = rand() % 51 ;
    Rafa->suerte = rand() % 51 ;
    Rafa->power = rand() % 51;
    Rafa->next = Julio;
    Rafa->before = Emma;

    Julio->ataque = 1 + rand() % (51 - 1) ;
    Julio->nombre = "Julio";
    Julio->vida = 100;
    Julio->critico = rand() % 51 ;
    Julio->suerte = rand() % 51 ;
    Julio->power = rand() % 51;
    Julio->next = Yessica;
    Julio->before = Rafa;

    Yessica->ataque = 1 + rand() % (51 - 1);
    Yessica->nombre = "Yessica";
    Yessica->vida = 100;
    Yessica->critico = rand() % 51 ;
    Yessica->suerte = rand() % 51 ;
    Yessica->power = rand() % 51;
    Yessica->next = Paul;
    Yessica->before = Julio;

    Paul->ataque = 1 + rand() % (51 - 1) ;
    Paul->nombre = "Paul";
    Paul->vida = 100;
    Paul->critico = rand() % 51 ;
    Paul->suerte = rand() % 51 ;
    Paul->power = rand() % 51;
    Paul->next = Pepe;
    Paul->before = Yessica;

    Pepe->ataque = 1 + rand() % (51 - 1) ;
    Pepe->nombre = "Pepe";
    Pepe->vida = 100;
    Pepe->critico = rand() % 51 ;
    Pepe->suerte = rand() % 51 ;
    Pepe->power = rand() % 51;
    Pepe->next = Cat;
    Pepe->before = Paul;

    Cat->ataque = 1 + rand() % (51 - 1);
    Cat->nombre = "Cat";
    Cat->vida = 100;
    Cat->critico = rand() % 51 ;
    Cat->suerte = rand() % 51 ;
    Cat->power = rand() % 51;
    Cat->next = Roberto;
    Cat->before = Pepe;

    Roberto->ataque = 1 + rand() % (51 - 1) ;
    Roberto->nombre = "Roberto";
    Roberto->vida = 100;
    Roberto->critico = rand() % 51 ;
    Roberto->suerte = rand() % 51 ;
    Roberto->power = rand() % 51;
    Roberto->next = Ximena;
    Roberto->before = Cat;

    Ximena->ataque = 1 + rand() % (51 - 1) ;
    Ximena->nombre = "Ximena";
    Ximena->vida = 100;
    Ximena->critico = rand() % 51 ;
    Ximena->suerte = rand() % 51 ;
    Ximena->power = rand() % 51;
    Ximena->next = Mariana;
    Ximena->before = Roberto;

    Mariana->ataque = 1 + rand() % (51 - 1);
    Mariana->nombre = "Mariana";
    Mariana->vida = 100;
    Mariana->critico = rand() % 51 ;
    Mariana->suerte = rand() % 51 ;
    Mariana->power = rand() % 51;
    Mariana->next = Cesar;
    Mariana->before = Ximena;

    Cesar->ataque = 1 + rand() % (51 - 1) ;
    Cesar->nombre = "Cesar";
    Cesar->vida = 100;
    Cesar->critico = rand() % 51 ;
    Cesar->suerte = rand() % 51 ;
    Cesar->power = rand() % 51;
    Cesar->next = Sebastian;
    Cesar->before = Mariana;

    Sebastian->ataque = 1 + rand() % (51 - 1);
    Sebastian->nombre = "Sebastian";
    Sebastian->vida = 100;
    Sebastian->critico = rand() % 51 ;
    Sebastian->suerte = rand() % 51 ;
    Sebastian->power = rand() % 51;
    Sebastian->next = Iker;
    Sebastian->before = Cesar;
    std::cout << "Los juegos del hambre comienzan\n";
    
        imprimir(Iker);
}
