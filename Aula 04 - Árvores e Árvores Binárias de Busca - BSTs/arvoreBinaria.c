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
int altura_arvBin(ArvBin *raiz)
{
    if (raiz == NULL)
    {
        return 0;
    }
    if (*raiz == NULL)
    {
        return 0;
    }
    int alt_esq = altura_arvBin(&((*raiz)->esq));
    int alt_dir = altura_arvBin(&((*raiz)->dir));
    if (alt_esq > alt_dir)
    {
        return (alt_esq + 1);
    }
    else
    {
        return (alt_dir + 1);
    }
}
int totalNO_arvBin(ArvBin *raiz)
{
    if (raiz == NULL)
    {
        return 0;
    }
    if (*raiz == NULL)
    {
        return 0;
    }
    int alt_esq = totalNO_arvBin(&((*raiz)->esq));
    int alt_dir = totalNO_arvBin(&((*raiz)->dir));
    return (alt_esq + alt_dir + 1);
}
void preOrdem_arvBin(ArvBin *raiz)
{
    if (raiz == NULL)
    {
        return;
    }
    if (*raiz != NULL)
    {
        printf("%d\n", (*raiz)->info);
        preOrdem_arvBin(&((*raiz)->esq));
        preOrdem_arvBin(&((*raiz)->dir));
    }
}
