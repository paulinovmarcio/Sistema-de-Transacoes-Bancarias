#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char identificador[10];
    char data[15];
    char hora[10];
    char tipo[10];
    float valor;
}TADTransacaoBancaria;

//OPERACOES

// SET
void SetIdentificador(TADTransacaoBancaria *transacao, char * identificacao);
void SetData(TADTransacaoBancaria* transacao, char * data);
void SetHora(TADTransacaoBancaria * transacao,char * hora);
void SetTipo(TADTransacaoBancaria* transacao, char * tipo);
void SetValor(TADTransacaoBancaria * transacao, float valor);

// GET

char * GetIdentificador(TADTransacaoBancaria *transacao);
char * GetDATA (TADTransacaoBancaria * transacao);
char * GetHora(TADTransacaoBancaria * transacao);
char * GetTipo (TADTransacaoBancaria * transacao);
float GetValor(TADTransacaoBancaria * transacao);

//METODOS

void InicializaTransacao(TADTransacaoBancaria * transacao);


#endif