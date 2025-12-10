
# 💳 Sistema de Transações Bancárias (C)

Um sistema simples em C para registrar, armazenar e listar transações bancárias utilizando **listas encadeadas**, **TADs** e **Makefile**.  
Este projeto foi criado para fins acadêmicos e demonstra boas práticas de organização de código em C.

## 📁 Estrutura do Projeto

/src          -> arquivos .c (implementações)
/header       -> arquivos .h (interfaces)
/obj          -> arquivos .o compilados
/bin          -> executáveis gerados
main.c        -> função principal
Makefile      -> automação da compilação (opcional)

## ⚙️ Funcionalidades

✔ Registrar várias transações bancárias  
✔ Armazenamento usando lista encadeada dinâmica  
✔ Exibir todas as transações cadastradas  
✔ Campos registrados:
- Identificador
- Data
- Hora
- Tipo (Poupança/Conta Corrente)
- Valor (float)


## 🚀 Como Compilar

Certifique-se de que você possui **gcc** instalado.

Para compilar:

No git bash na pasta do projeto
make

O executavel será gerado em:
./bin/main

Para executar:
make run

Para limpar arquivos compilados:
make clean


Exemplo de saída:
-------------------Sistema de Transações Bancárias-------------------
Quantas transações deseja registrar: 2

IDENTIFICADOR (5 números):  12345
DATA (DD/MM/AA):  10/12/24
HORA (XX:XX):  12:30
TIPO (POUPANÇA/CORRENTE):  poupanca
VALOR (R$):  27.70

-----------------------------------------
IDENTIFICADOR: 12345
DATA: 10/12/24
HORARIO: 12:30
TIPO: poupanca
VALOR: R$ 27.70
-----------------------------------------
