#include <stdio.h>

/* Melhor caso: O(1) - Elemento está na primeira posição.
   Pior caso: O(n) - Elemento está na última posição ou não existe.
*/

int busca_sequencial(int vetor[], int tamanho, int alvo) 
{
    for (int i = 0; i < tamanho; i++) 
    {
        if (vetor[i] == alvo) 
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int numeros[100];
    for (int i = 0; i < 100; i++) 
    {
        numeros[i] = i; 
    }

    int pos = busca_sequencial(numeros, 100, 40);
    printf("Busca por 40: Posicao %d => %i\n", pos, pos == 40);

    pos = busca_sequencial(numeros, 100, 101); // 101 nao existe no vetor
    printf("Busca por 101: Posicao %d => %i\n", pos, pos == -1);

    return 0;
}