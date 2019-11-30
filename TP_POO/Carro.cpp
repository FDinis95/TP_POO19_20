#include "Carro.h"

Carro::Carro(string m, float cpMaxima, float cpInicial, int vMax, string mod) {

    marca = m;
    modelo = mod;
    capMaxima = cpMaxima;
    bateria = cpInicial;
    movimento = false;
    emergencia = false;
    danificado = false;
    vel = 0;
    velMax = vMax;
    
    if (GetID() > 'z')
        ID = '?';
    else
        SetID(IDG++);
    
}

Carro::Carro(float cpInicial, float cpMaxima, string m, string mod) {
    
    marca = m;
    modelo = mod;
    capMaxima = cpMaxima;
    bateria = cpInicial;
    movimento = false;
    emergencia = false;
    danificado = false;
    vel = 0;
    velMax = 100;
    posY = 25;
    
    if (GetID() > 'z')
        ID = '?';
    else
        SetID(IDG++);
}

Carro::Carro(const Carro& orig) {
}

Carro::~Carro() {
}

string Carro::getAsString() const{
    
    ostringstream oss;
    
    oss << "\n Marca: " << GetMarca() << "\n Modelo: " << GetModelo() << "\n ID: " << GetID() << "\n vel / velmax: " << GetVel() << " / " << GetVelMax() << "\n bat / batMax: "
            << GetBateria() << " / " << GetCapMaxima() << endl;
    return oss.str();
}
