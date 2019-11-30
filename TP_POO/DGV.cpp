#include "DGV.h"

DGV::DGV() {
    
    Carro *c = new Carro(1000, 2000, "Audi", "R8");
    
    carroDB.push_back(c);
    pilotoDB.clear();
    
}

DGV::DGV(const DGV& orig) {
}

DGV::~DGV() {
}

void DGV::CriaPF(string aux1, string aux2){

    if (aux1.compare("crazy") == 0) {
        cout << "crazy " << aux2 << "\n";
        AddPilotoDB(new Piloto(aux2));
        
    } else if (aux1.compare("rapido") == 0) {
        cout << "rapido " << aux2 << "\n";
        AddPilotoDB(new Piloto(aux2));
        
    } else if (aux1.compare("surpresa") == 0) {
        cout << "surpresa " << aux2 << "\n";
        AddPilotoDB(new Piloto(aux2));
        
    }
    
    return;
}

void DGV::CriaCF(float aux1, float aux2, string aux3, string aux4){
    
    Carro *c = new Carro(aux1, aux2, aux3, aux4);
    
    cout << c->getAsString() << endl;
    
    AddCarroDB(c);
}


string DGV::getAsString(){
    
    ostringstream oss;
    
    oss << "\nNumero de Carros: " << GetCarroDB().size() <<
            "\nNumero de Pilotos: " << GetPilotoDB().size() << endl;
    
    for(int i = 0; i < GetCarroDB().size(); i++){
        
        oss << "\nCarro " << i << " : " << GetCarroDB().at(i)->GetMarca() << endl;
    }
    
    for(int j = 0; j < GetPilotoDB().size(); j++){
        
        oss << "\nPiloto " << j << " : " << GetPilotoDB().at(j)->getNome() << endl;
    }
    
    return oss.str();
    
}