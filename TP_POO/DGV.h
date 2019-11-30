#ifndef DGV_H
#define DGV_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include "Piloto.h"
#include "Carro.h"
#include "Autodromo.h"

using namespace std;

class DGV {
    
    vector<Carro *> carroDB;
    vector<Piloto *> pilotoDB;
    
public:
    
    
    DGV();
    DGV(const DGV& orig);
    virtual ~DGV();
    
    vector<Carro*> GetCarroDB() {
        return carroDB;
    }

    vector<Piloto*> GetPilotoDB() {
        return pilotoDB;
    }
    
    void AddCarroDB(Carro *c){
        carroDB.push_back(c);
        
    }
    
    void AddPilotoDB(Piloto *p){
        pilotoDB.push_back(p);
        
    }
    
    void CriaPF(string aux1, string aux2);
    void CriaCF(float aux1, float aux2, string aux3, string aux4);
    void CriaAF(int aux1, int aux2, string aux3);
    
    string getAsString();


};

#endif /* DGV_H */

