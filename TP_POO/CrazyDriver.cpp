#include "CrazyDriver.h"

CrazyDriver::CrazyDriver(string n) : Piloto(n){
    
    nome = n;
    conduzir = true;
    carro = nullptr;
}

CrazyDriver::CrazyDriver(const CrazyDriver& orig) : Piloto(orig){
}

CrazyDriver::~CrazyDriver() {
}

