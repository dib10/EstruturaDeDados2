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
