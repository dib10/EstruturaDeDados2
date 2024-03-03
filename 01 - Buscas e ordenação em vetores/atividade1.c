#include <stdio.h>
#include <stdlib.h>

//busca linear
int buscaLinear(int *vetor, int n, int elem)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(elem==vetor[i])
        {
            return i;
        }
    }
    return -1;
}
//busca ordenada
int buscaOrdenada(int *vetor, int n, int elem)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(elem==vetor[i])
        {
            return i;
        }
        else{
            if(elem<vetor[i])
            {
                return -1;
            }
        }
    }
    return -1;
}

//busca binária
int buscaBinaria(int *vetor,int n,int elem){
    int inicio,meio,fim;
    inicio=0;
    fim=n-1;
    while(inicio<=fim){
        printf("inicio: %d, fim: %d\n", inicio, fim);
        meio=(inicio+fim)/2;
        if(elem<vetor[meio]){
            fim=meio-1;
        } //busca na metade esquerda
        else{
            if(elem>vetor[meio])
            {
                inicio=meio+1;//busca na metade direita
            }
            else
            {
                return meio;
            }
        }
    }
    return -1;
}


int main()
{
    int vetor1[10] = {120,150,110,130,100,160,140,190,180,170}; //vetor desordenado
    int vetor2[10]= {100,110,120,130,140,150,160,170,180,190}; //vetor ordenado

    printf("vetor desordenado:\n");
    for(int i = 0; i < 10; i++) 
    {
        printf("%d ", vetor1[i]);
    }
    int elem = 100;
    printf("\nElemento a ser procurado pela busca linear: %d\n", elem);
    printf("A posicao do elemento no vetor eh: %d\n", buscaLinear(vetor1, 10, elem));

    printf("\nvetor ordenado:\n");
    for(int i =0;i<10;i++)
    {
        printf("%d ",vetor2[i]);
    }
    elem = 170;
    printf("\nElemento a ser procurado pela busca ordenada: %d\n", elem);
    printf("A posicao do elemento no vetor eh: %d\n", buscaOrdenada(vetor2, 10, elem));

    elem = 130;
    printf("\nElemento a ser procurado pela busca binaria: %d\n", elem);
    printf("A posicao do elemento no vetor eh: %d\n", buscaBinaria(vetor2, 10, elem));
    printf("\n");

    return 0;
}