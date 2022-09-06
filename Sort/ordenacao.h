//ARQUIVO DE ESPECIFICAÇÃO
#include <stdlib.h>

typedef struct float_vector Float_Vector;

Float_Vector *create(int tam);
int size(const Float_Vector *vet);
void merge(int arr[], int inicio, int meio, int fim);
void swap(int *a, int *b);
int position(int incio, int meio, int fim);
void print(int array[]);
