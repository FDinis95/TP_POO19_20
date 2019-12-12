#ifndef PILOTO_H
#define PILOTO_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>
#include "Carro.h"

class Carro;

#include "Carro.h"

using namespace std;

class Carro;

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
    
    void RemCarro(){
        
        this->carro = nullptr;
    }
    
    void AddCarro(Carro *c){
        
        this->carro = c;
    }
    
    bool isConduzir() const {
        return conduzir;
    }

    void setConduzir(bool conduzir) {
        this->conduzir = conduzir;
    }

    
    void acelerar();
    void travar();
    
    string getAsString();

};

#endif /* PILOTO_H */