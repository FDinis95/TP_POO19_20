#ifndef DGV_H
#define DGV_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include "Piloto.h"
#include "CrazyDriver.h"
#include "PilotoRapido.h"
#include "PilotoSurpresa.h"
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
    
    void EntraCarro(char aux1, string aux2){
        
        for(int i = 0; i < pilotoDB.size(); i++){
            for(int j = 0; j < carroDB.size(); j++){
                if(pilotoDB.at(i)->getNome() == aux2)
                    if(carroDB.at(j)->GetID() == aux1){
                        pilotoDB.at(i)->AddCarro(carroDB.at(i));
                        carroDB.at(j)->AddPiloto(pilotoDB.at(i));
                    }
            }
        }
        
    }
    
    void SaiCarro(char aux1){
        
        for(int i = 0; i < carroDB.size(); i++){
            if(carroDB.at(i)->GetID() == aux1){
                carroDB.at(i)->RemPiloto();
            }
        }
    }
    
    void ApagaC(char aux2) {

        for (int i = 0; i < carroDB.size(); i++) {
            for (int j = 0; j < pilotoDB.size(); j++) {
                if (pilotoDB.at(j)->getCarro()->GetID() == carroDB.at(i)->GetID())
                    pilotoDB.at(j)->RemCarro();
            }
            
            if(carroDB.at(i)->GetID() == aux2) {
                    delete carroDB.at(i);
            }
        }
    }
    
    void ApagaP(string aux2){
        
        for (int i = 0; i < pilotoDB.size(); i++) {
            for (int j = 0; j < carroDB.size(); j++) {
                if (carroDB.at(j)->GetID() == pilotoDB.at(i)->getCarro()->GetID())
                    pilotoDB.at(j)->RemCarro();
            }
            
            if(pilotoDB.at(i)->getNome() == aux2)
                delete pilotoDB.at(i);
        }
    }
    
    void CriaPF(string aux1, string aux2);
    void CriaP(string aux1, string aux2);
    
    void CriaCF(float aux1, float aux2, int aux3, string aux4, string aux5);
    void CriaC(float valor1, float valor2, int valor3, string aux4, string aux5);
    
    string getAsString();


};

#endif /* DGV_H */

