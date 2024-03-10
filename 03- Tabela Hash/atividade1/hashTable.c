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
int chaveMultiplicacao(int chave, int TABLE_SIZE)
{
    float A = 0.6180339887; // constante: 0 < A < 1
    float val = chave * A;
    val = val - (int)val;
    return (int)(TABLE_SIZE * val);
}
int chaveDobra(int chave, int TABLE_SIZE)
{
    int num_bits = 10;
    int parte1 = chave >> num_bits;
    int parte2 = chave & (TABLE_SIZE - 1);
    return (parte1 ^ parte2);
}