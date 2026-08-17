#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main() 
{
    Arvore *minha_arvore = arvore_criar();

    printf("Testes da Árvore Binária de Busca\n\n");
    
    printf("A árvore está vazia? %s\n\n", arvore_esta_vazia(minha_arvore) ? "Sim" : "Não");

    printf("Inserindo valores: 50, 30, 70, 20, 40, 60, 80...\n\n");
    arvore_inserir(minha_arvore, 50);
    arvore_inserir(minha_arvore, 30);
    arvore_inserir(minha_arvore, 70);
    arvore_inserir(minha_arvore, 20);
    arvore_inserir(minha_arvore, 40);
    arvore_inserir(minha_arvore, 60);
    arvore_inserir(minha_arvore, 80);

    printf("A árvore está vazia? %s\n\n", arvore_esta_vazia(minha_arvore) ? "Sim" : "Não");

    printf("Exibição em Pré-ordem (Raiz, Esquerda, Direita):\n");
    arvore_exibir_pre_ordem(minha_arvore);
    printf("\n\n");

    printf("Exibição em Ordem (Esquerda, Raiz, Direita):\n");
    arvore_exibir_em_ordem(minha_arvore);
    printf("\n\n");

    printf("Exibição em Pós-ordem (Esquerda, Direita, Raiz):\n");
    arvore_exibir_pos_ordem(minha_arvore);
    printf("\n\n");

    printf("Limpando a memória (destruindo a árvore)...\n");
    arvore_destruir(minha_arvore);
    
    printf("Fim dos testes.\n");

    return 0;
}