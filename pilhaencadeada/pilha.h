#ifndef PILHA_H
#define PILHA_H

class no{
    private:
        int conteudo;
        no* proximo;
    public:
        no();
        int get_conteudo();
        void set_conteudo(int conteudo);
        no* get_proximo();
        void set_proximo(no* proximo);
};

class pilhaenc{
    private:
        no* topo;
        int n_elementos;
    public:
        pilhaenc();
        int get_n_elementos();
        void set_n_elementos(int n_elementos);
        bool vazia();
        int tamanho();
        int top();
        bool push(int valor);
        int pop();
};

#endif