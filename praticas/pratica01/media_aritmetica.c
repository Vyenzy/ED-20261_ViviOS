#include <stdio.h>

float calcula_media(int n, float numeros[]) 
{
    if (n <= 0 || n > 100) 
    {
        return 0.0f;
    }

    float soma = 0.0f;
    for (int i = 0; i < n; i++) 
    {
        soma += numeros[i];
    }
    return soma / n;
}

int main() 
{
    float lista1[] = {10.0f, 20.0f, 30.0f};
    float m1 = calcula_media(3, lista1);
    printf("Media 1: %.2f => %i\n", m1, m1 == 20.0f);

    float lista2[] = {5.0f, 5.0f, 5.0f, 5.0f, 5.0f};
    float m2 = calcula_media(5, lista2);
    printf("Media 2: %.2f => %i\n", m2, m2 == 5.0f);

    return 0;
}