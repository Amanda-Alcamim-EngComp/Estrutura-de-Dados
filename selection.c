#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 8

void selection(int vector[]);
void bubble(int *vector, int size);
void print(int array[]);

int main()
{
    int data[] = {7, 3, 0, 1, 3, 8, 2, 9};
    print(data);

    selection(data);

    return 0;
}

void selection(int vector[])
{
    for(int i = 0; i < TAM; i++)
    {
        int menor = i; //armazenando apenas o índice
        for(int j = i; j < TAM; j++)
        {
            if(vector[j] < vector[menor])
            {
                menor = j;
            }
        }
        swap(&vector[i], &vector[menor]);
        printf("\n");
        print(vector);
    }
}

void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}


void print(int array[])
{
    for(int i = 0; i < TAM; i++)
    {
        printf("|%d| ", array[i]);
    }
}