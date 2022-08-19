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

}

void print(int array[])
{
    for(int i = 0; i < TAM; i++)
    {
        printf("|%d| ", array[i]);
    }
}



