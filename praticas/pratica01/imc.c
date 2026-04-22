#include <stdio.h>

float calcula_imc(float altura, float peso)
{
    if (altura <= 0.0f || peso <= 0.0f)
    {
        return 0.0f;
    }
    return peso / (altura * altura);
}

int main()
{
    float imc = 0.0f;

    imc = calcula_imc(0.0f, 50.0f);
    printf("Teste 1: %.1f => %i\n", imc, imc == 0);

    imc = calcula_imc(1.75f, 50.0f);
    printf("Teste 2 (Abaixo): %.1f => %i\n", imc, imc < 18.5f);

    imc = calcula_imc(1.75f, 70.0f);
    printf("Teste 3 (Normal): %.1f => %i\n", imc, imc >= 18.5f && imc <= 24.9f);

    imc = calcula_imc(1.75f, 85.0f);
    printf("Teste 4 (Sobrepeso): %.1f => %i\n", imc, imc >= 25.0f && imc <= 29.9f);

    imc = calcula_imc(1.75f, 100.0f);
    printf("Teste 5 (Obesidade): %.1f => %i\n", imc, imc >= 30.0f);

    return 0;
}