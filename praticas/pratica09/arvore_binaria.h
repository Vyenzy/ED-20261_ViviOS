#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

typedef struct no_t 
{
    int valor;
    struct no_t *esquerda;
    struct no_t *direita;
} no_t;

typedef struct 
{
    no_t *raiz;
} Arvore;

Arvore *arvore_criar();
void arvore_inserir(Arvore *a, int valor);
void arvore_exibir_pre_ordem(Arvore *a);
void arvore_exibir_em_ordem(Arvore *a);
void arvore_exibir_pos_ordem(Arvore *a);
int arvore_esta_vazia(Arvore *a);
void arvore_destruir(Arvore *a);

#endif