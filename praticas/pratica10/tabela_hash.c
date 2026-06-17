#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

static int calcular_hash(int valor, int tamanho) 
{
    return valor % tamanho;
}

TabelaHash *hash_criar(int tamanho) 
{
    TabelaHash *h = (TabelaHash *)malloc(sizeof(TabelaHash));
    if (h != NULL) 
    {
        h->tamanho = tamanho;
        h->tabela = (no_t **)malloc(sizeof(no_t *) * tamanho);
        for (int i = 0; i < tamanho; i++) 
        {
            h->tabela[i] = NULL;
        }
    }
    return h;
}

int hash_esta_vazia(TabelaHash *h) 
{
    if (h == NULL) return 1;
    for (int i = 0; i < h->tamanho; i++) 
    {
        if (h->tabela[i] != NULL) 
        {
            return 0;
        }
    }
    return 1;
}

void hash_inserir(TabelaHash *h, int valor) 
{
    if (h == NULL) return;
    int indice = calcular_hash(valor, h->tamanho);
    
    no_t *novo = (no_t *)malloc(sizeof(no_t));
    if (novo != NULL) 
    {
        novo->valor = valor;
        novo->proximo = h->tabela[indice];
        h->tabela[indice] = novo;
    }
}

int hash_buscar(TabelaHash *h, int valor) 
{
    if (h == NULL) return -1;
    int indice = calcular_hash(valor, h->tamanho);
    
    no_t *atual = h->tabela[indice];
    while (atual != NULL) 
    {
        if (atual->valor == valor) 
        {
            return indice;
        }
        atual = atual->proximo;
    }
    return -1;
}

void hash_remover(TabelaHash *h, int valor) 
{
    if (h == NULL) return;
    int indice = calcular_hash(valor, h->tamanho);
    
    no_t *atual = h->tabela[indice];
    no_t *anterior = NULL;

    while (atual != NULL) 
    {
        if (atual->valor == valor) 
        {
            if (anterior == NULL) 
            {
                h->tabela[indice] = atual->proximo;
            } 
            else 
            {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
}

void hash_exibir(TabelaHash *h) 
{
    if (h == NULL) return;
    for (int i = 0; i < h->tamanho; i++) 
    {
        printf("[%d] -> ", i);
        no_t *atual = h->tabela[i];
        while (atual != NULL) 
        {
            printf("%d -> ", atual->valor);
            atual = atual->proximo;
        }
        printf("NULL\n");
    }
}

void hash_destruir(TabelaHash *h) 
{
    if (h != NULL) 
    {
        for (int i = 0; i < h->tamanho; i++) 
        {
            no_t *atual = h->tabela[i];
            while (atual != NULL) 
            {
                no_t *proximo = atual->proximo;
                free(atual);
                atual = proximo;
            }
        }
        free(h->tabela);
        free(h);
    }
}