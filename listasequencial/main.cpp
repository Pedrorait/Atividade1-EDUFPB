
#include <iostream>
#include "lista.h"

int main()
{      
    listaseq lista1;
    int escolha=0;
    int dado=0;
    int pos=0;
    do{
        printf("\nQual operação quer fazer na lista?\n");
        printf("1-Adicionar um elemento\n");
        printf("2-Remover um elemento\n");
        printf("3-Ver o tamanho\n");
        printf("4-Checar se está vazia\n");
        printf("5-Checar se está cheia\n");
        printf("6-Pegar o elemento de uma determinada posição\n");
        printf("7-Pegar a posição de uma determinado elemento\n");
        printf("8-SAIR\n");
        printf("->");

        scanf("%d",&escolha);
        switch(escolha){
            case 1:
                printf("\ndado->");
                scanf("%d", &dado);
                printf("\nposição->");
                scanf("%d", &pos);
                if(lista1.adicionar(pos, dado)== 0){
                    printf("Não foi possivel");
                }else{
                    printf("foi possivel");
                }
                break;
            case 2:
                printf("\nposição->");
                scanf("%d",&pos);
                if(lista1.remover(pos)== 0){
                    printf("Não foi possivel");
                }else{
                    printf("foi possivel");
                }
              
                break;
            case 3:
                dado = lista1.tamanho_lista();
                printf("tamanho: %d",dado);
                break;
            case 4:
                if (lista1.vazia() == true){
                    printf("\nLista está vazia\n");
                }else{
                    printf("\nLista não está vazia\n");
                }
                break;
            case 5:
                if (lista1.cheia() == true){
                    printf("\nLista está cheia\n");
                }else{
                    printf("\nLista não está cheia\n");
                }
                break;
            case 6:
                printf("\nposição->");
                scanf("%d",&pos);
                if(lista1.get_elemento(pos) == 9999999){
                    printf("Não foi possivel");
                }else{
                    printf("\ndado: %d",lista1.get_elemento(pos));
                }
                break;
            case 7:
                printf("\ndado->");
                scanf("%d",&pos);
                if(lista1.get_posicao(dado) == 9999999){
                    printf("Não foi possivel");
                }else{
                     printf("\npos: %d",lista1.get_posicao(dado));
                }
                break;
            case 8:
                printf("\nfinalizando programa...\n");
                break;
            default:
                printf("\ncomando invalido\n");
                break;
        }
    }while(escolha!=8);
    return 0;
}
