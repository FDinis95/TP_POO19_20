#include "Campeonato.h"

Campeonato::Campeonato() {
    
}

Campeonato::Campeonato(const Campeonato& orig) {

}

Campeonato::~Campeonato() {

}

void Campeonato::IniciaCampeonato(string a){
    
    for(int i = 0; i < GetAutodromo().size(); i++){        
        if((GetAutodromo().at(i)->GetNome().compare(a)) == 0){
            
            //mete todos os carros na pista ou garagem
            
            for(int j = 0; j < GetAutodromo().at(i)->GetLugares().size(); j++){
                
                if(GetAutodromo().at(j)->GetLugares().at(j)->TemPiloto() == true)
                    GetAutodromo().at(j)->GetLugares().at(j)->SetBateria(GetAutodromo().at(j)->GetLugares().at(j)->GetCapMaxima());
            
                else
                    GetAutodromo().at(j)->AddToGaragem(GetAutodromo().at(j)->GetLugares().at(j));
                
            }
            
        }else
            cout << "Nao existe Autodromo com esse nome" << endl;
        
    }
            
         
}

string Campeonato::getAsString(){
    
    
    ostringstream oss;
    oss<< "Campeonato   size" << autodromosDB.size() << endl;
    
    for(int i = 0; i < autodromosDB.size(); i++){
        
        oss << "\nAutodromo " << i << ": " << autodromosDB.at(i)->getAsString() << endl;
        oss << "Carros dentro da pista: \n" << endl;
        
        for(int j = 0; j < autodromosDB.at(i)->GetLugares().size(); j++){
            
            oss << "-> ID Carro: " <<  autodromosDB.at(i)->GetLugares().at(j)->GetID() << endl;
        }
    }
    
    return oss.str();
    
}

