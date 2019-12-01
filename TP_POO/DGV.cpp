#include <valarray>

#include "DGV.h"

DGV::DGV() {

    pilotoDB.empty();
    carroDB.empty();
    
}

DGV::DGV(const DGV& orig) {
}

DGV::~DGV() {
}

void DGV::CriaPF(string aux1, string aux2){

    if (aux1.compare("crazy") == 0) {
        cout << "crazy " << aux2 << "\n" << endl;
//        AddPilotoDB(new CrazyDriver(aux2));
        
    } else if (aux1.compare("rapido") == 0) {
        cout << "rapido " << aux2 << "\n" << endl;
//        AddPilotoDB(new PilotoRapido(aux2));
        
    } else if (aux1.compare("surpresa") == 0) {
        cout << "surpresa " << aux2 << "\n" << endl;
//        AddPilotoDB(new PilotoSurpresa(aux2));
        
    }else{
        cout << "normal " << aux2 << "\n" << endl;
        AddPilotoDB(new Piloto(aux2));
    }
    return;
}

void DGV::CriaP(string aux1, string aux2){
    
    if (aux1.compare("crazy") == 0) {
        cout << "crazy " << aux2 << "\n" << endl;
//        AddPilotoDB(new CrazyDriver(aux2));
        
    } else if (aux1.compare("rapido") == 0) {
        cout << "rapido " << aux2 << "\n" << endl;
//        AddPilotoDB(new PilotoRapido(aux2));
        
    } else if (aux1.compare("surpresa") == 0) {
        cout << "surpresa " << aux2 << "\n" << endl;
//        AddPilotoDB(new PilotoSurpresa(aux2));
        
    }else{
        cout << "normal " << aux2 << "\n" << endl;
        AddPilotoDB(new Piloto(aux2));
    }
    return;
}

void DGV::CriaCF(float aux1, float aux2, int aux3, string aux4, string aux5){
    
    Carro *c = new Carro(aux4, aux2, aux1, aux3, aux5);
    
    cout << c->getAsString() << endl;
    
    AddCarroDB(c);
}

void DGV::CriaC(float valor1, float valor2, int valor3, string aux4, string aux5){
    
    Carro *c = new Carro(aux4, valor2, valor1, valor3, aux5);
    
    cout << c->getAsString() << endl;
    
    AddCarroDB(c);
}


string DGV::getAsString(){
    
    ostringstream oss;
    
    oss << "\nNumero de Carros: " << GetCarroDB().size() <<
            "\nNumero de Pilotos: " << GetPilotoDB().size() << endl;
    
    for(int i = 0; i < GetCarroDB().size(); i++){
        for(int j = 0; j < GetPilotoDB().size(); j++){

            oss << "\nCarro com ID" << " : " << GetCarroDB().at(i)->GetID() << endl;
            oss << "\nPiloto dentro do carro" << " : " << GetPilotoDB().at(j)->getNome() << endl;
        }
    }
    
    return oss.str();
    
}
