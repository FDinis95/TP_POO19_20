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

using namespace std;

class Piloto {
    
    string const nome;
    string comportamento;
    bool conduzir;
    string ordem;
    
    
public:
    Piloto(string n);
    Piloto(const Piloto& orig);
    virtual ~Piloto();
private:

};

#endif /* PILOTO_H */

