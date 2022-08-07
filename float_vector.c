// ARQUIVO DE IMPLEMENTAÇÕES

#include "float_vector.h" //possui aspas duplas porque foi eu que criei a biblioteca, ela não existe no sistema
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//MINHA TAD
struct float_vector {
    int capacity; //numero máximo de elementos
    int size; //quantidade atual de elementos
    float *data; //vetor de floats
};

    /**
    *  @brief Cria (aloca) um vetor de float com uma dada capacidade
    * 
    *  @param tam Capacidade do vetor
    *  @return Float_Vector* Um vetor de floats alocado/criado
    */ 

Float_Vector *create(int tam){  // função que aloca dinamicamente um vetor

    Float_Vector *vet = (Float_Vector *)calloc(1, sizeof(Float_Vector));
    vet->capacity = tam;
    vet->size = 0;  //dado redundante por ter usado o calloc
    vet->data = (float*) calloc(vet->capacity, sizeof (float));  //ponteiro para a primeira casa do vetor

    return vet;  
}

void destroy(Float_Vector **vet_ref){
    Float_Vector *vet = *vet_ref;
    free(vet->data);  //Liberamos a casa do vetor
    free(vet);  //Liberamos a estrutura
    *vet_ref = NULL;  //Setou NULL para não ter acesso indevido no programa no futuro
}


int size(const Float_Vector *vector){
    return vector->size;
}


int capacity(const Float_Vector *vector){
    return vector->capacity;
}


float at(const Float_Vector *vector, int pos){   //função 'at' trata o erro    //situação que não tem certeza absoluta dos dados que estão lá dentro
    if(pos < 0 || pos >= vector->size){
        fprintf(stderr, "Error: Invalid Position!\n");
        fprintf(stderr, "Index [%d], is out of bounds\n");
        exit(EXIT_FAILURE);
    }

    return vector->data[pos];
}


float get(const Float_Vector *vector, int index){   //funçao 'get' não trata o erro    //*situação que tem certeza absoluta dos dados que estão lá dentro
    return vector->data[index];                                                          //   quando o index/vetor está cheio
}


bool _isFull(const Float_Vector *vector){
    return vector->size = vector->capacity;
}


void append(Float_Vector *vector, float n){
    if(_isFull(vector)){
        //ERROR
        fprintf(stderr, "Error in append\nVector is full!");
        exit(EXIT_FAILURE);
    }
    //inserir
    vector->data[vector->size++] = n;
}