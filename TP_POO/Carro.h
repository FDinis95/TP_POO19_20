/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carro.h
 * Author: DanielDinis
 *
 * Created on 10 de Novembro de 2019, 18:09
 */

#ifndef CARRO_H
#define CARRO_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

class Carro {
    
    string marca, modelo;
    char ID='a';
    float bateria, capMaxima;
    bool movimento, emergencia, danificado;
    int vel, velMax;
    
    // Piloto *piloto;
    
    
public:
    Carro(string m, string mod="Modelo Base", float cpMaxima, float cpInicial, int vMax );
    Carro(const Carro& orig);
    virtual ~Carro();
    
    char GetID() const {
        return ID;
    }

    void SetID(char ID) {
        this->ID = ID;
    }
    
    string getAsString()const;

};

#endif /* CARRO_H */

