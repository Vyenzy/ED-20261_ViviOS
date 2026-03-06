#include <stdio.h>

float imc(float peso, float altura)
{
    return peso / (altura * altura);
}

int main ()
{
    FILE *arquivo = fopen("Calc_IMC.txt", "w+");
    if (arquivo == NULL) 
    {
        printf("Falha ao criar o arquivo");
        return 1;
    }
    float peso, altura;
    printf("Insira o peso:");
    scanf("%.2f", &peso);
    printf("Insira a altura:");
    scanf("%.2f", &altura);
    if (peso <= 0 || altura <= 0) 
    {
        fprintf(arquivo, "Valores solicitados inválidos.");
    }
    float imc_result = imc(peso, altura);
    if (imc_result < 18.5)
    {
        fprintf (arquivo, "Abaixo do peso."); 
    } 
    else if (imc_result < 25)
    {
        fprintf (arquivo, "Peso normal."); 
    } 
    else     
    {
        fprintf (arquivo, "Acima do peso."); 
    } 
    fclose(arquivo);
    return 0;
}