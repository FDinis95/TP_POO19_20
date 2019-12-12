#include "PilotoSurpresa.h"

PilotoSurpresa::PilotoSurpresa(string n) : Piloto(n) {
    
    nome = n;
    conduzir = true;
    carro = nullptr;
}

PilotoSurpresa::PilotoSurpresa(const PilotoSurpresa& orig) : Piloto(orig) {
}

PilotoSurpresa::~PilotoSurpresa() {
}

