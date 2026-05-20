#include <stdio.h>

void converterParaReal (double *dolar, double *taxaCambio){
    *dolar = (*dolar) * (*taxaCambio);

    return;
}

int main()
{
    double dolar = 10, taxaCambio = 5;

    printf ("Dolar: %.2f Cambio: %.2f\n", dolar, taxaCambio);
    converterParaReal (&dolar, &taxaCambio);
    printf ("Em real: %.2f", dolar);

    return 0;
}