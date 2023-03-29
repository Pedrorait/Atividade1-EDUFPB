
# ifndef LISTA_H
# define LISTA_H

class No{
    private:
        int valor;
        No* proximo;
    public:
        No();
        int getvalor();
        No* getproximo();
        void setproximo(No* p);
        void setvalor(int dado);
};
class listaenc{
    private:
        No* cabeca;
        int tamanho;
        bool insereInicioLista(int dado);
        bool insereMeioLista(int pos, int dado);
        bool insereFimLista(int dado);
    public:
        listaenc();
        ~listaenc();
        bool vazia();
        int tamanholista();
        int getelemento(int pos);
        int getposicao(int dado);
        bool insere(int pos, int dado);
        

};


# endif
