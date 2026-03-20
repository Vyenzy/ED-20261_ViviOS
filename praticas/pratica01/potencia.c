#include <stdio.h>

    void calcula_potencia (float base, float exp) 
    {
        if (exp<=0) 
        {
            printf("\n\tExpoente Não inteiro ou Menor que zero. Insira novamente");
        }
        else if (exp>0) 
            {
                int potencia_temp = 1; 
                for (int i = 0; i<exp; i++) 
                {
                    potencia_temp = potencia_temp*base; 
                }
            printf("\n\tResultado: %d",potencia_temp);
            }
    }   

    int main () 
    {
    calcula_potencia(5,6);
    calcula_potencia(6,7);
    calcula_potencia(-2,1);
    calcula_potencia(2,0);
    calcula_potencia(10,3);
    return 0;
    } 