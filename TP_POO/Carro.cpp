/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carro.cpp
 * Author: DanielDinis
 * 
 * Created on 10 de Novembro de 2019, 18:09
 */

#include "Carro.h"

Carro::Carro(string m, string mod="Modelo Base", float cpMaxima, float cpInicial, int vMax) {
    
    if (GetID() == 'z')
        this->SetID('?');
    
    bateria = cpInicial;
    capMaxima = cpMaxima;
    velMax = vMax;
    marca = m;
}

Carro::Carro(const Carro& orig) {
}

Carro::~Carro() {
}

string Carro::getAsString() const{
    
    ostringstream oss;
    
    oss << "\n Marca" << "\n Modelo" << "\n ID: " << this->GetID() << endl;
    return oss.str();
}
