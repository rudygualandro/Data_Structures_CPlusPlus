#include <iostream>
#include "Entrada.h"
#include "ArrayEntradas.h"

using namespace std;

int main() {


    Entrada jogador1(1000, "Rudy");
    ArrayEntradas* lista1= new ArrayEntradas;

    lista1->adicionar(jogador1);

    cout << jogador1.getName() << endl;
    cout << jogador1.getPontuacao() << endl;
    cout << lista1->lista[0].getPontuacao() << endl;
    cout << lista1->lista[1].getPontuacao() << endl;

    return 0;
}