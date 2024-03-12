



#include "hashTable.h"
#include <stdio.h>
#include <stdlib.h>

void imprimeAluno(struct aluno al)
{
    printf("Matricula: %d\n", al.matricula);
    printf("Nome: %s\n", al.nome);
    printf("Nota1: %.2f\n", al.n1);
    printf("Nota2: %.2f\n", al.n2);
    printf("Nota3: %.2f\n", al.n3);
    printf("-------------------------------\n");
}

int menuDefineCol()
{
    system("cls");
    int continua;
    printf("Deseja trabalhar com ou sem colisoes?\n");
    printf("1 - Sem colisoes\n");
    printf("2 - Com colisoes\n");
    printf("0 - Encerrar\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &continua);
    return continua;
    
}

int menuInsBuscaSemColisoes()
{
    int continua;
    printf("Deseja inserir ou buscar sem colisoes?\n");
    printf("1 - Inserir\n");
    printf("2 - Buscar\n");
    printf("escolha: ");
    scanf("%d", &continua);
    system("cls");
    return continua;
}

int menuInsBuscaComColisoes()
{
    int continua;
    printf("Deseja inserir ou buscar com colisoes?\n");
    printf("1 - Inserir\n");
    printf("2 - Buscar\n");
    printf("escolha: ");
    scanf("%d", &continua);
    system("cls");
    return continua;
}
struct aluno coletaDados() {
    struct aluno al;
    printf("Digite a matricula do aluno: ");
    scanf("%d", &al.matricula);
    printf("Digite o nome do aluno: ");
    scanf("%s", al.nome);
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &al.n1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &al.n2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &al.n3);
    return al;
}
int main() {
    
struct aluno dadosAluno;
int tamanho = 1024;
Hash *tableNoCol = criahash(tamanho);
Hash *tableWithCol = criahash(tamanho);
int i,matricula,continua;
int qtd = 1;


while(1)
{
    continua = menuDefineCol();
    switch(continua) {
        case 0:
            printf("Programa encerrado e deslocando memória...!\n");
            liberahash(tableNoCol);
            liberahash(tableWithCol);
            system("pause");
            return 0;
        case 1:
            while(continua)
            {
                if(menuInsBuscaSemColisoes() == 0)
                {
                    printf("Inserindo sem tratamento de colisoes");
                    insereHash_SemColisao(tableNoCol, coletaDados());
                }
                else
                {
                    printf("Buscando alunos sem tratamento de colisoes");
                    printf("Digite a matricula do aluno a ser buscado: ");
                    scanf("%d", &matricula);
                    fflush(stdin);
                    if(buscaHash_SemColisao(tableNoCol, matricula, &dadosAluno))
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
return 0;
}
