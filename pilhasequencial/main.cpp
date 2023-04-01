#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    pilhaseq pilha1;

    pilha1.push(10);
    
    pilha1.vazia();
    pilha1.top();
    pilha1.tamanho();

    pilha1.pop();

    return 0;
}