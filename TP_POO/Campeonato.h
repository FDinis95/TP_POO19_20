#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <cstdlib>
#include <string>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>

#include "Autodromo.h"
#include "DGV.h"

using namespace std;

class Autodromo;
class DGV;

class Campeonato {
    vector<Autodromo *> autodromosDB;

public:

    Campeonato();
    Campeonato(const Campeonato& orig);
    virtual ~Campeonato();

    void IniciaCampeonato(string a);

    void CriaAF(int aux1, int aux2, string aux3) {

        Autodromo *a = new Autodromo(aux3, aux1, aux2);
        cout << a->getAsString() << endl;

        autodromosDB.push_back(a);

    }

    void CriaA(int valor1, int valor2, string aux1) {
        Autodromo *a = new Autodromo(aux1, valor1, valor2);

        for (int i = 0; i < autodromosDB.size(); i++) {
            if (autodromosDB.at(i)->GetNome() == aux1) {

                cout << "Ja existe um autodromo com esse nome" << endl;
                return;
            }
        }

        cout << a->getAsString() << endl;
        autodromosDB.push_back(a);
    }

    void ApagaA(string aux2) {

        for (int i = 0; i < autodromosDB.size(); i++) {

            if (autodromosDB.at(i)->GetNome() == aux2) {
                autodromosDB.erase(autodromosDB.begin() + i);

            }
        }
    }

    vector<Autodromo *> GetAutodromo() {

        return autodromosDB;
    }

    void AddAutodromo(Autodromo *a) {
        autodromosDB.push_back(a);

    }

    void RemAutodromo(Autodromo *a) {

        for (int i = 0; i < autodromosDB.size(); i++)
            if (autodromosDB.at(i) == a)
                autodromosDB.erase(autodromosDB.begin() + i);
    }

    void ListaCarros() {

        for (int i = 0; i < autodromosDB.size(); i++) {
            cout << autodromosDB.at(i)->getAsString() << endl;
        }
    }

    void CarregaBateriaQ(char aux1, float aux2) {

        for (int i = 0; i < autodromosDB.size(); i++) {
            for (int j = 0; j < autodromosDB.at(i)->GetLugares().size(); j++) {

                if (autodromosDB.at(i)->GetLugares().at(j)->GetID() == aux1) {
                    autodromosDB.at(i)->GetLugares().at(j)->SetBateriaQ(aux2);

                }
            }
        }

    }

    void ProvocaAcidente(char aux1) {

        for (int i = 0; i < autodromosDB.size(); i++) {
            for (int j = 0; j < autodromosDB.at(i)->GetLugares().size(); j++) {

                if (autodromosDB.at(i)->GetLugares().at(j)->GetID() == aux1)
                    autodromosDB.at(i)->GetLugares().at(j)->SetDanificado(true);
            }
        }
    }

    void ParaCarro(string aux1) {

        for (int i = 0; i < autodromosDB.size(); i++) {
            for (int j = 0; j < autodromosDB.at(i)->GetLugares().size(); j++) {

                if (autodromosDB.at(i)->GetLugares().at(j)->GetPiloto()->getNome() == aux1)
                    autodromosDB.at(i)->GetLugares().at(j)->GetPiloto()->setConduzir(false);
            }
        }
    }

    void EntraCorrida(DGV *dgv) {

        for (int i = 0; i < dgv->GetCarroDB().size(); i++) {
            Carro * c = dgv->GetCarroDB().at(i);
//            autodromosDB.at(0)->AddToGaragem(dgv->GetCarroDB().at(i));
             autodromosDB.at(0)->AddToGaragem(c);
            autodromosDB.at(0)->AddToLugares(c);

        }
    }

    string getAsString();


};

#endif /* CAMPEONATO_H */

