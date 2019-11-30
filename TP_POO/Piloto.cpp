#include "Piloto.h"

Piloto::Piloto(string n) {

    nome = n;
}

Piloto::Piloto(const Piloto& orig) {
}

Piloto::~Piloto() {
}

Piloto::acelarar() {
    carro->AddVel();
}

Piloto::travar() {
    carro->SubbVel();
}

