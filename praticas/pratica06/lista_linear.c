#include <stdio.h>
#include <stdlib.h>
#include "lista_linear.h"

typedef struct no_t 
{
    struct no_t *anterior;
    int valor;
    struct no_t *proximo;
} no_t;

struct lista_t 
{
    no_t *primeiro;
    no_t *ultimo;
};

Lista lista_criar() 
{
    Lista l = (Lista)malloc(sizeof(struct lista_t));
    if (l != NULL) 
    {
        l->primeiro = NULL;
        l->ultimo = NULL;
    }
    return l;
}

int lista_esta_vazia(Lista l) 
{
    if (l == NULL) 
    {
        return 1;
    }
    return (l->primeiro == NULL);
}

void lista_inserir(Lista l, int valor) 
{
    if (l == NULL) return;

    no_t *novo = (no_t *)malloc(sizeof(no_t));
    if (novo == NULL) return;

    novo->valor = valor;
    novo->proximo = NULL;
    novo->anterior = l->ultimo;

    if (lista_esta_vazia(l)) 
    {
        l->primeiro = novo;
    } 
    else 
    {
        l->ultimo->proximo = novo;
    }
    l->ultimo = novo;
}

int lista_remover(Lista l, int valor) 
{
    if (l == NULL || lista_esta_vazia(l)) return 0;

    no_t *atual = l->primeiro;

    while (atual != NULL) 
    {
        if (atual->valor == valor) 
        {
            if (atual->anterior != NULL) 
            {
                atual->anterior->proximo = atual->proximo;
            } 
            else 
            {
                l->primeiro = atual->proximo;
            }

            if (atual->proximo != NULL) 
            {
                atual->proximo->anterior = atual->anterior;
            } 
            else 
            {
                l->ultimo = atual->anterior;
            }

            free(atual);
            return 1; 
        }
        atual = atual->proximo;
    }
    return 0; 
}

int lista_buscar(Lista l, int valor) 
{
    if (l == NULL) return 0;

    no_t *atual = l->primeiro;
    while (atual != NULL) 
    {
        if (atual->valor == valor) 
        {
            return 1;
        }
        atual = atual->proximo;
    }
    return 0;
}

void lista_exibir(Lista l) 
{
    if (l == NULL || lista_esta_vazia(l)) 
    {
        printf("A lista está vazia.\n");
        return;
    }

    no_t *atual = l->primeiro;
    printf("[ ");
    while (atual != NULL) 
    {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("]\n");
}

void lista_destruir(Lista l) 
{
    if (l != NULL) 
    {
        no_t *atual = l->primeiro;
        while (atual != NULL) 
        {
            no_t *proximo = atual->proximo;
            free(atual);
            atual = proximo;
        }
        free(l);
    }
}