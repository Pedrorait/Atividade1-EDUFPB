
# ifndef LISTA_H
# define LISTA_H

class listaseq{
    private:
        int dados[100];
        int tamAtual=0;
        int tamMax=100;
    public:
        bool cheia();
        bool vazia();
        int tamanho_lista();
        int get_elemento(int pos);
        int get_posicao(int dado);
        bool adicionar(int pos, int dado);
        bool remover(int pos);
        
};


# endif
