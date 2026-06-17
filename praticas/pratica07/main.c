#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() 
{
    int valor_topo;
    Pilha minha_pilha = pilha_criar();

    printf("Testes do Pilha\n\n");

    printf("A pilha está vazia? %s\n\n", pilha_esta_vazia(minha_pilha) ? "Sim" : "Não");

    printf("Empilhando valores 10, 20 e 30...\n");
    pilha_empilhar(minha_pilha, 10);
    pilha_empilhar(minha_pilha, 20);
    pilha_empilhar(minha_pilha, 30);

    printf("Conteúdo atual da pilha: ");
    pilha_exibir(minha_pilha);
    printf("\n");

    if (pilha_topo(minha_pilha, &valor_topo)) 
    {
        printf("Valor no topo: %d\n\n", valor_topo);
    }

    printf("Desempilhando o topo...\n");
    pilha_desempilhar(minha_pilha);
    
    printf("Conteúdo após desempilhar: ");
    pilha_exibir(minha_pilha);
    
    if (pilha_topo(minha_pilha, &valor_topo)) 
    {
        printf("Novo valor no topo: %d\n\n", valor_topo);
    }

    printf("Desempilhando novamente...\n");
    pilha_desempilhar(minha_pilha);
    pilha_exibir(minha_pilha);
    printf("\n");

    printf("Limpando a memória (destruindo a pilha)...\n");
    pilha_destruir(minha_pilha);
    printf("Fim dos testes.\n");

    return 0;
}