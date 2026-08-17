#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() 
{
    int valor_inicio;
    Fila minha_fila = fila_criar();

    printf("Testes da Fila\n\n");

    printf("A fila está vazia? %s\n\n", fila_esta_vazia(minha_fila) ? "Sim" : "Não");

    printf("Enfileirando valores 1, 8 e 0...\n");
    fila_enfileirar(minha_fila, 1);
    fila_enfileirar(minha_fila, 8);
    fila_enfileirar(minha_fila, 0);

    printf("Conteúdo atual da fila: ");
    fila_exibir(minha_fila);
    printf("\n");

    if (fila_inicio(minha_fila, &valor_inicio)) 
    {
        printf("Valor no início da fila: %d\n\n", valor_inicio);
    }

    printf("Desenfileirando o primeiro item...\n");
    fila_desenfileirar(minha_fila);
    
    printf("Conteúdo após desenfileirar: ");
    fila_exibir(minha_fila);
    
    if (fila_inicio(minha_fila, &valor_inicio)) 
    {
        printf("Novo valor no início da fila: %d\n\n", valor_inicio);
    }

    printf("Enfileirando o valor 6...\n");
    fila_enfileirar(minha_fila, 6);
    fila_exibir(minha_fila);
    printf("\n");

    printf("Desenfileirando mais duas vezes...\n");
    fila_desenfileirar(minha_fila);
    fila_desenfileirar(minha_fila);
    fila_exibir(minha_fila);
    printf("\n");

    printf("Limpando a memória (destruindo a fila)...\n");
    fila_destruir(minha_fila);
    printf("Fim dos testes.\n");

    return 0;
}