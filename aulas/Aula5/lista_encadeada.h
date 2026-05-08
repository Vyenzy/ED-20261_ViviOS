#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

typedef No struct 
{
    int dado;
    No *proximo;
} No;

typedef struct ListaEncadeada
{
    No *primeiro;
    No *ultimo;
    int quantidade;
} ListaEncadeada;

ListaEncadeada *criar();
void destruir (ListaEncadeada *lista);
void adicionar (ListaEncadeada *lista, int valor);
int lista_vazia(ListaEncadeada *lista);
void buscar (ListaEncadeada *lista, int valor);
void remover (ListaEncadeada *lista, int valor);

#endif


