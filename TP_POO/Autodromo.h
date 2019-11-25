#ifndef AUTODROMO_H
#define AUTODROMO_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include "Carro.h"

using namespace std;


class Autodromo {
    
    string nome;
    int comprimento;
    bool inicio;
    
public:

    Autodromo(string n, int numLugares, int comp);
    Autodromo(const Autodromo& orig);
    virtual ~Autodromo();
    
    string getAsString()const;

};

#endif /* AUTODROMO_H */

