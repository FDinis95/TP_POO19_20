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
    
    vector<Autodromo *> GetAutodromo(){
        
        return autodromosDB;
    }
    
    void AddAutodromo(Autodromo *a){
        autodromosDB.push_back(a);
        
        cout << getAsString() << endl;
    }
    
    void RemAutodromo(Autodromo *a){
        
        for(int i = 0; i < autodromosDB.size(); i++)
            if(autodromosDB.at(i) == a)
                autodromosDB.erase(autodromosDB.begin() + i);
    }
    
    string getAsString();
    

};

#endif /* CAMPEONATO_H */

