#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main()
{
   int x;
   ArvBin *raiz;
   raiz = cria_arvBin();

   x = insere_arvBin(raiz, 150);
   if(x){
    printf("Elemento inserido na arvore com sucesso.\n");
   }else{
    printf("Erro: elemento nao inserido na arvore\n");
   }
   x = insere_arvBin(raiz, 110);
   if(x){
    printf("Elemento inserido na arvore com sucesso.\n");
   }else{
    printf("Erro: elemento nao inserido na arvore\n");
   }
   x = insere_arvBin(raiz, 100);
   if(x){
    printf("Elemento inserido na arvore com sucesso.\n");
   }else{
    printf("Erro: elemento nao inserido na arvore\n");
   }
   x = insere_arvBin(raiz, 130);
   if(x){
    printf("Elemento inserido na arvore com sucesso.\n");
   }else{
    printf("Erro: elemento nao inserido na arvore\n");
   }
   x = insere_arvBin(raiz, 120);
   if(x){
    printf("Elemento inserido na arvore com sucesso.\n");
   }else{
    printf("Erro: elemento nao inserido na arvore\n");
   }
   x = insere_arvBin(raiz, 140);
   if(x){
    printf("Elemento inserido na arvore com sucesso.\n");
   }else{
    printf("Erro: elemento nao inserido na arvore\n");
   }
   x = insere_arvBin(raiz, 160);
   if(x){
    printf("Elemento inserido na arvore com sucesso.\n");
   }else{
    printf("Erro: elemento nao inserido na arvore\n");
   }

    if(vazia_arvBin(raiz)){
        printf("A arvore esta vazia.");
   }else{
        printf("A arvores possui elementos.");
   }

   x = altura_arvBin(raiz);
   printf("\nAltura da arvore: %d", x);

   x = totalNO_arvBin(raiz);
   printf("\nTotal de nos na arvore: %d\n", x);

   printf("\nVisitando em pre-Ordem:\n");
   preOrdem_arvBin(raiz);
   printf("\nVisitando em-Ordem:\n");
   emOrdem_arvBin(raiz);
   printf("\nVisitando em pos-Ordem:\n");
   posOrdem_arvBin(raiz);

   x = remove_arvBin(raiz, 100);

   printf("\nBusca na arvore binaria: \n");
   if(consulta_arvBin(raiz, 140)){
    printf("\nConsulta realizada com sucesso!\n");
   }else{
    printf("\nElemento nao encontrado...\n");
   }

   liberar_arvBin(raiz);
}
