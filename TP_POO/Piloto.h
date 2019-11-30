#ifndef PILOTO_H
#define PILOTO_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>
#include "Carro.h"

class Carro;

using namespace std;

class Piloto {
    
    string nome;
    string comportamento;
    bool conduzir;
    string ordem;
    
    Carro *carro;
    
public:
    Piloto(string n);
    Piloto(const Piloto& orig);
    virtual ~Piloto();
    
    string getNome(){
        return nome;
    }
    
    Carro* getCarro(){
        return carro;
    }
    
    void AddCarro(Carro *c){
        
        this->carro = c;
    }
    
private:

};

#endif /* PILOTO_H */

