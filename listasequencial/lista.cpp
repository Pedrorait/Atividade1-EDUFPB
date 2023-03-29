
#include "lista.h"

bool listaseq::cheia(){
    if (tamMax == tamAtual){
        return true;
    }
    return false;
}
bool listaseq::vazia(){
    if (tamAtual == 0){
        return true;
    }
    return false;
}
int listaseq::tamanho_lista(){
    return tamAtual;
}
int listaseq::get_elemento(int pos){
    if ((pos <= 0) || (pos > tamAtual)){
        return 9999999;
    }
    int dado = dados[pos-1];
    return dado;
}
int listaseq::get_posicao(int dado){
    for (int i = 0; i < tamAtual; i++){
        if (dados[i] == dado){
        return (i + 1);
        }
    }
        return 9999999;
}
bool listaseq::adicionar(int pos, int dado){
    if (cheia() || (pos > tamAtual+1) || (pos<=0)){
        return false;
    }
    for (int i = tamAtual; i >= pos; i--){
    dados[i] = dados[i-1];
    }
    dados[pos - 1] = dado;
    tamAtual++;
    return true;
}
bool listaseq::remover(int pos){
    int dado;
    if ((pos > tamAtual) || (pos < 1 ))
        return -1;
    dado = dados[pos-1];
    for (int i = pos - 1; i < tamAtual - 1; i++){
    dados[i] = dados[i+1];
    }
    tamAtual--;
    return dado;

}