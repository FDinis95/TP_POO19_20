#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>

#include "Autodromo.h"

using namespace std;

class Autodromo;

class Campeonato {
    
    vector<Autodromo *> autodromosDB;
      
public:

    Campeonato();
    Campeonato(const Campeonato& orig);
    virtual ~Campeonato();
    
    void IniciaCampeonato(string a);
    
    void CriaAF(int aux1, int aux2, string aux3) {

        Autodromo *a = new Autodromo(aux3, aux1, aux2);
        cout << a->getAsString() << endl;
        
        autodromosDB.push_back(a);

    }
    
    void CriaA(int valor1, int valor2, string aux1){
        Autodromo *a = new Autodromo(aux1, valor1, valor2);
        cout << a->getAsString() << endl;
        
        autodromosDB.push_back(a);
    }
    
    void ApagaA(string aux2){
        
        for(int i = 0; i < autodromosDB.size(); i++){
            
            if(autodromosDB.at(i)->GetNome() == aux2){
//                autodromosDB.erase(i);
            }
        }
    }
    
    vector<Autodromo *> GetAutodromo(){
        
        return autodromosDB;
    }
    
    void AddAutodromo(Autodromo *a){
        autodromosDB.push_back(a);
        
    }
    
    void RemAutodromo(Autodromo *a){
        
        for(int i = 0; i < autodromosDB.size(); i++)
            if(autodromosDB.at(i) == a)
                autodromosDB.erase(autodromosDB.begin() + i);
    }
    
    string getAsString();
    

};

#endif /* CAMPEONATO_H */

