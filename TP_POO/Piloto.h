/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Piloto.h
 * Author: DanielDinis
 *
 * Created on 28 de Novembro de 2019, 18:46
 */

#ifndef PILOTO_H
#define PILOTO_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>

#include "Carro.h"

using namespace std;

class Carro;

class Piloto {
    
    string const nome;
    string comportamento;
    bool conduzir;
    string ordem;
    
    Carro *carro;
    
    
public:
    Piloto(string n);
    Piloto(const Piloto& orig);
    virtual ~Piloto();
    
    string GetComportamento() const {
        return comportamento;
    }

    void SetComportamento(string comportamento) {
        this->comportamento = comportamento;
    }

    bool IsConduzir() const {
        return conduzir;
    }

    void SetConduzir(bool conduzir) {
        this->conduzir = conduzir;
    }

    string GetOrdem() const {
        return ordem;
    }

    void SetOrdem(string ordem) {
        this->ordem = ordem;
    }

    void acelarar();
    void travar();
    
    


};

#endif /* PILOTO_H */

