#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"
int main()
{
    int x;
    ArvBin *raiz;
    raiz = cria_arvBin();
    if (vazia_arvBin(raiz))
    {
        printf("Arvore esta vazia\n");
    }
    else
    {
        printf("Arvore possui elementos\n");
    }
    x = altura_arvBin(raiz);
    printf("Altura da arvore: %d\n", x);
    x = totalNO_arvBin(raiz);
    printf("Total de nos na arvore: %d\n", x);
    preOrdem_arvBin(raiz);
    emOrdem_arvBin(raiz);
    posOrdem_arvBin(raiz);
    x= insere_arvBin(raiz, 150);
    if(x)
    {
        printf("Elemento inserido com sucesso\n");
    }
    else
    {
        printf("Elemento nao inserido\n");
    }
    x = insere_arvBin(raiz,110);
    if(x)
    {
        printf("Elemento inserido com sucesso\n");
    }
    else
    {
        printf("Elemento nao inserido\n");
    }
    x = insere_arvBin(raiz, 100);
    x = insere_arvBin(raiz, 130);
    x = insere_arvBin(raiz, 120);
    x = insere_arvBin(raiz, 140);
    x = insere_arvBin(raiz, 160);
    x = remove_arvBin(raiz, 100);
    printf("\nBusca na arvore Binaria: \n ");
    if (consulta_arvBin(raiz, 140))
    {
        printf("consulta realizada c sucesso\n");
    }
    else
    {
        printf("Elemento nao encontrado\n");
    }
    libera_arvBin(raiz);
}

