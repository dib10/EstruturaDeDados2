#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

struct NO
{
    int info;
    struct NO *esq;
    struct NO *dir;
};
