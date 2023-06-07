#include "sort.h"
#include <iostream>

int* bubblesort(int vetor[], int tam){
    int aux = 0;
    int teste = 0;
    
    for(int i=0;i<tam;i++){
        
        for(int j=i+1;j<tam;j++){
            
            if (vetor[i] > vetor[j]){
                
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
                
            }
        }
    }
    return vetor;
}

int* selectionsort(int vetor[], int tam){
    int min=0;
    int aux=0;
    for(int i=0;i<tam-1;i++){
        min = i;
        for(int j=i+1;j<tam;j++){
            if(vetor[j] < vetor[min]){
                min = j;
            }  
        }
    aux = vetor[min];
    vetor[min] = vetor[i];
    vetor[i] = aux;
    }
    return vetor;
}

int* insertionsort(int vetor[], int tam){
    int atual=0;
    int j=0;
    for(int i=1;i<tam;i++){
        atual = vetor[i];
        j = i;
        while (j>0 && (vetor[j-1] > atual))
        {
            vetor[j] = vetor[j-1];
            j = j - 1;
        }
        vetor[j] = atual;
    }
    return vetor;
}

void merge(int vetor[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = vetor[l + i];
    for (j = 0; j < n2; j++)
        R[j] = vetor[m + 1 + j];
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetor[k] = L[i];
            i++;
        }
        else {
            vetor[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        vetor[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vetor[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int vetor[], int l, int r)
{
    if (l < r){
        int m = l + (r - l) / 2;
 
        mergesort(vetor, l, m);
        mergesort(vetor, m + 1, r);
 
        merge(vetor, l, m, r);
    }
}

int partition(int* vetor, int inicio, int fim){  

    int indice = 0, pivotElement = vetor[fim], pivotindice;
    int* temp = new int[fim - inicio + 1]; 

    for (int i = inicio; i <= fim; i++){
        if(vetor[i] < pivotElement){
            temp[indice] = vetor[i];
            indice++;
        }
    }
 
    temp[indice] = pivotElement; 
    indice++;
 
    for (int i = inicio; i < fim; i++){
        if(vetor[i] > pivotElement){
            temp[indice] = vetor[i];
            indice++;
        }
    }
     
    indice = 0;
    for (int i = inicio; i <= fim; i++){  
        if(vetor[i] == pivotElement){
            pivotindice = i;
        }
        vetor[i] = temp[indice];
        indice++;
    }
    return pivotindice;
}
 
void quicksort(int* vetor, int inicio, int fim)
{ 
    if(inicio < fim){  
        int partitionindice = partition(vetor, inicio, fim);
        quicksort(vetor, inicio, partitionindice - 1);
        quicksort(vetor, partitionindice + 1, fim); 
    }
}
 