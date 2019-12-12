#ifndef PILOTOSURPRESA_H
#define PILOTOSURPRESA_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>

#include "Piloto.h"

class PilotoSurpresa : public Piloto{
    
    string nome;
    string comportamento;
    bool conduzir;
    string ordem;
    
    Carro *carro;
    
public:
    PilotoSurpresa(string n);
    PilotoSurpresa(const PilotoSurpresa& orig);
    virtual ~PilotoSurpresa();


};

#endif /* PILOTOSURPRESA_H */

