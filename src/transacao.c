#include "../header/transacao.h"
#include <string.h>

void SetIdentificador(TADTransacaoBancaria *transacao, char *identificacao)
{
    strcpy(transacao->identificador,identificacao);
}

void SetData(TADTransacaoBancaria *transacao, char *data)
{
    strcpy(transacao->data,data);
}

void SetHora(TADTransacaoBancaria *transacao, char *hora)
{
    strcpy(transacao->hora,hora);
}

void SetTipo(TADTransacaoBancaria *transacao, char *tipo)
{
    strcpy(transacao->tipo,tipo);
}

void SetValor(TADTransacaoBancaria * transacao, float valor){
    transacao->valor = valor;
}

char *GetIdentificador(TADTransacaoBancaria *transacao)
{
    return transacao->identificador;
}

char *GetDATA(TADTransacaoBancaria *transacao)
{
    return transacao->data;
}

char *GetHora(TADTransacaoBancaria *transacao)
{
    return transacao->hora;
}

char *GetTipo(TADTransacaoBancaria *transacao)
{
    return transacao->tipo;
}

float GetValor(TADTransacaoBancaria *transacao)
{
    return transacao->valor;
}

void InicializaTransacao(TADTransacaoBancaria *transacao)
{
    SetIdentificador(transacao," ");
    SetData(transacao," ");
    SetHora(transacao," ");
    SetTipo(transacao," ");
    transacao->valor = 0.0;
}
