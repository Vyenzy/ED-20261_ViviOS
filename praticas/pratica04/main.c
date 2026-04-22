#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAMANHO 100

int main() 
{
    int vetor_original[TAMANHO];
    int vetor_teste[TAMANHO];
    clock_t inicio, termino;
    float duracao;

    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) 
    {
        vetor_original[i] = rand() % 1000;
    }

    printf("Teste de Algorítmos de Ordenação (%d itens) \n\n", TAMANHO);

    for (int i = 0; i < TAMANHO; i++) vetor_teste[i] = vetor_original[i];
    inicio = clock();
    bubble_sort(vetor_teste, TAMANHO);
    termino = clock();
    duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;
    printf("Tempo Bubble Sort:    %f segundos\n", duracao);

    for (int i = 0; i < TAMANHO; i++) vetor_teste[i] = vetor_original[i];
    inicio = clock();
    selection_sort(vetor_teste, TAMANHO);
    termino = clock();
    duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;
    printf("Tempo Selection Sort: %f segundos\n", duracao);

    for (int i = 0; i < TAMANHO; i++) vetor_teste[i] = vetor_original[i];
    inicio = clock();
    quick_sort(vetor_teste, 0, TAMANHO - 1);
    termino = clock();
    duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;
    printf("Tempo Quick Sort:     %f segundos\n", duracao);

    return 0;
}