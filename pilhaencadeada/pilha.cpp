#include "pilha.h"
#include <iostream>

no::no(){
    proximo = NULL;
}

int no::get_conteudo(){
    return conteudo;
}

void no::set_conteudo(int c){
    conteudo = c;
}

no* no::get_proximo(){
    return proximo;
}

pilhaenc::pilhaenc(){
    topo = NULL;
    n_elementos = 0;
}

void no::set_proximo(no* prox){
    proximo = prox;
}

bool pilhaenc::vazia(){
    if (n_elementos == 0)
        return true;
    else
        return false;
}

int pilhaenc::tamanho(){
    return n_elementos;
}

int pilhaenc::top(){
    if (vazia()){
        return -1; // Pilha vazia
    }
        return topo->get_conteudo();
}


bool pilhaenc::push(int valor){
    no *novoNo = new no();

    novoNo->set_conteudo(valor);
    novoNo->set_proximo(topo);

    topo = novoNo;
    n_elementos++;
    return true;
}

int pilhaenc::pop(){
    if (vazia())
        return -1; // pilha vazia
    no* p = topo;
    int valor = p->get_conteudo();
    topo = p->get_proximo();
    n_elementos--;
    p = NULL;
    return valor;
}

