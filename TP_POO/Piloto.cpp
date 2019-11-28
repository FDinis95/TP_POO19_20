/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Piloto.cpp
 * Author: DanielDinis
 * 
 * Created on 28 de Novembro de 2019, 18:46
 */

#include "Piloto.h"

Piloto::Piloto(string n) {

    nome = n;
}

Piloto::Piloto(const Piloto& orig) {
}

Piloto::~Piloto() {
}

Piloto::acelarar() {
    carro->AddVel();
}

Piloto::travar() {
    carro->SubbVel();
}

