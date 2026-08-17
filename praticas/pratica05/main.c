#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAMANHO 100

int main() 
{
    int vetor_original[TAMANHO];
    int vetor_teste[TAMANHO];
    clock_t inicio, termino;
    float duracao;
    int valor_alvo;
    int posicao;

    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) 
    {
        vetor_original[i] = rand() % 1000;
    }

    valor_alvo = vetor_original[42];

    printf("Teste de Algorítmos de Seleção (%d itens) \n\n", TAMANHO);
    printf("Valor alvo a ser buscado: %d\n\n", valor_alvo);

    for (int i = 0; i < TAMANHO; i++) vetor_teste[i] = vetor_original[i];
    
    inicio = clock();
    posicao = busca_sequencial(vetor_teste, TAMANHO, valor_alvo);
    termino = clock();
    duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;
    
    printf("Busca Sequencial:\n");
    printf("Posição encontrada: %d\n", posicao);
    printf("Tempo: %f segundos\n\n", duracao);

    for (int i = 0; i < TAMANHO; i++) vetor_teste[i] = vetor_original[i];

    inicio = clock();
    posicao = quick_select(vetor_teste, 0, TAMANHO - 1, valor_alvo);
    termino = clock();
    duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;

    printf("Quick Select:\n");
    printf("Posição no vetor particionado: %d\n", posicao);
    printf("Tempo: %f segundos\n", duracao);

    return 0;
}