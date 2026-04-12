#include <stdio.h>

float calcula_potencia(float base, int exp) 
{
    if (exp < 0) 
    {
        return -1.0f;
    }

    float resultado = 1.0f;
    for (int i = 0; i < exp; i++) 
    {
        resultado = resultado * base;
    }
    return resultado;
}

int main() 
{
    float res;

    res = calcula_potencia(5, 3);
    printf("5^3 = %.1f => %i\n", res, res == 125.0f);

    res = calcula_potencia(2, 0);
    printf("2^0 = %.1f => %i\n", res, res == 1.0f);

    res = calcula_potencia(10, 2);
    printf("10^2 = %.1f => %i\n", res, res == 100.0f);

    res = calcula_potencia(3, -5);
    if (res == -1.0f) 
    {
        printf("3^-5 = Erro: O expoente não pode ser negativo! => 1\n");
    }

    return 0;
}