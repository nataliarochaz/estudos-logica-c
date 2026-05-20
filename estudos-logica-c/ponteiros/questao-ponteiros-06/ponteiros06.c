#include <stdio.h>

void ajustarLimites (float *velAtual, float *velMax){
    if ((*velAtual) > (*velMax)){
        (*velAtual) = (0.9* (*velMax));
        (*velMax) = (*velMax)+ (0.1 * (*velMax));
    } else {
        (*velAtual) = (*velAtual) + (0.05* (*velMax));
        (*velMax) = (*velMax) - (0.02 * (*velMax));
    }
    return;
}

int main()
{
    float velAtual=120, velMax=100;

    printf("Velocidade Atual: %.2f\nVelocidade Maxima: %.2f", velAtual, velMax);
    ajustarLimites (&velAtual, &velMax);
    printf("\nAjuste Atual: %.2f\nAjuste Maxima: %.2f", velAtual, velMax);

    velAtual=80; velMax = 100;
    printf("\n\nVelocidade Atual: %.2f\nVelocidade Maxima: %.2f", velAtual, velMax);
    ajustarLimites (&velAtual, &velMax);
    printf("\nAjuste Atual: %.2f\nAjuste Maxima: %.2f", velAtual, velMax);

    return 0;
}