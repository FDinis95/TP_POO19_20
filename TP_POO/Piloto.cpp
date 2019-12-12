#include "Piloto.h"

Piloto::Piloto(string n) {

    nome = n;
    conduzir = true;
    carro = nullptr;
}

Piloto::Piloto(const Piloto& orig) {
}

Piloto::~Piloto() {
}

void Piloto::acelerar() {
    carro->AddVel();
}

void Piloto::travar() {
    carro->SubbVel();
}

string Piloto::getAsString(){
    
    ostringstream oss;
    
    oss << "\n-> Nome: " << getNome() << "\n-> Carro: " << getCarro()->GetID() << endl;
    
    return oss.str();
}

