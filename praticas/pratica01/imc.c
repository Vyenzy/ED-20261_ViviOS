#include <stdio.h>

float imc(FILE *arquivo,float peso, float altura)
{
    if (peso <= 0 || altura <= 0) 
    {
        fprintf(arquivo, "Valores solicitados inválidos.");
        fclose(arquivo); 
    } 
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
    scanf("%f", &peso);
    printf("Insira a altura:");
    scanf("%f", &altura);
    float imc_result = imc(arquivo, peso, altura);
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