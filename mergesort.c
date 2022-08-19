#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordenacao.h"
#define TAM 8
 

int main()
{
    int vet[TAM] = {};

    for(int i = 0; i < TAM; i++)
    {
        vet[i] = rand() % 10;
        print(vet);
        printf("\n");
    }

    return 0;
}

// int size(const Float_Vector *vector)
// {
//     return vector -> size;
// };


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



