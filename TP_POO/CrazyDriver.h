/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CrazyDriver.h
 * Author: DanielDinis
 *
 * Created on 28 de Novembro de 2019, 19:08
 */

#ifndef CRAZYDRIVER_H
#define CRAZYDRIVER_H

class CrazyDriver: public Piloto  {
    
    int inicio;
    int lugar;
    float energia;
    float energia_automovel;
    
public:
    CrazyDriver();
    CrazyDriver(const CrazyDriver& orig);
    virtual ~CrazyDriver();

};

#endif /* CRAZYDRIVER_H */

