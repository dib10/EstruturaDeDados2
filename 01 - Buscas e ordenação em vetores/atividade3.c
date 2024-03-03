#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Faça um programa para ordenação de um vetor de inteiros, utilizando o algoritmo de
ordenação BubbleSort, que apresente sua saída como o exemplo abaixo:*/

void Ordena_bubbleSort(int *v,int n)
{
    int i,continua,aux,fim=n;
    do
    {
        continua=0; //se não houver trocas, o vetor está ordenado
        for(i=0;i<fim-1;i++)
        {
            if(v[i]>v[i+1]) // por exemplo, se o elemento 0 for maior que o elemento 1, troca
            {
                aux=v[i]; //aqui ele faz a troca
                v[i]=v[i+1]; //aqui significa que o elemento 0 é igual ao elemento 1, ou seja, troca
                v[i+1]=aux; 
                continua=i; //se houve troca, o vetor não está ordenado
            }
        }
        fim--;
    } while (continua!=0);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,n;
    int vetor[10]={120,150,110,130,100,160,140,190,180,170}; //vetor desordenado
    Ordena_bubbleSort(vetor,10);
    printf("Vetor ordenado: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",vetor[i]);
    }
    return 0;
}