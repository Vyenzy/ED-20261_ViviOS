#include <stdio.h>
#include "fila.h"

int main()
{
    Fila *fila = criar();

    enfileirar(fila, 1); 
    enfileirar(fila, 8); 
    enfileirar(fila, 0);
    
    No *no = fila->primeiro;
    while (no != NULL)
    {
        printf ("%i ->", no->dados);
        no = no->proximo;
    }
    printf ("\n");

    desenfileirar(fila);

    no = fila->primeiro;
    while (no != NULL)
    {
        printf ("%i ->", no->dados);
        no = no->proximo;
    }
    printf ("\n");    

    enfileirar(fila, 6);

    no = fila->primeiro;
    while (no != NULL)
    {
        printf ("%i ->", no->dados);
        no = no->proximo;
    }
    printf ("\n");

    desenfileirar(fila);

    no = fila->primeiro;
    while (no != NULL)
    {
        printf ("%i ->", no->dados);
        no = no->proximo;
    }
    printf ("\n");

    desenfileirar(fila);

    no = fila->primeiro;
    while (no != NULL)
    {
        printf ("%i ->", no->dados);
        no = no->proximo;
    }
    printf ("\n");

    return 0;
}