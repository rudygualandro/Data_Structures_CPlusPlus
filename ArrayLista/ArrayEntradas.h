//
// Created by Rudy Gualandro on 2019-07-07.
//

#ifndef ARRAYLISTA_ARRAYENTRADAS_H
#define ARRAYLISTA_ARRAYENTRADAS_H

#include <string>
#include "Entrada.h"


class ArrayEntradas {

public:

    int tamanhoMax;
    int tamanhoAtual;
    Entrada* lista;

//public:

    ArrayEntradas(int tamanhoMaximo =10);

    ~ArrayEntradas();

    void adicionar (const Entrada& entrada);


};

#endif //ARRAYLISTA_ARRAYENTRADAS_H
