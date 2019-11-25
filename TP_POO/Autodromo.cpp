#include "Autodromo.h"

Autodromo::Autodromo(string n, int numLugares, int comp) {
    
    nome = n;
    
    //Pista
    vector<Carro *> lugares[numLugares];
    vector<Carro *> garagem;
    comprimento = comp;

    
}

Autodromo::Autodromo(const Autodromo& orig) {

}

Autodromo::~Autodromo() {

}

string Autodromo::getAsString() const{
    
    ostringstream oss;
    
    oss << "Nome: " << nome << "/" << endl;
    
    return oss.str();
}

