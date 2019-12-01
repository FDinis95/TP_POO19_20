#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include "Carro.h"
#include "Sim.h"
#include "DGV.h"
#include "Campeonato.h"

using namespace std;

int main(int argc, char** argv) {

    Sim sim;
//    DGV dgv;
    Campeonato *camp = new Campeonato();
    Autodromo *autod = new Autodromo("ISEC", 4, 100);;
    
    Carro *carro = new Carro("Audi", 100, 90, 200);
    Piloto *p = new Piloto("Francisco");

//    cout << carro->getAsString() << endl;
   
    p->AddCarro(carro); //Verificar se o piloto tem um carro
    carro->AddPiloto(p); //Verificar se tem piloto la dentro
    
    autod->AddToLugares(carro);
    camp->AddAutodromo(autod);
    
    cout << "Campeonato ToString" << endl;
    cout << camp->getAsString() << endl;
    
    cout << "Autodromo ToString" << endl;
    cout << autod->getAsString() << endl;
    
    cout << "Carro ToString" << endl;
    cout << carro->getAsString() << endl;
//    
    cout << "Piloto ToString" << endl;
    cout << p->getAsString() << endl;
    
//    camp->IniciaCampeonato("ISEC");
    
    sim.IniciaSim();
    
//    cout << "Piloto: " << p->getNome() << "\n" << carro->getAsString() << "\n" <<
//            "Piloto com carro marca: " << p->getCarro()->GetMarca() << endl;
//    
//    dgv.AddCarroDB(carro);
//    dgv.AddPilotoDB(p);
//    
//    cout << dgv.getAsString() << endl;
//            
            
    return 0;
}

