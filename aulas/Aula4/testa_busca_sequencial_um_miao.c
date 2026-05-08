// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include "selecao.h"

// #define TAMANHO 1000000

// int main()
// {
//     int vetor [TAMANHO];

//     for (int i = 0; i < TAMANHO; i++)
//     {
//         vetor [i] = rand();
//     }
//     printf("primeiro = %i, ultimo = %i\n", vetor[0], vetor [TAMANHO - 1]);

//     int valor;
//     printf ("Entre com um número para buscar: ");
//     scanf ("%i", &valor);

//     clock_t inicio = clock();
//     int achou = busca_sequencial(vetor, TAMANHO, valor);
//     clock_t termino = clock();
//     float duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;
//     printf ("A busca pelo valor %i resultou em %i\n", valor, achou);
//     printf ("Levou %f segundos para buscar\n", duracao);
// }