#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

struct NO
{
    int info;
    struct NO *esq;
    struct NO *dir;
};
ArvBin *cria_arvBin()
{
    ArvBin *raiz = (ArvBin *)malloc(sizeof(ArvBin));
    if (raiz != NULL)
    {
        *raiz = NULL;
    }
    return raiz;
}
void liberar_arvBin(ArvBin *raiz)
{
    if (raiz == NULL)
    {
        return;
    }
    libera_NO(*raiz); 
    free(raiz);       
}
int vazia_arvBin(ArvBin *raiz)
{
    if (raiz == NULL)
    {
        return 1;
    }
    if (*raiz == NULL)
    {
        return 1;
    }
    return 0;
}
