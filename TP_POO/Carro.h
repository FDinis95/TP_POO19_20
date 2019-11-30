#ifndef CARRO_H
#define CARRO_H

#include <cstdlib>
#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>
#include "Piloto.h"

class Piloto;

using namespace std;

static char IDG = 'a';

class Carro {
    
    string marca, modelo;
    char ID = IDG;
    float bateria, capMaxima;
    bool movimento, emergencia, danificado;
    int vel, velMax, posY;
    
    Piloto *piloto;
     
public:
    Carro(string m, float cpMaxima, float cpInicial, int vMax, string mod = "modelo base");
    Carro(float cpInicial, float cpMaxima, string m, string mod = "modelo base");
    
    Carro(const Carro& orig);
    virtual ~Carro();
    
    char GetID() const {
        return ID;
    }
    
    int GetPosY() const {
        return posY;
    }

    void SetPosY(int posY) {
        this->posY = posY;
    }


    void SetID(char ID) {
        ID = ID;
    }
    
    float GetBateria() const {
        return bateria;
    }

    void SetBateria(float bateria) {
        if(bateria > GetCapMaxima())
            this->bateria = GetCapMaxima();
        else
            this->bateria = bateria;
    }

    float GetCapMaxima() const {
        return capMaxima;
    }

    void SetCapMaxima(float capMaxima) {
        if(capMaxima > GetCapMaxima())
            this->capMaxima = GetCapMaxima();
        else
            this->capMaxima = capMaxima;
    }

    bool IsDanificado() const {
        return danificado;
    }

    void SetDanificado(bool danificado) {
        this->danificado = danificado;
    }

    bool IsEmergencia() const {
        return emergencia;
    }

    void SetEmergencia(bool emergencia) {
        this->emergencia = emergencia;
    }

    string GetMarca() const {
        return marca;
    }

    string GetModelo() const {
        return modelo;
    }

    bool IsMovimento() const {
        return movimento;
    }

    void SetMovimento(bool movimento) {
        this->movimento = movimento;
    }

    int GetVel() const {
        return vel;
    }

    void AddVel(){
        if(GetVel() > GetVelMax())
            this->vel = GetVelMax();
        else
            this->vel += 1;
    }
    
    void SubbVel(){
    
        if(GetVel() < 0)
            this->vel = 0;
        else
            this->vel -= 1;
    }

    int GetVelMax() const {
        return velMax;
    }

    void SetVelMax(int velMax) {
        if(velMax > GetVelMax())
            this->velMax = GetVelMax();
        else
            this->velMax = velMax;
    }
    
    bool TemPiloto(){
        if(piloto == NULL)
            return false;
        else
            return true;
    }
    
    Piloto* GetPiloto(){
        return piloto;
    }
    
    void AddPiloto(Piloto *p){
        this->piloto = p;
    }
    
    void RemPiloto(){
        this->piloto = NULL;
    }

    string getAsString()const;

};

#endif /* CARRO_H */

