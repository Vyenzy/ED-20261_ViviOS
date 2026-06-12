#include <stdlib.h>
#include "max_heap.h"

MaxHeap *criar (int capacidade)
{
    MaxHeap *heap (MaxHeap *)malloc(sizeof(MaxHeap));
    if (heap == NULL)
    {
        return NULL
    }

    heap -> dados = (int *)malloc(sizeof(int)*capacidade);
    heap -> capacidade = capacidade;
    heap -> tamanho = 0;
    return heap;
}

void destruir (MaxHeap *raiz)
{
    free (raiz -> dados);
    free (raiz);
}

// Algorítmo de Flutuação
void up_heap (MaxHeap *raiz, int indice)
{
    int indice_pai = (indice - 1) / 2;

    while (indice > 0 && raiz -> dados [indice] > raiz -> dados [indice_pai])
    {
        // Troca filho com pai
        int temp = raiz -> dados [indice];
        raiz -> dados [indice] = raiz -> dados [indice_pai];
        raiz -> dados [indice_pai] = temp;

        // Sobe um nível da heap
        indice = indice_pai;
        indice_pai = (indice - 1) / 2;
    }
}

void inserir (MaxHeap *raiz, int valor)
{
    if (raiz -> tamanho >= raiz -> capacidade)
    {
        return;
    }

    raiz -> dados [raiz -> tamanho] = valor;
    raiz -> tamanho++;
    up_heap (raiz, raiz -> tamanho-1);\
}

void down_heap (MaxHeap *raiz, int indice)
{

}
int remover (MaxHeap *raiz)
{
    if (raiz -> tamanho == 0)
    {
        return -1;
    }
    
    int valor = raiz -> dados [0];
}