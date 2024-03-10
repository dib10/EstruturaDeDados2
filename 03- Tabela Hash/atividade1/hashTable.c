//Arquivo hashTable.c - tipo opaco e funções encapsuladas

#include <stdio.h>
#include <stdlib.h>
#include "hashTable.h" //inclui os Protótipos

//definição do tipo Hash - tipo opaco

struct hash
{
    int qtd;
    int TABLE_SIZE;
    struct aluno **itens;
}
Hash *criaHash(int TABLE_SIZE)
{
    Hash *ha = (Hash *)malloc(sizeof(Hash));
    if (ha != NULL)
    {
        int i;
        ha->TABLE_SIZE = TABLE_SIZE;
        ha->itens = (struct aluno **)malloc(TABLE_SIZE * sizeof(struct aluno *));

        if (ha->itens == NULL)
        {
            free(ha);
            return NULL;
        }
        ha->qtd = 0;
        for (i = 0; i < ha->TABLE_SIZE; i++)
            ha->itens[i] = NULL;
    }
    return ha;
}
void liberaHash(Hash *ha)
{
    if (ha != NULL)
    {
        int i;
        for (i = 0; i < ha->TABLE_SIZE; i++)
        {
            if (ha->itens[i] != NULL)
                free(ha->itens[i]);
        }
        free(ha->itens);
        free(ha);
    }
}
int chaveDivisao(int chave, int TABLE_SIZE)
{
    return (chave & 0x7FFFFFFF) % TABLE_SIZE;
}