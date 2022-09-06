//ARQUIVO *ESPECIFICAÇÕES*
#include <stdlib.h>

typedef struct float_vector Float_Vector; //toda TAD começa com uma estrutura

Float_Vector *create(int tam); //cria uma função que retorna um vetor do tipo FloatVector (*difinindo um tamanho da estrutura)
void destroy(Float_Vector **ref_vector); //destroi a função FloatVector que foi criada. Sempre que criar alguma função, DEVE destruir essa função então
int size(const Float_Vector *vector); //retorna o tamanho da função('data') do tipo FloatVector  //DANGER - NOME(SIZE) NÃO IDEAL
int capacity(const Float_Vector *vector); 
float at(const Float_Vector *vector, int pos);  //retorna o valor dentro do vetor, na posição que foi pedido    //DANGER - NOME(AT) NÃO IDEAL
float get(const Float_Vector *vector);   //DANGER - NOME(GET) NÃO IDEAL
void append(Float_Vector *vector, float n); //para inserir alguma coisa dentro do vetor
void print(const Float_Vector *vector);




// outras funções que PODERIAM EXISTIR

//bool compare(Float_Vector*, Float_Vector*);   - comparar dois TAD'S
//void join(Float_Vector*, Float_Vector*);     -concatenar duas TAD'S
//void split(Float_Vector*, Float_Vector*);    -separar duas TAD'S
//bool isFull(Float_Vector);


/**
tarefa
implementar para segunda feira essas duas funções

    void append(Float_Vector *vector, float n); //para inserir alguma coisa dentro do vetor
    void print(const Float_Vector *vector);
*/



//APRENDER RECURSIVIDADE
