#include <cstdlib>
#include <string>
#include <cstdio>
#include <sstream>
#include <iostream>
#include "Sim.h"

Sim::Sim() {}

Sim::IniciaSim(){
    
    string cmd, aux1, aux2, aux3, aux4, aux5;
    string temp;
    
    cout << "Modo 1\n" << endl;
    
    do{
        aux1.clear();
        aux2.clear();
        aux3.clear();
        aux4.clear();
        aux5.clear();
        
        int valor1, valor2;
        cout << "Introduza o comando: " << "\n";
        getline(cin, cmd);
        
        istringstream is(cmd);
        
        is >> temp >> aux1 >> aux2 >> aux3 >> aux4 >> aux5;
        
        if(temp.compare("carregaP") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            else
                cout << "CarregaP " << aux1 << endl;
//                carregaP(aux1);
                
        }else if(temp.compare("carregaC") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            else
                cout << "CarregaC " << aux1 << endl;
                //carregaC(aux1);
            
        }else if(temp.compare("carregaA") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            else
                cout << "CarregaA " << aux1 << endl;
                //carregaA(aux1);
            
        }else if(temp.compare("cria") == 0){
            if(aux1.empty() != true && aux1.compare("c") == 0){
                valor1 = stoi(aux2);
                valor2 = stoi(aux3);
                cout << "CriaC " << aux1 << " " << valor1 << " " << valor2 << " " << aux4 << " " << aux5 << endl;                
//                criaC(valor1, valor2, aux4, aux5);
                
            }else if(aux1.empty() != true && aux1.compare("p") == 0){
                cout << "CriaP " << aux1 << " " << aux2 << " " << aux3 << endl;
//                criaP(aux2, aux3);
                
            }else if(aux1.empty() != true && aux1.compare("a") == 0){
                valor1 = stoi(aux2);
                valor2 = stoi(aux3);
                cout << "CriaA " << aux1 << " " << valor1 << " " << valor2 << " " << aux4 << endl;                
//                criaA(valor1, valor2, aux4);
                
            }else
                cout << "Nao introduziu nenhum valor\n" << endl; 
            
        }else if(temp.compare("apaga") == 0){
            if(aux1.empty() != true && aux1.compare("c") == 0){
                cout << "ApagaC " << aux1 << " " << aux2 << endl;
//                apagaC(aux2);
                
            }else if(aux1.empty() != true && aux1.compare("p") == 0){
                cout << "ApagaP " << aux1 << " " << aux2 << endl;
//                apagaP(aux2);
                
            }else if(aux1.empty() != true && aux1.compare("a") == 0){
                cout << "ApagaA " << aux1 << " " << aux2 << endl;
//                apagaA(aux2);
                
            }else
                cout << "Nao introduziu nenhum valor\n" << endl;
            
        }else if(temp.compare("entranocarro") == 0){
            if(aux1.empty() == true || aux2.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            
            else
                cout << "EntraCarro " << aux1 << " " << aux2 << endl;
                //EntraCarro(aux1, aux2);
                
        }else if(temp.compare("saidocarro") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            
            else
                cout << "SaiCarro " << aux1 << endl;
                //SaiCarro(aux1);
            
        }else if(temp.compare("lista") == 0){
            
            cout << "Listar\n" << endl;
//            Listar();
            
        }else if(temp.compare("savedgv") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            
            else
                cout << "GuardarDGV " << aux1 << endl;
//                GuardarDGV(aux1);
            
        }else if(temp.compare("loaddgv") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            
            else
                cout << "RecuperarDGV " << aux1 << endl;
//                RecuperarDGV(aux1);
            
        }else if(temp.compare("deldgv") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            
            else
                cout << "RemoverDGV " << aux1 << endl;
//                RemoverDGV(aux1);
        }else if(temp.compare("modo2") == 0){
            Modo2();
        }
        
    }while(temp.compare("sair") != 0);
}

Sim::Modo2(){
    
    
    
}