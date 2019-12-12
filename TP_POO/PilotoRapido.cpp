#include "PilotoRapido.h"

PilotoRapido::PilotoRapido(string n) : Piloto(n) {
    
    nome = n;
    conduzir = true;
    carro = nullptr;
}

PilotoRapido::PilotoRapido(const PilotoRapido& orig) : Piloto(orig){
}

PilotoRapido::~PilotoRapido() {
}

