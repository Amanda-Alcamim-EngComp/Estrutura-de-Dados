#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 8

void swap(int *a, int *b);
void bubble(int *vector, int size);

int main()
{
    int vector[TAM] = {7, 3, 0, 1, 3, 8, 2, 9};
    bubble(vector, 8);

    return 0;
}

void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubble(int *vector, int size)
{    
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size -1; j++)
        {
            if(vector[j] > vector[j+1])
            {
            swap(&vector[j], &vector[j+1]);
            }   
        }
        
    }
}

void printVector(const int *vector)
{
    //teste de maquina
}