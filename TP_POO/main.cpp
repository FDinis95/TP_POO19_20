#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include "Carro.h"
#include "Sim.h"

using namespace std;

int main(int argc, char** argv) {

    Sim sim;
    
    sim.IniciaSim();
    
    Carro *carro;
    
    carro = new Carro("Audi", 100, 90, 200);
    cout << carro->getAsString() << endl;
    

    return 0;
}

