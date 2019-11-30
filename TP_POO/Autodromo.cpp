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

void Autodromo::CriaAF(int aux1, int aux2, string aux3) {
    
    Autodromo *a = new Autodromo(aux3, aux1, aux2);
    cout << a->getAsString() << endl;
  
}

string Autodromo::getAsString() const{
    
    ostringstream oss;
    
    oss << "Nome: " << GetNome() << "\nNumero de lugares: " << GetNLugares() << "\nComprimento: " << GetComprimento() << endl;
    
    return oss.str();
}

