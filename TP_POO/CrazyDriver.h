#ifndef CRAZYDRIVER_H
#define CRAZYDRIVER_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>

#include "Piloto.h"


using namespace std;

class CrazyDriver : public Piloto {
    
    int inicio, lugar;
    float energia, energia_automovel;
    string nome;
    bool conduzir;

    Carro *carro;
    
public:
    
    CrazyDriver(string n);
    CrazyDriver(const CrazyDriver& orig);
    virtual ~CrazyDriver();

};

#endif /* CRAZYDRIVER_H */