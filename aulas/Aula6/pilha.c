#include <stdlib.h>
#include "pilha.h"

Pilha *criar()
{
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));

    if (pilha == NULL)
    {
        return NULL;
    }

    pilha->topo = NULL;
    pilha->quantidade = 0;
    return pilha;
}

int pilha_vazia(Pilha *pilha)
{
    return pilha != NULL && pilha->topo == NULL;
}

No *pilha_topo(Pilha *pilha)
{
    return pilha->topo;
}

void empilhar(Pilha *pilha, int valor)
{

}

void desempilhar(Pilha *pilha, int valor)
{

}

void destruir(Pilha *pilha)
{

}