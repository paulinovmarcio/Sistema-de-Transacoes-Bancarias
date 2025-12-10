#include "../header/lista.h"
#include <locale.h>


int main() {

    setlocale(LC_ALL,"pt_BR.UTF-8");

    int quantidade;
    TADListaEncadeada lista1;

    printf("-------------------Sistema de Transações Bancarias-------------------\n");
    printf("Quantas transações deseja registrar: ");
    scanf("%d",&quantidade);
    LInicializa(&lista1);

    for(int i = 0; i < quantidade; i++){
        TADTransacaoBancaria transacao;
        char id[10], data[15], hora[10], tipo[10];
        float valor;

        printf("\nIDENTIFICADOR (5 números):  ");
        scanf(" %s",id);
        SetIdentificador(&transacao,id);

        printf("\nDATA (DD/MM/AA):  ");
        scanf(" %s",data);
        SetData(&transacao,data);

        printf("\nHORA (XX:XX):  ");
        scanf(" %s",hora);
        SetHora(&transacao,hora);

        printf("\nTIPO (POUPANÇA/CORRENTE):  ");
        scanf(" %s",tipo);
        SetTipo(&transacao,tipo);

        printf("\nVALOR (R$):  ");
        scanf(" %f",&valor);
        SetValor(&transacao,valor);

        while (getchar() != '\n');

        LInsere(&lista1,&transacao);        
    }

    int opcao;

    printf("\n*****OPERAÇÕES*****");
    printf("\n(1) Imprimir Transações");
    printf("\n(2) Encerrar Sistema\n");
    scanf("%d",&opcao);

    if(opcao == 1){
        LImprime(&lista1);
    }else 
        if(opcao ==2){
            printf("Encerrando sistema......\n");
        }else
            printf("Valor Inválido!!\n");

    system("PAUSE");
    return 0;
}