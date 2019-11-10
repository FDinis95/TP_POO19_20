/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include "Carro.h"

using namespace std;

int main(int argc, char** argv) {

    Carro *carro = new Carro("Audi",100.00,90.80,200); //CRIA UM CARRO COM VÁRIAS CARACTERISTICAS
    
    cout << carro << endl;

    return 0;
}

