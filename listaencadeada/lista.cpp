#include "lista.h"
#include <iostream>

using namespace std;

No::No(){
	this->proximo = NULL;
    valor = 0;
}

int No::getvalor(){
    return valor;
}

No* No::getproximo(){
    return proximo;
}

void No::setproximo(No* p){
    proximo = p;
}

void No::setvalor(int dado){
    valor = dado;
}

listaenc::listaenc(){
    cabeca = NULL;
    tamanho = 0;
}

listaenc::~listaenc(){
    delete cabeca;
}

bool listaenc::vazia(){
    if(tamanho == 0){
        return true;
    }
    return false;
}

int listaenc::tamanholista(){
    return tamanho;
}

int listaenc::getelemento(int pos){
    No* aux = cabeca;
    int cont = 0;

    if (vazia()){return -1;}
    if ((pos < 1) || (pos > tamanho)){return -1;}

    while (cont < pos){
        aux = aux->getproximo();
        cont++;
        cout << "count" << endl;
    }
    cout << "count2" << endl;
    int dado = aux->getvalor();
    cout << "count3" << endl;
    return dado;
}

int listaenc::getposicao(int dado){
    
    No* aux = new No();
    int cont = 1;
    
    if (vazia()) {return 0;}

    aux = cabeca;

    while (aux != NULL) {
        if (aux->getvalor() == dado)
            return cont;
        aux = aux->getproximo();
        cont++;
    }
    return -1;
}

bool listaenc::insere(int pos, int dado){
    if ((pos < 1)) return false;

    if (pos == 1){ // insercao no inicio da lista
        return insereInicioLista(dado);
    }
    else if (pos == tamanho+1){ // inserção no fim
        return insereFimLista(dado);
    }
    else{ // inserção no meio da lista
        return insereMeioLista(pos, dado);
}

}

bool listaenc::insereInicioLista(int dado){
    No* novoNo = new No();
    // Insere novo elemento na cabeca da lista
    novoNo->setvalor(dado);
    novoNo->setproximo(cabeca);
    cabeca = novoNo;
    tamanho++;
    return true;
}

bool listaenc::insereMeioLista(int pos, int dado){
    int cont = 1;
    No* novoNo = new No(); // Aloca memoria para novo no
    novoNo->setvalor(dado);
    // Localiza a pos. onde será inserido o novo nó
    No* aux = cabeca;
    while ((cont < pos-1) && (aux != NULL)){
    aux = aux->getproximo();
    cont++;
    }
    if (aux == NULL) return false;
    novoNo->setproximo(aux->getproximo());
    aux->setproximo(novoNo);
    tamanho++;
    return true;
}

bool listaenc::insereFimLista(int dado){
    No* novoNo = new No();
    novoNo->setvalor(dado);
    // Procura o final da lista
    No* aux = cabeca;
    while(aux->getproximo() != NULL){
        aux = aux->getproximo();
    }
    novoNo->setproximo(NULL);
    aux->setproximo(novoNo);
    tamanho++;
    return true;
}


