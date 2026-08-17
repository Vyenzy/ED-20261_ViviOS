#include <stdio.h>
#include "conta.h"

int main() 
{
    Conta minha_conta = conta_criar(1234);
    
    printf("Teste Criar: ");
    conta_ver_saldo(minha_conta);

    conta_depositar(&minha_conta, 500.0f);
    printf("Teste Deposito (500): %.2f => %i\n", minha_conta.saldo, minha_conta.saldo == 500.0f);

    int deu_certo = conta_sacar(&minha_conta, 200.0f);
    printf("Teste Saque (200): %.2f => %i\n", minha_conta.saldo, (minha_conta.saldo == 300.0f && deu_certo == 1));

    int falhou = conta_sacar(&minha_conta, 1000.0f);
    printf("Teste Saque Negado (1000): %i (saldo continua %.2f)\n", falhou == 0, minha_conta.saldo);

    conta_destruir(&minha_conta);
    printf("Teste Destruir: Numero eh %d => %i\n", minha_conta.numero, minha_conta.numero == 0);

    return 0;
}