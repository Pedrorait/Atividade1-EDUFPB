#ifndef PILHA_H

#define PILHA_H

class pilhaseq{
    private:
        int *dados;
        int topo;
        int tam_max;
    public:
        pilhaseq();
        ~pilhaseq();
        bool vazia();
        bool cheia();
        int tamanho();
        int top();
        bool push(int valor);
        int pop();
};

#endif