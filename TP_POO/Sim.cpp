#include "Sim.h"

Sim::Sim(){}

void Sim::IniciaSim(){
    
    string cmd, aux1, aux2, aux3, aux4, aux5, aux6;
    string temp;
    
    cout << "Modo 1\n" << endl;
    
    do{
        aux1.clear();
        aux2.clear();
        aux3.clear();
        aux4.clear();
        aux5.clear();
        aux6.clear();
        
        float valor1, valor2;
        int valor3, valor4, valor5;
        char ch[2];
        cout << "Introduza o comando: " << "\n";
            getline(cin, cmd);
        
        istringstream is(cmd);
        
        is >> temp >> aux1 >> aux2 >> aux3 >> aux4 >> aux5 >> aux6;
        
        if (temp.compare("carregaP") == 0) {

            ifstream dados(aux1);
            string linha;

            if (!dados.is_open())
                return;


            while (!dados.eof()) {

                getline(dados, linha);
                istringstream iss(linha);

                iss >> aux1 >> aux2;

                dgv->CriaPF(aux1, aux2);
            }
                
        }else if(temp.compare("carregaC") == 0){
            
         ifstream dados(aux1);
            string linha;

            if (!dados.is_open())
                return;


            while (!dados.eof()) {

                getline(dados, linha);
                istringstream iss(linha);

                iss >> aux1 >> aux2 >> aux3 >> aux4 >> aux5;
                if(!iss){
                    continue;
                }
                valor1 = stof(aux1);
                valor2 = stof(aux2);
                valor3 = stoi(aux3);

                dgv->CriaCF(valor1, valor2, valor3, aux4, aux5);
            }
            
        }else if(temp.compare("carregaA") == 0){
            
             ifstream dados(aux1);
            string linha;

            if (!dados.is_open())
                return;


            while (!dados.eof()) {

                getline(dados, linha);
                istringstream iss(linha);

                iss >> aux1 >> aux2 >> aux3;
                int valor3 = stoi(aux1);
                int valor4 = stoi(aux2);

                campeonato->CriaAF(valor3, valor4, aux3);
            }
            
        }else if(temp.compare("cria") == 0){
            if(aux1.empty() != true && aux1.compare("c") == 0){
                valor1 = stof(aux2);
                valor2 = stof(aux3);
                valor3 = stoi(aux4);
                cout << "CriaC " << aux1 /*tipo carro */ << " " << valor1 << " " << valor2 << " " << valor3 << " " << aux5 << " " << aux6 << endl;                
                dgv->CriaC(valor1, valor2, valor3, aux5, aux6);
                
            }else if(aux1.empty() != true && aux1.compare("p") == 0){
                cout << "CriaP " << aux1 << " " << aux2 << " " << aux3 << endl;
                dgv->CriaP(aux2, aux3);
                
            }else if(aux1.empty() != true && aux1.compare("a") == 0){
                valor4 = stoi(aux2);
                valor5 = stoi(aux3);
                cout << "CriaA " << aux1 << " " << valor4 << " " << valor5 << " " << aux4 << endl;                
                campeonato->CriaA(valor4, valor5, aux4);
                
            }else
                cout << "Nao introduziu nenhum valor\n" << endl; 
            
        }else if(temp.compare("apaga") == 0){
            if(aux1.empty() != true && aux1.compare("c") == 0){
                
                copy(aux2.begin(), aux2.end(), ch);
                cout << "ApagaC " << aux1 << " " << ch << endl;
                dgv->ApagaC(*ch);
                
            }else if(aux1.empty() != true && aux1.compare("p") == 0){
                cout << "ApagaP " << aux1 << " " << aux2 << endl;
                dgv->ApagaP(aux2);
                
            }else if(aux1.empty() != true && aux1.compare("a") == 0){
                cout << "ApagaA " << aux1 << " " << aux2 << endl;
                campeonato->ApagaA(aux2);
                
            }else
                cout << "Nao introduziu nenhum valor\n" << endl;
            
        }else if(temp.compare("entranocarro") == 0){
            if(aux1.empty() == true || aux2.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            
            else{
                copy(aux1.begin(), aux1.end(), ch);
                dgv->EntraCarro(*ch, aux2);
            }
                
        }else if(temp.compare("saidocarro") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            
            else{
                copy(aux1.begin(), aux1.end(), ch);
                dgv->SaiCarro(*ch);
            }
            
        }else if(temp.compare("lista") == 0){
            
            cout << "Listar\n" << endl;
            Listar();
            
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
    
    exit(EXIT_SUCCESS);
}

void Sim::Modo2(){
    
    string cmd, aux1, aux2;
    string temp;
    Consola::clrscr();
    
    cout << "Modo 2\n" << endl;
    campeonato->EntraCorrida(dgv);
    VerComandos();
    
    do{
        
        aux1.clear();
        aux2.clear();
        
        int valor1;
        float valor2;
        char ch[2];
        
        cout << "\nIntroduza o comando: " << "\n";
        getline(cin, cmd);
        
        istringstream is(cmd);
        
        is >> temp >> aux1 >> aux2;
        
        if(temp.compare("campeonato") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            else
                campeonato->IniciaCampeonato(aux1);
                
        }else if(temp.compare("listacarros") == 0){
            cout << campeonato->getAsString() << endl;
        
        }else if(temp.compare("carregabat") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            
            else{
                valor2 = stof(aux2);
                copy(aux1.begin(), aux1.end(), ch);
                cout << "Carrega Bateria: " << ch << " " << valor2 << endl;
                campeonato->CarregaBateriaQ(*ch, valor2);
            }   
            
        }else if(temp.compare("carregatudo") == 0){
            cout << "Carrega Tudo " << endl;
            dgv->CarregaTudo();
            
        }else if(temp.compare("corrida") == 0){
            MostrarPista();
            
        }else if(temp.compare("acidente") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            else
                copy(aux1.begin(), aux1.end(), ch);
                cout << "Acidente " << ch << endl;
                campeonato->ProvocaAcidente(*ch);
            
        }else if(temp.compare("stop") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            else
                cout << "Stop " << aux1 << endl;
                campeonato->ParaCarro(aux1);
            
        }else if(temp.compare("destroi") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            else{
                copy(aux1.begin(), aux1.end(), ch);
                cout << "Destroi " << aux1 << endl;
                dgv->ApagaC(*ch);
            }
            
        }else if(temp.compare("passatempo") == 0){
            if(aux1.empty() == true)
                cout << "Nao introduziu nenhum valor\n" << endl;
            else{
                valor1 = stoi(aux1);
                cout << "Passatempo " << valor1 << endl;
                AtualizaPista();
            }
            
        }else if(temp.compare("log") == 0){
            cout << "LOG " << endl;
            //Log();
            
        }
    }while(temp.compare("sair") != 0);
    
    exit(EXIT_SUCCESS);
}

//void Sim::AtualizaPista(){
//    
//    Carro *carro = new Carro("Audi", 100, 90, 200);
//    Carro *carro2 = new Carro("Tesla", 100, 90, 200);
//    Carro *carro3 = new Carro("BMW", 100, 90, 200);
//    Carro *carro4 = new Carro("Renault", 100, 90, 200);
//    Carro *carro5 = new Carro("Citroen", 100, 90, 200);
//    Autodromo *autod = new Autodromo("ISEC", 5, 25);
//    Piloto *p = new Piloto("Francisco");
//    
//    carro2->AddPiloto(p);
//    
//    autod->AddToLugares(carro);
//    autod->AddToLugares(carro2);
//    autod->AddToLugares(carro3);
//    autod->AddToLugares(carro4);
//    autod->AddToLugares(carro5);
//    
//    int x = autod->GetNLugares();
//    int y = autod->GetComprimento();
//    int numCarros = autod->GetLugares().size();
//    int t = 0;
//    
//    for(int i = 42; i < (x * 2) + 43; i += 2){
//        for(int j = 0; j < y; j++){
//            Consola::gotoxy(i, j + 1);
//            cout << "|" << endl;
//        }
//    }
//    
//    Consola::gotoxy(42, y);
//    for (int n = 42; n < (x * 2) + 42; n += 2) {
//
//        Consola::gotoxy(n + 1, autod->GetLugares().at(t)->GetPosY() + 1);
//        putchar(autod->GetLugares().at(t)->GetID());
//        t++;
//    }
//    
//}

void Sim::AtualizaPista(){
    MostrarPista();
}  

void Sim::MostrarPista(){
        
    autodromo = campeonato->GetAutodromo().at(0);
//    Carro *carro = new Carro("Audi", 100, 90, 200);
//    Carro *carro2 = new Carro("Tesla", 100, 90, 200);
//    Carro *carro3 = new Carro("BMW", 100, 90, 200);
//    Carro *carro4 = new Carro("Renault", 100, 90, 200);
//    Carro *carro5 = new Carro("Citroen", 100, 90, 200);
//    Piloto *p = new Piloto("Francisco");
    
//    carro->AddPiloto(p);
//    
//    autodromo->AddToLugares(carro);
//    autodromo->AddToLugares(carro2);
//    autodromo->AddToLugares(carro3);
//    autodromo->AddToLugares(carro4);
//    autodromo->AddToLugares(carro5);
    
    
    int x = autodromo->GetNLugares();
    int y = autodromo->GetComprimento();
    int numCarros = autodromo->GetLugares().size();
    int t = 0;
    
    for(int i = 42; i < (x * 2) + 43; i += 2){
        for(int j = 0; j < y; j++){
            Consola::gotoxy(i, j + 1);
            cout << "|" << endl;
        }
    }
    
    
    for(Carro * c: autodromo->GetLugares()){
        c->passatempo();
    }
    
    
    Consola::gotoxy(42, y);
    for (int n = 42; n < (x * 2) + 42; n += 2) {
            
//            Consola::gotoxy(n + 1, y);
            Consola::gotoxy(n + 1, y - autodromo->GetLugares().at(t)->GetPosY());
//        cout <<"posy " << autodromo->GetLugares().at(t)->GetPosY() << endl;
//             Consola::gotoxy(n + 1, y - 2);
            if(autodromo->GetLugares().at(t)->TemPiloto() == true){
                putchar(toupper(autodromo->GetLugares().at(t)->GetID()));
//                autodromo->GetLugares().at(t)->SetPosY(autodromo->GetLugares().at(t)->GetPosY());
            }else{
                putchar(autodromo->GetLugares().at(t)->GetID());
//                autodromo->GetLugares().at(t)->SetPosY(autodromo->GetLugares().at(t)->GetPosY());

            }
//            autodromo->GetLugares().at(t)->SetPosY(autodromo->GetLugares().at(t)->GetPosY() - 1);
//            autodromo->GetLugares().at(t)->passatempo();
            t++;           
    }
   
    
    
}

void Sim::VerComandos(){
    
    Consola::gotoxy(0, 2);
    cout << "Comandos para a simulacao " << endl;
    
    Consola::gotoxy(0, 3);
    cout << "-> campeonato <A1> " << endl;
    
    Consola::gotoxy(0, 4);
    cout << "-> listacarros " << endl;
    
    Consola::gotoxy(0, 5);
    cout << "-> carregabat <letraCarro> <Q> " << endl;
    
    Consola::gotoxy(0, 6);
    cout << "-> carregatudo " << endl;
    
    Consola::gotoxy(0, 7);
    cout << "-> corrida " << endl;
    
    Consola::gotoxy(0, 8);
    cout << "-> acidente <letraCarro> " << endl;
    
    Consola::gotoxy(0, 9);
    cout << "-> stop <nomePiloto> " << endl;
    
    Consola::gotoxy(0, 10);
    cout << "-> destroi <letraCarro> " << endl;
    
    Consola::gotoxy(0, 11);
    cout << "-> passatempo <N> " << endl;
    
    Consola::gotoxy(0, 12);
    cout << "-> log " << endl;
    
}

void Sim::Listar(){
    
    cout << dgv->getAsString() << endl;
    
    cout << campeonato->getAsString() << endl;
}