//
// Created by Rudy Gualandro on 2019-07-07.
//

#ifndef ARRAYLISTA_ENTRADA_H
#define ARRAYLISTA_ENTRADA_H

#include<string>

using namespace std;

class Entrada {

private:

    std::string Nome;
    int pontuacao;


public:

    Entrada(int pontos = 0, const std::string& nome = " ");
    std::string getName() const;
    int getPontuacao() const;

};



#endif //ARRAYLISTA_ENTRADA_H
