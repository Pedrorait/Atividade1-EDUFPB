#include "pilha.h"

pilhaseq::pilhaseq(){
    tam_max = 100;
    dados = new int[tam_max];
    topo = -1;
}

bool pilhaseq::vazia(){
    if(topo==-1){
        return true;
    }
    return false;
}

bool pilhaseq::cheia(){
    if (topo == (tam_max-1)){
        return true;
    }
    return false;
}

bool pilhaseq::push(int valor){
    if (cheia()){
        return false; 
    }
    topo++;
    dados[topo] = valor;
    return true;
}

int pilhaseq::tamanho(){
    return topo+1;
}

int pilhaseq::top(){
    if (vazia()){
        return -1;
    }
    return dados[topo];
}

int pilhaseq::pop(){
    if (vazia()){
        return -1;
    }
    int valor = dados[topo];
    topo--;
    return valor;
}

pilhaseq::~pilhaseq(){
    delete dados;
}