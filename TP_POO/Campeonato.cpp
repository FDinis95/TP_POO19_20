#include "Campeonato.h"

Campeonato::Campeonato() {
    
}

Campeonato::Campeonato(const Campeonato& orig) {

}

Campeonato::~Campeonato() {

}

void Campeonato::IniciaCampeonato(string a){
    
    for(int i = 0; i < GetAutodromo().size(); i++){
        
        cout << "\nNumero de Autodromos: " << GetAutodromo().size() << endl;
        
        if(GetAutodromo().at(i)->GetNome() == a){
            
            for(int j = 0; j < GetAutodromo().at(i)->GetLugares().size(); j++){
                
                cout << "\nNumero de Lugares: " << GetAutodromo().at(j)->GetLugares().size() << endl;
                
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
    
    for(int i = 0; i < GetAutodromo().size(); i++)
        oss << "\nAutodromo " << i << " : " << GetAutodromo().at(i)->getAsString() << endl;
    
    return oss.str();
    
}

