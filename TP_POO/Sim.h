#ifndef SIM_H
#define SIM_H
#include <cstdlib>
#include <string>
#include <cstdio>
#include <sstream>
#include <iostream>
#include <fstream>
#include "DGV.h"
#include "Consola.h"
#include "Campeonato.h"
#include "Autodromo.h"

using namespace std;

class DGV;
class Campeonato;
class Autodromo;

class Sim {
    
    DGV *dgv = new DGV;
    Autodromo *autodromo = new Autodromo("A1", 5, 200);
    Campeonato *campeonato = new Campeonato;
    
public:

    Sim();
    void IniciaSim();
    void Modo2();
    void VerComandos();
    void MostrarPista();
    void AtualizaPista();
    
    void Listar();

};

#endif /* SIM_H */

