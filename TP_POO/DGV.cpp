    #include <valarray>

#include "DGV.h"

DGV::DGV() {
}

DGV::DGV(const DGV& orig) {
}

DGV::~DGV() {
}

void DGV::CriaPF(string aux1, string aux2){

    if (aux1.compare("crazy") == 0) {
        cout << "\ncrazy " << aux2 << endl;
        
        Piloto *p = pesquisaPiloto(aux2);
        
        if(p != nullptr){
            cout << "\nJa existe um piloto com esse nome: " << aux2 << endl;
            return;
        }
        
        AddPilotoDB(new CrazyDriver(aux2));
        
    } else if (aux1.compare("rapido") == 0) {
        cout << "\nrapido " << aux2 << endl;
        
        Piloto *p = pesquisaPiloto(aux2);
        
        if(p != nullptr){
            cout << "\nJa existe um piloto com esse nome: " << aux2 << endl;
            return;
        }
        
        AddPilotoDB(new PilotoRapido(aux2));
        
    } else if (aux1.compare("surpresa") == 0) {
        cout << "\nsurpresa " << aux2 << endl;
        
        Piloto *p = pesquisaPiloto(aux2);
        
        if(p != nullptr){
            cout << "\nJa existe um piloto com esse nome: " << aux2 << endl;
            return;
        }
        
        AddPilotoDB(new PilotoSurpresa(aux2));
        
    }else{
        cout << "\nnormal " << aux2 << endl;
        
        Piloto *p = pesquisaPiloto(aux2);
        
        if(p != nullptr){
            cout << "\nJa existe um piloto com esse nome: " << aux2 << endl;
            return;
        }
        
        AddPilotoDB(new Piloto(aux2));
        
    }
    
    return;
}

void DGV::CriaP(string aux1, string aux2){
    
    if (aux1.compare("crazy") == 0) {
        cout << "\ncrazy " << aux2 << endl;
        
        Piloto *p = pesquisaPiloto(aux2);
        
        if(p != nullptr){
            cout << "\nJa existe um piloto com esse nome: " << aux2 << endl;
            return;
        }
        
        AddPilotoDB(new CrazyDriver(aux2));
        
    } else if (aux1.compare("rapido") == 0) {
        cout << "\nrapido " << aux2 << endl;
        
        Piloto *p = pesquisaPiloto(aux2);
        
        if(p != nullptr){
            cout << "\nJa existe um piloto com esse nome: " << aux2 << endl;
            return;
        }
        
        AddPilotoDB(new PilotoRapido(aux2));
        
    } else if (aux1.compare("surpresa") == 0) {
        cout << "\nsurpresa " << aux2 << endl;
        
        Piloto *p = pesquisaPiloto(aux2);
        
        if(p != nullptr){
            cout << "\nJa existe um piloto com esse nome: " << aux2 << endl;
            return;
        }
        
        AddPilotoDB(new PilotoSurpresa(aux2));
        
    }else{
        cout << "\nnormal " << aux2 << endl;
        
        Piloto *p = pesquisaPiloto(aux2);
        
        if(p != nullptr){
            cout << "\nJa existe um piloto com esse nome: " << aux2 << endl;
            return;
        }
        
        AddPilotoDB(new Piloto(aux2));
        
    }
    
    return;
}

void DGV::CriaCF(float aux1, float aux2, int aux3, string aux4, string aux5) {

    Carro *c = new Carro(aux4, aux2, aux1, aux3, aux5);

    cout << c->getAsString() << endl;
    AddCarroDB(c);

}

void DGV::CriaC(float valor1, float valor2, int valor3, string aux4, string aux5) {

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

            if (GetPilotoDB().at(j)->getCarro() == GetCarroDB().at(i)) {
                oss << "\nCarro com ID" << " : " << GetCarroDB().at(i)->GetID() << endl;
                oss << "\nPiloto dentro do carro" << " : " << GetPilotoDB().at(j)->getNome() << endl;
            }
        }
    }
    
    return oss.str();
    
}
