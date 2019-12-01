#include "Autodromo.h"

Autodromo::Autodromo(string n, int numLugares, int comp) {
    
    nome = n;
    nLugares = numLugares;
    comprimento = comp;
    inicio = false;
    
}

Autodromo::Autodromo(const Autodromo& orig) {

}

Autodromo::~Autodromo() {

}

string Autodromo::getAsString() const{
    
    ostringstream oss;
    
    oss << "\n-> Nome: " << GetNome() << "\n-> Numero de lugares: " << GetNLugares() << "\n-> Comprimento: " << GetComprimento() << endl;
    
    return oss.str();
}

