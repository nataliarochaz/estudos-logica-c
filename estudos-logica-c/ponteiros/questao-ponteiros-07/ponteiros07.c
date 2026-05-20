#include <stdio.h>

void gerenciarSaldo (int *saldo, int *limiteEspecial){
    if ((*saldo) < 0){
        *saldo = *limiteEspecial;
        *limiteEspecial = 0;
    } else {
        *saldo = (*saldo) + (((*limiteEspecial) * 10) / 100);
        *limiteEspecial = (*limiteEspecial) - (((*limiteEspecial) * 5) / 100);
    }
    return;
}

int main()
{
    int saldo, limiteEspecial;

    saldo = -200; limiteEspecial = 500;
    printf("Saldo Inicial: %d\nLimite Especial Inicial: %d\n", saldo, limiteEspecial);
    gerenciarSaldo(&saldo, &limiteEspecial);
    printf("Saldo Atual: %d\nLimite Especial Atual: %d", saldo, limiteEspecial);

    saldo = 1000; limiteEspecial = 400;
    printf("\n\nSaldo Inicial: %d\nLimite Especial Inicial: %d\n", saldo, limiteEspecial);
    gerenciarSaldo(&saldo, &limiteEspecial);
    printf("Saldo Atual: %d\nLimite Especial Atual: %d", saldo, limiteEspecial);

    return 0;
}