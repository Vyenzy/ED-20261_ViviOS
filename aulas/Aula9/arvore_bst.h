#ifndef ARVORE_BST_H
#define ARVORE_BST_H

typedef struct No
{
    int dado;
    struct No *esquerda;
    struct No *direita;
} No;

No *criar(int valor);
void destruir(No *no);
No *inserir(No *no, int valor);
No *buscar(No *no, int valor);

#endif