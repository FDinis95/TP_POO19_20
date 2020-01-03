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
    int comprimento, nLugares;
    bool inicio;
    
    vector<Carro *> lugares;
    vector<Carro *> garagem;

    
public:

    Autodromo(string n, int numLugares, int comp);
    Autodromo(const Autodromo& orig);
    virtual ~Autodromo();
    
    vector<Carro*> GetGaragem()  {
        return garagem;
    }

    void AddToGaragem(Carro *c) {
        garagem.push_back(c);
    }

    bool IsInicio() {
        return inicio;
    }

    void SetInicio(bool inic) {
        inicio = inic;
    }

    vector<Carro*> GetLugares() const {
        return lugares;
    }

    void AddToLugares(Carro *c) {
        // TODO - Verificações
        
         if(c->GetPiloto() != nullptr)
                lugares.push_back(c);
         
         
//        for(int i = 0; i < garagem.size(); i++){
//            if(garagem.at(i)->GetPiloto() != nullptr)
//                lugares.push_back(c);
//        }
        
        
    }

    int GetNLugares() const {
        return nLugares;
    }

    string GetNome() const {
        return nome;
    }
    
    int GetComprimento() const {
        return comprimento;
    }

    
    void CriaAF(int aux1, int aux2, string aux3);
    string getAsString()const;

};

#endif /* AUTODROMO_H */

