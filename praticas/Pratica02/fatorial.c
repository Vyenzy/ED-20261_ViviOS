#include <stdio.h>

/* Iterativo: Complexidade O(n) */
long long fatorial_iterativo(int n) 
{
    long long res = 1;
    for (int i = 1; i <= n; i++) 
    {
        res *= i;
    }
    return res;
}

/* Recursivo: Complexidade O(n) */
long long fatorial_recursivo(int n) 
{
    if (n <= 1) return 1;
    return n * fatorial_recursivo(n - 1);
}

int main() 
{
    int teste = 5;
    printf("Fatorial de %d:\n", teste);
    printf("Iterativo: %lld => 1\n", fatorial_iterativo(teste));
    printf("Recursivo: %lld => 1\n", fatorial_recursivo(teste));
    return 0;
}