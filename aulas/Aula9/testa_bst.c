#include <stdio.h>
#include "arvore_bst.h"

int main()
{
    No *raiz = criar(50);
    
    inserir (raiz, 30);
    inserir (raiz, 30);
    inserir (raiz, 70);
    inserir (raiz, 20);
    inserir (raiz, 40);
    inserir (raiz, 60);
    inserir (raiz, 80);

    printf("Pre ordem:\n");
    pre_ordem(raiz);
    printf("\n");

    printf("Em ordem:\n");
    em_ordem(raiz);
    printf("\n");

    printf("Pos ordem:\n");
    pos_ordem(raiz);
    printf("\n");

    No *no = buscar (raiz, 60);
    if (no != NULL)
    {
        printf("Achei o 60 no noh %p\n", no);
    } else 
    {
        printf("Nao achei!\n");
    }

    return 0;
}