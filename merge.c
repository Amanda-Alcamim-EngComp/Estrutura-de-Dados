#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 8

int mergesort(int arr[], int inicio, int fim);
void merge(int arr[], int inicio, int meio, int fim);
void print(int array[]);

int main()
{
    int arr[] = {3,0,7,1,5,2,4,6};
    print(arr);

    merge(arr, 0, 4, 8);
    printf("\n");
    print(arr);

    return 0;

}

int mergesort(int arr[], int inicio, int fim)
{
    if(inicio < fim)
    {
        int meio = inicio + (fim - inicio) / 2;

        mergesort(arr, inicio, meio);
        mergesort(arr, meio + 1, fim);
        merge(arr, inicio, meio, fim);
    }
}

void merge(int arr[], int inicio, int meio, int fim)
{
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;


    int L[n1];  //sub vetor da esquerda
    int R[n2];  //sub vetor da direita

    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[inicio + i];
    }

    for(int i = 0; i < n2; i++)
    {
        R[i] = arr[meio + i];  //pensar...
    }

    int i = 0, j = 0, k = 0;   //i=esquerda; j=direita; k=vetor completo
    while(i < n1 &&  j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
}

void print(int array[])
{
    for(int i = 0; i < TAM; i++)
    {
        printf("|%d| ", array[i]);
    }
}