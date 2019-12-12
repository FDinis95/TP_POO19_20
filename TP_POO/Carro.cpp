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
    
    piloto = nullptr;
    
}

Carro::Carro(const Carro& orig) {
}

Carro::~Carro() {
}

string Carro::getAsString(){
    
    ostringstream oss;
    
    oss << "\n-> Marca: " << GetMarca() << "\n-> Modelo: " << GetModelo() << "\n-> ID: " << GetID() << "\n-> vel / velmax: " << GetVel() << " / " << GetVelMax() << "\n-> bat / batMax: "
            << GetBateria() << " / " << GetCapMaxima() << endl;
    
    if(GetPiloto() == nullptr){
        oss << "\nNenhum piloto no carro" << endl;

    }else
        oss << "\nPiloto no carro: " << GetPiloto()->getNome() << endl;
    
    
    return oss.str();
}
