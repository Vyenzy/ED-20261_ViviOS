#include <stdio.h>
#include <stdlib.h>
#include "lista_linear.h"

int main() 
{
    Lista minha_lista = lista_criar();

    printf("Testes do TDA Lista Linear Duplamente Encadeada\n\n");

    printf("Lista esta vazia? %s\n\n", lista_esta_vazia(minha_lista) ? "Sim" : "Não");

    printf("Inserindo valores 10, 20, 30 e 40...\n");
    lista_inserir(minha_lista, 10);
    lista_inserir(minha_lista, 20);
    lista_inserir(minha_lista, 30);
    lista_inserir(minha_lista, 40);

    printf("Conteúdo atual da lista: ");
    lista_exibir(minha_lista);
    printf("\n");

    printf("Lista esta vazia? %s\n\n", lista_esta_vazia(minha_lista) ? "Sim" : "Não");

    printf("Buscando o valor 30: %s\n", lista_buscar(minha_lista, 30) ? "Encontrado" : "Nao encontrado");
    printf("Buscando o valor 99: %s\n\n", lista_buscar(minha_lista, 99) ? "Encontrado" : "Nao encontrado");

    printf("Removendo o valor 20...\n");
    lista_remover(minha_lista, 20);
    printf("Conteúdo após remoção: ");
    lista_exibir(minha_lista);
    printf("\n");

    printf("Removendo o valor 10 (primeiro item)...\n");
    lista_remover(minha_lista, 10);
    printf("Conteúdo após remoção: ");
    lista_exibir(minha_lista);
    printf("\n");

    printf("Removendo o valor 40 (último item)...\n");
    lista_remover(minha_lista, 40);
    printf("Conteúdo após remoção: ");
    lista_exibir(minha_lista);
    printf("\n");

    printf("Limpando a memória (destruindo a lista)...\n");
    lista_destruir(minha_lista);
    printf("Fim dos testes.\n");

    return 0;
}