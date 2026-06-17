#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

Arvore *arvore_criar() 
{
    Arvore *a = (Arvore *)malloc(sizeof(Arvore));
    if (a != NULL) 
    {
        a->raiz = NULL;
    }
    return a;
}

int arvore_esta_vazia(Arvore *a) 
{
    if (a == NULL) 
    {
        return 1;
    }
    return (a->raiz == NULL);
}


static no_t *inserir_no(no_t *no, int valor) 
{
    if (no == NULL) 
    {
        no_t *novo = (no_t *)malloc(sizeof(no_t));
        if (novo != NULL) 
        {
            novo->valor = valor;
            novo->esquerda = NULL;
            novo->direita = NULL;
        }
        return novo;
    }

    if (valor < no->valor) 
    {
        no->esquerda = inserir_no(no->esquerda, valor);
    } 
    else if (valor > no->valor) 
    {
        no->direita = inserir_no(no->direita, valor);
    }

    return no;
}

void arvore_inserir(Arvore *a, int valor) 
{
    if (a != NULL) 
    {
        a->raiz = inserir_no(a->raiz, valor);
    }
}


static void exibir_pre_ordem(no_t *no) 
{
    if (no != NULL) 
    {
        printf("[%d] ", no->valor);
        exibir_pre_ordem(no->esquerda);
        exibir_pre_ordem(no->direita);
    }
}

void arvore_exibir_pre_ordem(Arvore *a) 
{
    if (a != NULL && !arvore_esta_vazia(a)) 
    {
        exibir_pre_ordem(a->raiz);
    }
}

static void exibir_em_ordem(no_t *no) 
{
    if (no != NULL) 
    {
        exibir_em_ordem(no->esquerda);
        printf("[%d] ", no->valor);
        exibir_em_ordem(no->direita);
    }
}

void arvore_exibir_em_ordem(Arvore *a) 
{
    if (a != NULL && !arvore_esta_vazia(a)) 
    {
        exibir_em_ordem(a->raiz);
    }
}

static void exibir_pos_ordem(no_t *no) 
{
    if (no != NULL) 
    {
        exibir_pos_ordem(no->esquerda);
        exibir_pos_ordem(no->direita);
        printf("[%d] ", no->valor);
    }
}

void arvore_exibir_pos_ordem(Arvore *a) 
{
    if (a != NULL && !arvore_esta_vazia(a)) 
    {
        exibir_pos_ordem(a->raiz);
    }
}


static void destruir_nos(no_t *no) 
{
    if (no != NULL) 
    {
        destruir_nos(no->esquerda);
        destruir_nos(no->direita);
        free(no);
    }
}

void arvore_destruir(Arvore *a) 
{
    if (a != NULL) 
    {
        destruir_nos(a->raiz);
        free(a);
    }
}