#ifndef LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_H
#include "transacao.h"

typedef struct Celula{   // Criacao da estrutura célula , cada posicao numa lista encadeada é uma celula
    TADTransacaoBancaria transacao; //Cada célula possui uma transacao
    struct Celula * pProx; //E um ponteiro que aponta para próxima célula
}TCelula;

typedef struct Celula * Apontador; // Tipo novo criado para facilitar , tipo Apontador que é basicamente um endereço de uma TCelula


typedef struct{ // Estrutura da lista encadeada , usando célula cabeça , pPrimeiro é o apontador da celula cabeça e não armazena nenhuma transacao
    Apontador pPrimeiro;
    Apontador pUltimo;
}TADListaEncadeada;

//OPERACOES

void LInicializa(TADListaEncadeada * lista);
int  LEhVazia(TADListaEncadeada * lista);
int  LInsere(TADListaEncadeada *lista, TADTransacaoBancaria * transacao);
int  LRemove(TADListaEncadeada*lista, TADTransacaoBancaria * transacao);
void LImprime(TADListaEncadeada * lista);



#endif