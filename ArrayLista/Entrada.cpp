//
// Created by Rudy Gualandro on 2019-07-07.
//

#include "Entrada.h"


Entrada::Entrada( int pontos, const std::string& nome){


    Nome=nome;
    pontuacao=pontos;

}

std::string Entrada::getName() const {

    return Nome;

}

int Entrada::getPontuacao() const {

    return pontuacao;

}
