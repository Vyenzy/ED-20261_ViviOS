#include <stdio.h>
#include "tabela_hash.h"

int main() 
{
    TabelaHash *minha_tabela = hash_criar(5);

    printf("Testes da Tabela Hash\n\n");

    printf("Tabela esta vazia? %s\n\n", hash_esta_vazia(minha_tabela) ? "Sim" : "Nao");

    hash_inserir(minha_tabela, 10);
    hash_inserir(minha_tabela, 22);
    hash_inserir(minha_tabela, 31);
    hash_inserir(minha_tabela, 4);
    hash_inserir(minha_tabela, 15);
    hash_inserir(minha_tabela, 28);

    printf("Conteudo da tabela (tamanho 5):\n");
    hash_exibir(minha_tabela);
    printf("\n");

    printf("Tabela esta vazia? %s\n\n", hash_esta_vazia(minha_tabela) ? "Sim" : "Nao");

    int indice = hash_buscar(minha_tabela, 15);
    if (indice != -1) printf("Valor 15 encontrado no indice [%d]\n", indice);
    else printf("Valor 15 nao encontrado\n");

    indice = hash_buscar(minha_tabela, 99);
    if (indice != -1) printf("Valor 99 encontrado no indice [%d]\n", indice);
    else printf("Valor 99 nao encontrado\n");

    printf("\nRemovendo valor 31...\n");
    hash_remover(minha_tabela, 31);
    hash_exibir(minha_tabela);
    printf("\n");

    hash_destruir(minha_tabela);
    
    printf("Fim dos testes.\n");

    return 0;
}