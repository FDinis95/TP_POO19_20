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
    
    Carro* pesquisaCarro(char aux1){
        
        for(Carro *c : carroDB){
            if(c->GetID() == aux1)
                return c;
        }
        
        return nullptr;
    }
    
    Piloto * pesquisaPiloto(string aux1){
        for(Piloto *p : pilotoDB){
            if(p->getNome() == aux1)
                return p;
        }
        
        return nullptr;
    }
    
    void EntraCarro(char aux1, string aux2) {

        Carro *c = pesquisaCarro(aux1);
        Piloto *p = pesquisaPiloto(aux2);
        
        if(c == nullptr || p == nullptr){
            return;
        }
        
        if(c->GetPiloto() == nullptr && p->getCarro() == nullptr){
            
            c->AddPiloto(p);
            p->AddCarro(c);
        }else
            cout << "Já existe um piloto neste carro ou o piloto ja tem carro" << endl;
    }
    
    void SaiCarro(char aux1) {

        Carro *c = pesquisaCarro(aux1);
        
        if(c == nullptr){
            return;
        }
        
        if(c->GetPiloto() != nullptr){
            
            Piloto *p = pesquisaPiloto(c->GetPiloto()->getNome());
            
            if(p != nullptr){
                
                p->RemCarro();
                c->RemPiloto();
            }
        }else
            cout << "O Carro nao tinha piloto" << endl;
    }
    
    void ApagaC(char aux2) {

        for (int i = 0; i < carroDB.size(); i++) {
            if (carroDB.at(i)->GetID() == aux2) {

                for (int j = 0; j < pilotoDB.size(); j++) {
                    if (carroDB.at(i)->GetPiloto() != nullptr) {
                        
                        if (pilotoDB.at(j)->getCarro()->GetID() == carroDB.at(i)->GetID()) {

                            pilotoDB.at(j)->RemCarro();
                            carroDB.erase(carroDB.begin() + i);
                        }
                        
                    }else
                        carroDB.erase(carroDB.begin() + i);
                }
            }
        }
    }
    
    void ApagaP(string aux2) {

        for (int i = 0; i < pilotoDB.size(); i++) {
            if (pilotoDB.at(i)->getNome() == aux2) {
                
                for (int j = 0; j < carroDB.size(); j++) {
                    if (pilotoDB.at(i)->getCarro() != nullptr) {
                        
                        if (carroDB.at(j)->GetID() == pilotoDB.at(i)->getCarro()->GetID()){
                            
                            carroDB.at(j)->RemPiloto();
                            pilotoDB.erase(pilotoDB.begin() + i);
                        }
                        
                    }else
                        pilotoDB.erase(pilotoDB.begin() + i);
                }
            }
        }
    }
    
    void CriaPF(string aux1, string aux2);
    void CriaP(string aux1, string aux2);
    
    void CriaCF(float aux1, float aux2, int aux3, string aux4, string aux5);
    void CriaC(float valor1, float valor2, int valor3, string aux4, string aux5);
    
    void ListaCarros(){
        
        for(int i = 0; i < GetCarroDB().size(); i++){
            cout << GetCarroDB().at(i)->getAsString() << endl;
        }
    }
    
    void CarregaTudo(){
        
        for(int i = 0; i < GetCarroDB().size(); i++){
            GetCarroDB().at(i)->SetBateria(GetCarroDB().at(i)->GetCapMaxima());
        }
    }
    
    string getAsString();


};

#endif /* DGV_H */

