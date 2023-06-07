#include <iostream>
#include "sort.h"
using namespace std;


void mostrarvetor(int vetor[],int tam){
    cout << "[";
    for(int i=0;i<tam;i++){
        cout << vetor[i];
        if (i != tam-1){
            cout << ",";
        }
    }
    cout << "]" << endl;
    cout << endl;
}


int main(){

    int escolha=0;
    int tam = 13;

    do{
        cout << endl;
        cout << "Vetor inicial:" << endl;
        int vetor[] = {10,11,2,22,50,6,3,1,23,66,35,42,79};
        mostrarvetor(vetor,tam);

        cout << "Qual algoritmo de ordenação quer usar?" << endl;
        cout << "0 - Bubble sort" << endl;
        cout << "1 - Selection sort" << endl;
        cout << "2 - Insertion sort" << endl;
        cout << "3 - Merge sort" << endl;
        cout << "4 - Quick sort" << endl;
        cout << "5 - Sair" << endl;

        scanf("%d",&escolha);

        switch (escolha)
        {
        case 0:
            cout << "Vetor mudado pelo Bubble sort:" << endl << endl;
            mostrarvetor(bubblesort(vetor,tam),tam);
            break;
        case 1:
            cout << "Vetor mudado pelo Selection sort:" << endl << endl;
            mostrarvetor(selectionsort(vetor,tam),tam);
            break;
        case 2:
            cout << "Vetor mudado pelo Insertion sort:" << endl << endl;
            mostrarvetor(insertionsort(vetor,tam),tam);
            break;
        case 3:
            cout << "Vetor mudado pelo Merge sort:" << endl << endl;
            mergesort(vetor,0,tam-1);
            mostrarvetor(vetor,tam);
            break;
        case 4:
            cout << "Vetor mudado pelo Quick sort:" << endl << endl;
            quicksort(vetor,0,tam-1);
            mostrarvetor(vetor,tam);
            break;
        case 5:
            cout << "Saindo..." << endl;
            break;

        default:
            cout << "Opção invalída, tente algum número de 0 a 5" << endl;
            break;
        }
    }while(escolha!=5);

    return 0;
}