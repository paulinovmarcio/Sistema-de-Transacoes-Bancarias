#include "../header/lista.h"


void LInicializa(TADListaEncadeada *lista)
{
    lista ->pPrimeiro = (Apontador) malloc(sizeof(TCelula));// Alocacao dinamica de um espaco na memoria do tamanho de uma Celula
    lista->pUltimo = lista->pPrimeiro; // O ultimo deve apontar para o primeiro ja que a lista é inicializada sem nada armazenado
    lista->pPrimeiro->pProx = NULL;    // Para evitar lixo de memória o endereço que a primeira celula deve apontar é NULO ja que não tem nada armazenado
}

int  LEhVazia(TADListaEncadeada * lista) {
    return (lista->pPrimeiro == lista->pUltimo); //Verifica se o apontador primeiro e ultimo apontam para o mesmo local para ve se a lista esta vazia. 
}

int  LInsere(TADListaEncadeada *lista, TADTransacaoBancaria * transacao){
    lista->pUltimo->pProx = (Apontador) malloc(sizeof(TCelula)); // A proxima posição seria a pProx do pUltimo , logo aloca uma nova celula ali.
    lista->pUltimo = lista->pUltimo->pProx; // Agora o pUltimo da lista deve ser essa nova célula criada
    lista->pUltimo->transacao = *transacao; // Na parte do Ultimo da lista , acesso  a parte q fica guardada para botar as transacoes e coloco ali a transacao q quero adicionar
    lista->pUltimo->pProx = NULL; //Novamente para evitar lixo de memória a ultima não deve apontar para nada.
    return 1;
}

int  LRemove(TADListaEncadeada*lista, TADTransacaoBancaria * transacao){
    if (LEhVazia(lista)) {
        return 0;
    }
    TCelula * pAux;
    *transacao = lista->pPrimeiro->pProx->transacao; // A estrutura aqui é de uma fila , então as remoçoes serão feitas no inicio da lista , logo o Item que esta na primeira posicao sera salvo aqui caso precise ser utilizado
    pAux = lista->pPrimeiro; // Para não correr o risco de perder o primeiro endereço da lista , uso uma Celula Auxiliadora para guardar esse endereco
    lista->pPrimeiro = lista->pPrimeiro->pProx; // Agora a nova celula cabeça será a antiga pProx
    free(pAux); //A pAux so foi criada para guardar o endereco da antiga celula cabeca , agora que ja tem uma nova pode-se liberar sem correr o risco de perder a lista inteira
    return 1;
}

void LImprime(TADListaEncadeada * lista){
    Apontador pAux;
    pAux = lista->pPrimeiro->pProx; //A celula auxiliar para apontar para primeira célula que tem algo
    while(pAux != NULL){//Enquanto pAux não for nulo continua a printar
        printf("-------------------------------------------------------\n");
        printf("IDENTIFICADOR: %s \n",GetIdentificador(&pAux->transacao));
        printf("DATA: %s \n",GetDATA(&pAux->transacao));
        printf("HORARIO: %s \n",GetHora(&pAux->transacao));
        printf("TIPO: %s \n",GetTipo(&pAux->transacao));
        printf("VALOR: R$ %.2f \n",GetValor(&pAux->transacao));
        printf("-------------------------------------------------------\n");
        pAux = pAux ->pProx; //pAux agora é o endereco da frente;
    }
}