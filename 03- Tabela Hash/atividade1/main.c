/*
Implementar o programa hashTable no formato de TAD, com os três arquivos: hashTable.h,
hashTable.c e main.c. Você poderá incluir mais bibliotecas caso queira (eu acho recomendável),
para incluir funções auxiliares.
• Em seu projeto, você desenvolverá todo o arquivo main.c, que então controlará a execução de todo
o programa da seguinte forma:
• Um menu apresentará as opções de execução da tabela Hash com inserções sem tratamento de
colisões, ou inserções com tratamento de colisões. O programa deverá funcionar somente com
uma das opções, e nunca as duas juntas por motivos óbvios, uma vez que as funções de hashing
são diferentes. Deverá apresentar ainda a opção de encerramento do programa.
• Uma vez determinado o passo anterior, um segundo menu deverá apresentar as opções de
inserção de elementos e busca de elementos, com o questionamento após cada tarefa, se o
usuário deseja continuar com as operações. Se não desejar, o programa será encerrado.*/
#include <stdio.h>
#include <stdlib.h>
#include "hashTable.h" //inclui os Protótipos

struct aluno dadosAluno;
int i,matricula,continua;
int tamanho = 1024;
int qtd =1;
Hash *tableNoCol = criaHash(tamanho);
Hash *tableWithCol = criaHash(tamanho);

while(1)
{
    continua = menuDefineCol();
    switch(continua) {
        case 0:
            printf("Programa encerrado e deslocando memória...!\n");
            liberaHash(tableNoCol);
            liberaHash(tableWithCol);
            system("pause");
            return 0;
        case 1:
            while(continua)
            {
                if(menuInsBuscaSemColisoes() == 0)
                {
                    printf("Inserindo sem tratamento de colisoes");
                    insereHash_semColisao(tableNoCol, coletaDados());
                }
                else
                {
                    printf("Buscando alunos sem tratamento de colisoes");
                    printf("Digite a matricula do aluno a ser buscado: ");
                    scanf("%d", &matricula);
                    fflush(stdin);
                    if(buscaHash_semColisao(tableNoCol, matricula, &dadosAluno))
                    {
                        imprimeAluno(dadosAluno);
                    }
                    else
                    {
                        printf("Aluno não encontrado\n");
                    }
                }
                printf("Deseja continuar? 1 - Sim | 0 - Não\n");
                scanf("%d", &continua);
                system("cls");
            }
            break;
        case 2:
            while(continua)
            {
                if(menuInsBuscaComColisoes() == 0)
                {
                    printf("Inserindo com tratamento de colisoes");
                    insereHash_enderecoAberto(tableWithCol, coletaDados());
                }
                else
                {
                    printf("Buscando alunos com tratamento de colisoes");
                    printf("Digite a matricula do aluno a ser buscado: ");
                    scanf("%d", &matricula);
                    fflush(stdin);
                    if(buscaHash_enderecoAberto(tableWithCol, matricula, &dadosAluno))
                    {
                        imprimeAluno(dadosAluno);
                    }
                    else
                    {
                        printf("Aluno não encontrado\n");
                    }
                }
                printf("Deseja continuar? 1 - Sim | 0 - Não\n");
                scanf("%d", &continua);
                system("cls");
            }
            break;
        default:
            printf("Opção inválida\n");
            system("pause");
    }
}
