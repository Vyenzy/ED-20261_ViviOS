#include <stdio.h>
#include <time.h>

/* Ambas abordagens possuem complexidade O(n^2), onde n É a dimensao da matriz (10x10 = 100 operacoes) */

void percorre_aninhado(int mat[10][10]) 
{
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            int x = mat[i][j];
        }
    }
}

void percorre_unico(int *mat) 
{
    for (int i = 0; i < 100; i++) 
    {
        int x = mat[i];
    }
}

int main() 
{
    int matriz[10][10];
    clock_t inicio, fim;

    inicio = clock();
    percorre_aninhado(matriz);
    fim = clock();
    printf("Tempo Aninhado: %f\n", (double)(fim - inicio) / CLOCKS_PER_SEC);

    inicio = clock();
    percorre_unico((int *)matriz);
    fim = clock();
    printf("Tempo Laco Unico: %f\n", (double)(fim - inicio) / CLOCKS_PER_SEC);

    return 0;
}