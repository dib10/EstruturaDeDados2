#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Faça um programa para ordenação de um vetor de inteiros, utilizando o algoritmo de
ordenação InsertionSort, que apresente sua saída como o exemplo abaixo*/
void  ordena_insertionSort(int *v,int n)
{
    int i,j,aux;
    for(i=1;i<n;i++)
    {
        aux=v[i];
        for(j=i;(j>0)&& (aux<v[j-1]);j--)
        {
            v[j]=v[j-1];
        }
        v[j]=aux;
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,n;
    int vetor[10]={120,150,110,130,100,160,140,190,180,170}; //vetor desordenado
    printf("Vetor desordenado: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",vetor[i]);
    }
    ordena_insertionSort(vetor,10);
    printf("\nVetor ordenado: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",vetor[i]);
    }
    return 0;
}
