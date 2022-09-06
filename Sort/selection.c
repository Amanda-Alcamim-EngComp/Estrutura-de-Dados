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

/**
 * @brief Modo de Ordenação 'selection' que acha a menor e maior posição
 * de memória para que haja a troca suas posições.
 * 
 * @param vector vetor que está sendo passado a busca para ordenação
 */

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

/**
 * @brief Troca as posicões selecionadas pela função de ordenação
 * 
 * @param a A primeira posição que a função de ordenação achou
 * @param b A segunda posição que a função de ordenação achou
 */

void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

/**
 * @brief Função para imprimir na tela a ordenação acontecendo
 * 
 * @param array Estrutura para passar pelos dados do vetor a ser impresso
 */

void print(int array[])
{
    for(int i = 0; i < TAM; i++)
    {
        printf("|%d| ", array[i]);
    }
}
