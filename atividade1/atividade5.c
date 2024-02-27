#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Faça um programa para ordenação de um vetor de inteiros, utilizando o algoritmo de
ordenação SelectionSort, que apresente sua saída como o exemplo abaixo:*/
void Ordena_selectionSort(int *v, int n)
{
    int i,j,menor,troca;
    for(i=0;i<n-1;i++)
    {
        menor = i;
        for(j=i+1;j<n;j++)
        {
            if(v[j]<v[menor])
            {
                menor = j;
            }
        }
        if(i!=menor)
        {
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
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
    Ordena_selectionSort(vetor,10);
    printf("\nVetor ordenado: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",vetor[i]);
    }
    return 0; 
}