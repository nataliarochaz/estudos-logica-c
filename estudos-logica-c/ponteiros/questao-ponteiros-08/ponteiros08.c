#include <stdio.h>

void regenerar (int *vida, int *energia){
    if ((*vida) < 30){
        (*vida) = (*vida) * 2;
        (*energia) = (*energia) / 2;
    } else {
        (*vida) = (*vida) + 10;
        (*energia) = (*energia) + 20;
    }

    if ((*vida) > 100){
        (*vida) = 100;
    }

    if ((*energia) > 100){
        (*energia) = 100;
    }
}

int main()
{
    int vida, energia;

    vida = 20; energia = 90;
    printf("Vida inicial: %d | Energia inicial %d", vida, energia);
    regenerar(&vida, &energia);
    printf("\nVida atual: %d | Energia Atual %d", vida, energia);

    vida = 95; energia = 90;
    printf("\n\nVida inicial: %d | Energia inicial %d", vida, energia);
    regenerar(&vida, &energia);
    printf("\nVida atual: %d | Energia Atual %d", vida, energia);

    return 0;
}