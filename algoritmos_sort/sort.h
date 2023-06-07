
# ifndef SORT
# define SORT

int* bubblesort(int vetor[], int tam);
int* selectionsort(int vetor[], int tam);
int* insertionsort(int vetor[], int tam);
void mergesort(int vetor[], int l, int r);
void merge(int vetor[], int l, int m, int r);
void quicksort(int* vetor, int inicio, int fim);
int partition(int* vetor, int inicio, int fim);

# endif