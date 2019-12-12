#ifndef PILOTORAPIDO_H
#define PILOTORAPIDO_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>

#include "Piloto.h"

class PilotoRapido : public Piloto {
    
    string nome;
    string comportamento;
    bool conduzir;
    string ordem;
    
    Carro *carro;
    
public:
    PilotoRapido(string n);
    PilotoRapido(const PilotoRapido& orig);
    virtual ~PilotoRapido();
private:

};

#endif /* PILOTORAPIDO_H */

