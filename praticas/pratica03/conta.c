#include <stdio.h>
#include "conta.h"

Conta conta_criar(int numero) 
{
    Conta c;
    c.numero = numero;
    c.saldo = 0.0f;
    return c;
}

void conta_depositar(Conta *c, float valor) 
{
    if (valor > 0) 
    {
        c->saldo += valor;
    }
}

int conta_sacar(Conta *c, float valor) 
{
    if (valor > 0 && c->saldo >= valor) 
    {
        c->saldo -= valor;
        return 1;
    }
    return 0;
}

void conta_ver_saldo(Conta c) 
{
    printf("Conta: %d | Saldo: R$ %.2f\n", c.numero, c.saldo);
}

void conta_destruir(Conta *c) 
{
    c->numero = 0;
    c->saldo = 0.0f;
}