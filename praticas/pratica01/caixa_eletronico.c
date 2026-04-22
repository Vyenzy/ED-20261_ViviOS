#include <stdio.h>

void calcula_saque(int valor) 
{
    if (valor <= 0 || valor > 1000) 
    {
        printf("Valor inválido\n");
        return;
    }

    int notas[] = {200, 100, 50, 20, 10, 5, 2};
    int quantidade;

    printf("Saque de %d:\n", valor);
    for (int i = 0; i < 7; i++) 
    {
        quantidade = valor / notas[i];
        valor %= notas[i];
        if (quantidade > 0) 
        {
            printf("%d nota(s) de %d\n", quantidade, notas[i]);
        }
    }
    printf("\n");
}

int main() 
{
    calcula_saque(387);
    calcula_saque(1000);
    calcula_saque(152);
    return 0;
}