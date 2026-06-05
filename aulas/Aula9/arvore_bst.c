#include <stdlib.h>
#include "arvore_bst.h"

No *criar (int valor)
{
    No *no = (No *)malloc(sizeof(No));

    if (no == NULL)
    {
        return NULL;
    }

    no->dado = valor;
    no->esquerda = NULL;
    no->direita = NULL;
    return no;
}

void destruir(No *no)
{
    free (no);
}

No *inserir (No *no, int valor)
{
    if (no == NULL)
    {
        return criar (valor);
    }

    if (valor < no->dado)
    {
        no->esquerda = inserir (no->esquerda, valor);
    } else if (valor > no->dado)
    {
        no->direita = inserir (no->direita, valor);
    }

    return no;
}

No *buscar (No *no, int valor)
{
    if (no == NULL)
    {
        return NULL;
    }

    if (valor == no->dado)
    {
        return no;
    }

    if (valor < no->dado)
    {
        return buscar (no->esquerda, valor);
    }

    return buscar (no->direita, valor);
}