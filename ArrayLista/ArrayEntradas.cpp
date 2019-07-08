//
// Created by Rudy Gualandro on 2019-07-07.
//

#include "ArrayEntradas.h"

ArrayEntradas::ArrayEntradas(const int tamanhoMaximo){

    tamanhoMax = tamanhoMaximo;
    lista = new Entrada[tamanhoMax];
    tamanhoAtual = 0;

}

ArrayEntradas::~ArrayEntradas() {

    delete[] lista;

}

void ArrayEntradas::adicionar(const Entrada& entrada){

    lista[tamanhoAtual] = entrada;
    int novaPontuacao = entrada.getPontuacao();
    tamanhoAtual++;

    int i = tamanhoAtual-2;
    while (i >= 0 && novaPontuacao > lista[i].getPontuacao()) {

        lista[i+1] = lista[i].getPontuacao();
        i--;
    }
    lista[i] = entrada;
}