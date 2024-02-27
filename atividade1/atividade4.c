#include <stdio.h>
#include <stdlib.h>

/*Implemente um programa para ordenação de um vetor de inteiros, utilizando o conceito de
Ordenação Oscilante, visto anteriormente, para o algoritmo de ordenação BubbleSort.*/
void Ordena_oscilante(int *v, int n) {
    int inicio = 0;
    int fim = n - 1;
    int trocou, i, aux;
    do {
        trocou = 0;
        // Da esquerda para a direita
        for (i = inicio; i < fim; i++) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                trocou = 1;
                fim = i;
            }
        }

        if (!trocou) {
            break;
        }

        trocou = 0;

        // Da direita para a esquerda
        for (i = fim - 1; i >= inicio; i--) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                trocou = 1;
                inicio = i + 1;
            }
        }

    } while (inicio < fim);
}
int main() {
    int vetor[] = {120,150,110,130,160,140,190,180,170};
    int n = sizeof(vetor)/sizeof(vetor[0]);
    int i;
    printf("Vetor desordenado: ");
    for (i = 0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    Ordena_oscilante(vetor, n);
    printf("\nOrdenado por metodo bubbleSort oscilante: - Cocktailsort\n");
    for (i = 0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    return 0;
}