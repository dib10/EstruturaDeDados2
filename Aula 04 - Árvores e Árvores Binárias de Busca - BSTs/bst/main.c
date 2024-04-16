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
    libera_arvBin(raiz);


}

